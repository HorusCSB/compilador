grammar gramatica;
// comando para rodar:
// java -cp "/home/tcc/Downloads/antlr-4.13.2-complete.jar" org.antlr.v4.Tool -Dlanguage=Cpp gramatica.g4 -visitor -listener -o saida

// Regra inicial (onde a análise começa)

programa
    : declaracaoClasse* declaracaoFuncao* blocoStart EOF
    ;

declaracaoClasse
    : CLASS ID L_CHAVE corpoClasse* R_CHAVE
    ;

corpoClasse
    : declaracaoVariavel
    ;

blocoStart
    : START bloco
    ;

bloco
    : L_CHAVE comando* R_CHAVE
    ;

comando
    : declaracaoVariavel
    | atribuicao
    | estruturaWhile
    | estruturaIf
    | comandoPrint
    | comandoScan
    ;

declaracaoVariavel
    : tipo ID (RECEBA (novaInstancia | expressao))? PONTOV
    ;

atribuicao
    : acesso RECEBA expressao PONTOV
    ;

estruturaWhile
    : WHILE L_PARENTESE condicao R_PARENTESE bloco
    ;

estruturaIf
    : IF L_PARENTESE condicao R_PARENTESE bloco
      estruturaElsif*
      estruturaElse?
    ;

estruturaElsif
    : ELSE IF L_PARENTESE condicao R_PARENTESE bloco
    ;

estruturaElse
    : ELSE bloco
    ;

//segue hierarquia
// ! (not) >> && (and) >> || (or)
// parentese acima de todos
condicao
    : condicaoAnd (OR condicaoAnd)*
    ;

condicaoAnd
    : condicaoNot (AND condicaoNot)*
    ;

condicaoNot
    : NOT condicaoNot
    | condicaoPrimaria
    ;

condicaoPrimaria
    : L_PARENTESE condicao R_PARENTESE
    | acesso
    | expressao operadorComparacao expressao
    ;

operadorComparacao
    : IGUAL | DIFF | MENOR | MENOR_IGUAL | MAIOR | MAIOR_IGUAL
    ;

novaInstancia
    : NEW ID L_PARENTESE R_PARENTESE
    ;

//segue hierarquia
//3 + 4 * 5 é interpretado como 3 + (4 * 5)
expressao
    : expressaoSoma
    ;

expressaoSoma
    : expressaoProduto ((SOMA | SUBTRACAO) expressaoProduto)*
    ;

expressaoProduto
    : expressaoPrimaria ((MULTIPLICACAO | DIVISAO) expressaoPrimaria)*
    ;

expressaoPrimaria
    : chamadaFuncao
    | NUM_INT
    | NUM_FLOAT
    | STRING
    | CHAR
    | acesso
    | L_PARENTESE expressao R_PARENTESE
    ;

comandoPrint
    : PRINT L_PARENTESE (expressao) R_PARENTESE PONTOV
    ;

comandoScan
    : SCAN L_PARENTESE acesso R_PARENTESE PONTOV
    ;
    
declaracaoFuncao
    : tipo ID L_PARENTESE parametros? R_PARENTESE blocoFuncao
    ;
    
parametros
    : parametro (VIRGULA parametro)*
    ;

parametro
    : tipo ID
    ;
    
blocoFuncao
    : L_CHAVE comando* comandoRetorno R_CHAVE
    ;
    
comandoRetorno
    : RETURN expressao PONTOV
    ;
    
chamadaFuncao
    : ID L_PARENTESE argumentos? R_PARENTESE
    ;

argumentos
    : expressao (VIRGULA expressao)*
    ;

acesso
    : ID
    | ID '.' ID
    ;

tipo
    : TK_INT
    | TK_FLOAT
    | TK_STRING
    | TK_CHAR
    | ID // nome de classe
    ;

START : 'start';
NUM_INT : [0-9]+ ;
NUM_FLOAT : [0-9]+ '.' [0-9]+ ;
STRING : '"' (~["\\] | '\\' .)* '"' ;
CHAR : '\'' . '\'' ;
L_CHAVE : '{';
R_CHAVE : '}';
L_PARENTESE : '(';
R_PARENTESE : ')';
VIRGULA : ',';
PONTOV : ';';
AND : '&&';
OR : '||';
NOT : '!';
IGUAL : '==';
DIFF : '!=';
MENOR : '<';
MAIOR : '>';
MAIOR_IGUAL : '>=';
MENOR_IGUAL : '<=';
SOMA : '+' ; 
SUBTRACAO  : '-' ;
MULTIPLICACAO : '*' ;
DIVISAO : '/' ;
RECEBA : '=';
IF : 'if';
ELSE : 'else';
WHILE : 'while';
RETURN : 'return';
NEW : 'new';
TK_INT : 'int';
TK_FLOAT : 'float';
TK_STRING : 'string';
TK_CHAR : 'char';
CLASS : 'class';
PRINT : 'printf';
SCAN : 'scanf';

ID : [a-zA-Z_] [a-zA-Z_0-9]* ;

ESPACO       : [ \t\r\n]+ -> skip ; //ignora espaco em branco
COMENTARIO : '//' ~[\r\n]* -> skip ;
