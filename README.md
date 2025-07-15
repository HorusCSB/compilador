# compilador
Compilador em C++ com análise léxica, sintática e semântica

#comandos
gera antlr: java -cp C:\Users\Henrique-PC\antlr4\antlr-4.9.1-complete.jar org.antlr.v4.Tool -Dlanguage=Cpp gramatica.g4 -visitor -listener -o saida   

limpar cache cmake: cmake -B build
compilar alteraçoes: cmake --build build

executar compilador com base no codigo de exemploCod.txt: 
.\build\Debug\trabCompila.exe