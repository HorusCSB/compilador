// Generated from c:/Users/Henrique-PC/Documents/repos/compilador/gramatica.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link gramaticaParser}.
 */
public interface gramaticaListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#programa}.
	 * @param ctx the parse tree
	 */
	void enterPrograma(gramaticaParser.ProgramaContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#programa}.
	 * @param ctx the parse tree
	 */
	void exitPrograma(gramaticaParser.ProgramaContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#declaracaoClasse}.
	 * @param ctx the parse tree
	 */
	void enterDeclaracaoClasse(gramaticaParser.DeclaracaoClasseContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#declaracaoClasse}.
	 * @param ctx the parse tree
	 */
	void exitDeclaracaoClasse(gramaticaParser.DeclaracaoClasseContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#corpoClasse}.
	 * @param ctx the parse tree
	 */
	void enterCorpoClasse(gramaticaParser.CorpoClasseContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#corpoClasse}.
	 * @param ctx the parse tree
	 */
	void exitCorpoClasse(gramaticaParser.CorpoClasseContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#blocoStart}.
	 * @param ctx the parse tree
	 */
	void enterBlocoStart(gramaticaParser.BlocoStartContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#blocoStart}.
	 * @param ctx the parse tree
	 */
	void exitBlocoStart(gramaticaParser.BlocoStartContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#bloco}.
	 * @param ctx the parse tree
	 */
	void enterBloco(gramaticaParser.BlocoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#bloco}.
	 * @param ctx the parse tree
	 */
	void exitBloco(gramaticaParser.BlocoContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#comando}.
	 * @param ctx the parse tree
	 */
	void enterComando(gramaticaParser.ComandoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#comando}.
	 * @param ctx the parse tree
	 */
	void exitComando(gramaticaParser.ComandoContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#declaracaoVariavel}.
	 * @param ctx the parse tree
	 */
	void enterDeclaracaoVariavel(gramaticaParser.DeclaracaoVariavelContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#declaracaoVariavel}.
	 * @param ctx the parse tree
	 */
	void exitDeclaracaoVariavel(gramaticaParser.DeclaracaoVariavelContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#atribuicao}.
	 * @param ctx the parse tree
	 */
	void enterAtribuicao(gramaticaParser.AtribuicaoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#atribuicao}.
	 * @param ctx the parse tree
	 */
	void exitAtribuicao(gramaticaParser.AtribuicaoContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#estruturaWhile}.
	 * @param ctx the parse tree
	 */
	void enterEstruturaWhile(gramaticaParser.EstruturaWhileContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#estruturaWhile}.
	 * @param ctx the parse tree
	 */
	void exitEstruturaWhile(gramaticaParser.EstruturaWhileContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#estruturaIf}.
	 * @param ctx the parse tree
	 */
	void enterEstruturaIf(gramaticaParser.EstruturaIfContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#estruturaIf}.
	 * @param ctx the parse tree
	 */
	void exitEstruturaIf(gramaticaParser.EstruturaIfContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#estruturaElsif}.
	 * @param ctx the parse tree
	 */
	void enterEstruturaElsif(gramaticaParser.EstruturaElsifContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#estruturaElsif}.
	 * @param ctx the parse tree
	 */
	void exitEstruturaElsif(gramaticaParser.EstruturaElsifContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#estruturaElse}.
	 * @param ctx the parse tree
	 */
	void enterEstruturaElse(gramaticaParser.EstruturaElseContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#estruturaElse}.
	 * @param ctx the parse tree
	 */
	void exitEstruturaElse(gramaticaParser.EstruturaElseContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#condicao}.
	 * @param ctx the parse tree
	 */
	void enterCondicao(gramaticaParser.CondicaoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#condicao}.
	 * @param ctx the parse tree
	 */
	void exitCondicao(gramaticaParser.CondicaoContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#condicaoAnd}.
	 * @param ctx the parse tree
	 */
	void enterCondicaoAnd(gramaticaParser.CondicaoAndContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#condicaoAnd}.
	 * @param ctx the parse tree
	 */
	void exitCondicaoAnd(gramaticaParser.CondicaoAndContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#condicaoNot}.
	 * @param ctx the parse tree
	 */
	void enterCondicaoNot(gramaticaParser.CondicaoNotContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#condicaoNot}.
	 * @param ctx the parse tree
	 */
	void exitCondicaoNot(gramaticaParser.CondicaoNotContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#condicaoPrimaria}.
	 * @param ctx the parse tree
	 */
	void enterCondicaoPrimaria(gramaticaParser.CondicaoPrimariaContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#condicaoPrimaria}.
	 * @param ctx the parse tree
	 */
	void exitCondicaoPrimaria(gramaticaParser.CondicaoPrimariaContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#operadorComparacao}.
	 * @param ctx the parse tree
	 */
	void enterOperadorComparacao(gramaticaParser.OperadorComparacaoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#operadorComparacao}.
	 * @param ctx the parse tree
	 */
	void exitOperadorComparacao(gramaticaParser.OperadorComparacaoContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#novaInstancia}.
	 * @param ctx the parse tree
	 */
	void enterNovaInstancia(gramaticaParser.NovaInstanciaContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#novaInstancia}.
	 * @param ctx the parse tree
	 */
	void exitNovaInstancia(gramaticaParser.NovaInstanciaContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterExpressao(gramaticaParser.ExpressaoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitExpressao(gramaticaParser.ExpressaoContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#expressaoSoma}.
	 * @param ctx the parse tree
	 */
	void enterExpressaoSoma(gramaticaParser.ExpressaoSomaContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#expressaoSoma}.
	 * @param ctx the parse tree
	 */
	void exitExpressaoSoma(gramaticaParser.ExpressaoSomaContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#expressaoProduto}.
	 * @param ctx the parse tree
	 */
	void enterExpressaoProduto(gramaticaParser.ExpressaoProdutoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#expressaoProduto}.
	 * @param ctx the parse tree
	 */
	void exitExpressaoProduto(gramaticaParser.ExpressaoProdutoContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#expressaoPrimaria}.
	 * @param ctx the parse tree
	 */
	void enterExpressaoPrimaria(gramaticaParser.ExpressaoPrimariaContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#expressaoPrimaria}.
	 * @param ctx the parse tree
	 */
	void exitExpressaoPrimaria(gramaticaParser.ExpressaoPrimariaContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#comandoPrint}.
	 * @param ctx the parse tree
	 */
	void enterComandoPrint(gramaticaParser.ComandoPrintContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#comandoPrint}.
	 * @param ctx the parse tree
	 */
	void exitComandoPrint(gramaticaParser.ComandoPrintContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#comandoScan}.
	 * @param ctx the parse tree
	 */
	void enterComandoScan(gramaticaParser.ComandoScanContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#comandoScan}.
	 * @param ctx the parse tree
	 */
	void exitComandoScan(gramaticaParser.ComandoScanContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#declaracaoFuncao}.
	 * @param ctx the parse tree
	 */
	void enterDeclaracaoFuncao(gramaticaParser.DeclaracaoFuncaoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#declaracaoFuncao}.
	 * @param ctx the parse tree
	 */
	void exitDeclaracaoFuncao(gramaticaParser.DeclaracaoFuncaoContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#parametros}.
	 * @param ctx the parse tree
	 */
	void enterParametros(gramaticaParser.ParametrosContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#parametros}.
	 * @param ctx the parse tree
	 */
	void exitParametros(gramaticaParser.ParametrosContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#parametro}.
	 * @param ctx the parse tree
	 */
	void enterParametro(gramaticaParser.ParametroContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#parametro}.
	 * @param ctx the parse tree
	 */
	void exitParametro(gramaticaParser.ParametroContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#blocoFuncao}.
	 * @param ctx the parse tree
	 */
	void enterBlocoFuncao(gramaticaParser.BlocoFuncaoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#blocoFuncao}.
	 * @param ctx the parse tree
	 */
	void exitBlocoFuncao(gramaticaParser.BlocoFuncaoContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#comandoRetorno}.
	 * @param ctx the parse tree
	 */
	void enterComandoRetorno(gramaticaParser.ComandoRetornoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#comandoRetorno}.
	 * @param ctx the parse tree
	 */
	void exitComandoRetorno(gramaticaParser.ComandoRetornoContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#chamadaFuncao}.
	 * @param ctx the parse tree
	 */
	void enterChamadaFuncao(gramaticaParser.ChamadaFuncaoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#chamadaFuncao}.
	 * @param ctx the parse tree
	 */
	void exitChamadaFuncao(gramaticaParser.ChamadaFuncaoContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#argumentos}.
	 * @param ctx the parse tree
	 */
	void enterArgumentos(gramaticaParser.ArgumentosContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#argumentos}.
	 * @param ctx the parse tree
	 */
	void exitArgumentos(gramaticaParser.ArgumentosContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#acesso}.
	 * @param ctx the parse tree
	 */
	void enterAcesso(gramaticaParser.AcessoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#acesso}.
	 * @param ctx the parse tree
	 */
	void exitAcesso(gramaticaParser.AcessoContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramaticaParser#tipo}.
	 * @param ctx the parse tree
	 */
	void enterTipo(gramaticaParser.TipoContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramaticaParser#tipo}.
	 * @param ctx the parse tree
	 */
	void exitTipo(gramaticaParser.TipoContext ctx);
}