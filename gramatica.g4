grammar gramatica;
// comando para rodar:
// java -cp "/home/tcc/Downloads/antlr-4.13.2-complete.jar" org.antlr.v4.Tool -Dlanguage=Cpp gramatica.g4 -visitor -listener -o saida

// Regra inicial (onde a análise começa)
programa : expressao EOF; // Um programa é uma expressão seguida pelo fim do arquivo


programa:
    lista_declaracoes 
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
    tipo_especificador ID PONTO_V
    ;


tipo_especificador:
    INT
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
    ID RECEBE expressao PONTO_V
    | ID RECEBE chamada_funcao
    ;

chamada_funcao:
    ID L_PARENTESES lista_expressoes R_PARENTESES PONTO_V
    ;

condicional:
    SE L_PARENTESES expressao R_PARENTESES bloco
    | SE L_PARENTESES expressao R_PARENTESES bloco ENTAO bloco
    ;

repeticao:
    ENQUANTO L_PARENTESES lista_expressoes R_PARENTESES bloco
    ;

lista_expressoes:
    expressao
    | expressao VIRGULA lista_expressoes
    |
    ;

retorno:
    RETORNA expressao PONTO_V
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
    | expressao DIFERENTE expressao
    | termo_operacao
    ;

termo_operacao:
    base_expressao
    | base_expressao MULT termo_operacao
    | base_expressao DIVIDE termo_operacao
    ;

base_expressao:
    ID
    | NUMERO
    | L_PARENTESES expressao R_PARENTESES
    ;

// Regras Léxicas (Tokens)
ID: [a-zA-Z_][a-zA-Z_0-9]*;
NUMERO : [0-9]+ ;
MAIS   : '+' ; 
MENOS  : '-' ;
MULT   : '*' ;
DIV    : '/' ;
LPAREN : '(' ;
RPAREN : ')' ;
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
LCHAVE : '{';   
RCHAVE : '}'; 
FUNCTION : 'function';
RETURN : 'return';
UNKNOWN : . ;


ESPACO : [ \t\r\n]+ -> skip ; // Ignora espaços em branco, tabulações e novas linhas