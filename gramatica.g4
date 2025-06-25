grammar gramatica;
// comando para rodar:
// java -cp "/home/tcc/Downloads/antlr-4.13.2-complete.jar" org.antlr.v4.Tool -Dlanguage=Cpp gramatica.g4 -visitor -listener -o saida

// Regra inicial (onde a análise começa)

programa:
    lista_declaracoes 
    | expressao EOF
    ;

lista_declaracoes:
    declaracao
    | declaracao lista_declaracoes
    ;

declaracao:
    declaracao_funcao
    | declaracao_variavel
    ;

declaracao_funcao:
    tipo_especificador ID L_PARENTESES parametros_lista R_PARENTESES bloco
    ;

declaracao_variavel:
    tipo_especificador ID END_LINE
    ;


tipo_especificador:
    INT
    | FLOAT
    | STRING
    ;

parametros_lista:
    parametro
    | parametro VIRGULA parametros_lista
    |
    ;

parametro:
    tipo_especificador ID
    ;

bloco:
    L_CHAVE lista_comandos R_CHAVE
    ;

lista_comandos:
    comando
    | comando lista_comandos
    |
    ;

comando:
    declaracao_variavel
    | atribuicao
    | chamada_funcao
    | condicional
    | repeticao
    | retorno
    ;

atribuicao:
    ID RECEBA expressao END_LINE
    | ID RECEBA chamada_funcao
    ;

chamada_funcao:
    ID L_PARENTESES lista_expressoes R_PARENTESES END_LINE
    ;

condicional:
    IF L_PARENTESES expressao R_PARENTESES bloco
    | IF L_PARENTESES expressao R_PARENTESES bloco WHILE bloco
    ;

repeticao:
    WHILE L_PARENTESES lista_expressoes R_PARENTESES bloco
    ;

lista_expressoes:
    expressao
    | expressao VIRGULA lista_expressoes
    |
    ;

retorno:
    RETURN expressao END_LINE
    ;

expressao:
    expressao MAIS expressao
    | expressao MENOS expressao
    | expressao MULT expressao
    | expressao DIVIDE expressao
    | expressao MENOR expressao
    | expressao MENOR_IGUAL expressao
    | expressao MAIOR expressao
    | expressao MAIOR_IGUAL expressao
    | expressao IGUAL expressao
    | expressao DIFF expressao
    | termo_operacao
    ;

termo_operacao:
    base_expressao
    | base_expressao MULT termo_operacao
    | base_expressao DIVIDE termo_operacao
    ;

base_expressao:
    ID
    | INT
    | L_PARENTESES expressao R_PARENTESES
    ;

// Regras Léxicas (Tokens)
ID: [a-zA-Z_][a-zA-Z_0-9]*;
INT : [0-9]+ ;
FLOAT: [+-]?([0-9]?[.])?[0-9]+;
MAIS   : '+' ; 
MENOS  : '-' ;
MULT   : '*' ;
DIVIDE    : '/' ;
L_PARENTESES : '(' ;
R_PARENTESES : ')' ;
AND : '&&';
OR : '||';
IGUAL : '==';
DIFF : '!=';
MENOR : '<';
MAIOR : '>';
MAIOR_IGUAL : '>=';
MENOR_IGUAL : '<=';
CLASSE : 'class';
IF : 'if';
ELSE : 'else';
WHILE : 'while';
END_LINE : ';';
VIRGULA : ',';
STRING_LITERAL : '"'; // aspas duplas
STRING : [^.*$];
LBARRA : '[';  
RBARRA : ']'; 
L_CHAVE : '{';   
R_CHAVE : '}'; 
FUNCTION : 'function';
RETURN : 'return';
RECEBA : '=';
UNKNOWN : . ;


ESPACO : [ \t\r\n]+ -> skip ; // Ignora espaços em branco, tabulações e novas linhas