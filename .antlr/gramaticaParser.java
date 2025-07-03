// Generated from c:/Users/Henrique-PC/Documents/repos/compilador/gramatica.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class gramaticaParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, START=2, NUM_INT=3, NUM_FLOAT=4, STRING=5, CHAR=6, L_CHAVE=7, 
		R_CHAVE=8, L_PARENTESE=9, R_PARENTESE=10, VIRGULA=11, PONTOV=12, AND=13, 
		OR=14, NOT=15, IGUAL=16, DIFF=17, MENOR=18, MAIOR=19, MAIOR_IGUAL=20, 
		MENOR_IGUAL=21, SOMA=22, SUBTRACAO=23, MULTIPLICACAO=24, DIVISAO=25, RECEBA=26, 
		IF=27, ELSE=28, WHILE=29, RETURN=30, NEW=31, TK_INT=32, TK_FLOAT=33, TK_STRING=34, 
		TK_CHAR=35, CLASS=36, PRINT=37, SCAN=38, ID=39, ESPACO=40, COMENTARIO=41;
	public static final int
		RULE_programa = 0, RULE_declaracaoClasse = 1, RULE_corpoClasse = 2, RULE_blocoStart = 3, 
		RULE_bloco = 4, RULE_comando = 5, RULE_declaracaoVariavel = 6, RULE_atribuicao = 7, 
		RULE_estruturaWhile = 8, RULE_estruturaIf = 9, RULE_estruturaElsif = 10, 
		RULE_estruturaElse = 11, RULE_condicao = 12, RULE_condicaoAnd = 13, RULE_condicaoNot = 14, 
		RULE_condicaoPrimaria = 15, RULE_operadorComparacao = 16, RULE_novaInstancia = 17, 
		RULE_expressao = 18, RULE_expressaoSoma = 19, RULE_expressaoProduto = 20, 
		RULE_expressaoPrimaria = 21, RULE_comandoPrint = 22, RULE_comandoScan = 23, 
		RULE_declaracaoFuncao = 24, RULE_parametros = 25, RULE_parametro = 26, 
		RULE_blocoFuncao = 27, RULE_comandoRetorno = 28, RULE_chamadaFuncao = 29, 
		RULE_argumentos = 30, RULE_acesso = 31, RULE_tipo = 32;
	private static String[] makeRuleNames() {
		return new String[] {
			"programa", "declaracaoClasse", "corpoClasse", "blocoStart", "bloco", 
			"comando", "declaracaoVariavel", "atribuicao", "estruturaWhile", "estruturaIf", 
			"estruturaElsif", "estruturaElse", "condicao", "condicaoAnd", "condicaoNot", 
			"condicaoPrimaria", "operadorComparacao", "novaInstancia", "expressao", 
			"expressaoSoma", "expressaoProduto", "expressaoPrimaria", "comandoPrint", 
			"comandoScan", "declaracaoFuncao", "parametros", "parametro", "blocoFuncao", 
			"comandoRetorno", "chamadaFuncao", "argumentos", "acesso", "tipo"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'.'", "'start'", null, null, null, null, "'{'", "'}'", "'('", 
			"')'", "','", "';'", "'&&'", "'||'", "'!'", "'=='", "'!='", "'<'", "'>'", 
			"'>='", "'<='", "'+'", "'-'", "'*'", "'/'", "'='", "'if'", "'else'", 
			"'while'", "'return'", "'new'", "'int'", "'float'", "'string'", "'char'", 
			"'class'", "'printf'", "'scanf'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, "START", "NUM_INT", "NUM_FLOAT", "STRING", "CHAR", "L_CHAVE", 
			"R_CHAVE", "L_PARENTESE", "R_PARENTESE", "VIRGULA", "PONTOV", "AND", 
			"OR", "NOT", "IGUAL", "DIFF", "MENOR", "MAIOR", "MAIOR_IGUAL", "MENOR_IGUAL", 
			"SOMA", "SUBTRACAO", "MULTIPLICACAO", "DIVISAO", "RECEBA", "IF", "ELSE", 
			"WHILE", "RETURN", "NEW", "TK_INT", "TK_FLOAT", "TK_STRING", "TK_CHAR", 
			"CLASS", "PRINT", "SCAN", "ID", "ESPACO", "COMENTARIO"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "gramatica.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public gramaticaParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramaContext extends ParserRuleContext {
		public BlocoStartContext blocoStart() {
			return getRuleContext(BlocoStartContext.class,0);
		}
		public TerminalNode EOF() { return getToken(gramaticaParser.EOF, 0); }
		public List<DeclaracaoClasseContext> declaracaoClasse() {
			return getRuleContexts(DeclaracaoClasseContext.class);
		}
		public DeclaracaoClasseContext declaracaoClasse(int i) {
			return getRuleContext(DeclaracaoClasseContext.class,i);
		}
		public List<DeclaracaoFuncaoContext> declaracaoFuncao() {
			return getRuleContexts(DeclaracaoFuncaoContext.class);
		}
		public DeclaracaoFuncaoContext declaracaoFuncao(int i) {
			return getRuleContext(DeclaracaoFuncaoContext.class,i);
		}
		public ProgramaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_programa; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterPrograma(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitPrograma(this);
		}
	}

	public final ProgramaContext programa() throws RecognitionException {
		ProgramaContext _localctx = new ProgramaContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_programa);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(69);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==CLASS) {
				{
				{
				setState(66);
				declaracaoClasse();
				}
				}
				setState(71);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(75);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 614180323328L) != 0)) {
				{
				{
				setState(72);
				declaracaoFuncao();
				}
				}
				setState(77);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(78);
			blocoStart();
			setState(79);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DeclaracaoClasseContext extends ParserRuleContext {
		public TerminalNode CLASS() { return getToken(gramaticaParser.CLASS, 0); }
		public TerminalNode ID() { return getToken(gramaticaParser.ID, 0); }
		public TerminalNode L_CHAVE() { return getToken(gramaticaParser.L_CHAVE, 0); }
		public TerminalNode R_CHAVE() { return getToken(gramaticaParser.R_CHAVE, 0); }
		public List<CorpoClasseContext> corpoClasse() {
			return getRuleContexts(CorpoClasseContext.class);
		}
		public CorpoClasseContext corpoClasse(int i) {
			return getRuleContext(CorpoClasseContext.class,i);
		}
		public DeclaracaoClasseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaracaoClasse; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterDeclaracaoClasse(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitDeclaracaoClasse(this);
		}
	}

	public final DeclaracaoClasseContext declaracaoClasse() throws RecognitionException {
		DeclaracaoClasseContext _localctx = new DeclaracaoClasseContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_declaracaoClasse);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(81);
			match(CLASS);
			setState(82);
			match(ID);
			setState(83);
			match(L_CHAVE);
			setState(87);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 614180323328L) != 0)) {
				{
				{
				setState(84);
				corpoClasse();
				}
				}
				setState(89);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(90);
			match(R_CHAVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CorpoClasseContext extends ParserRuleContext {
		public DeclaracaoVariavelContext declaracaoVariavel() {
			return getRuleContext(DeclaracaoVariavelContext.class,0);
		}
		public CorpoClasseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_corpoClasse; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterCorpoClasse(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitCorpoClasse(this);
		}
	}

	public final CorpoClasseContext corpoClasse() throws RecognitionException {
		CorpoClasseContext _localctx = new CorpoClasseContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_corpoClasse);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(92);
			declaracaoVariavel();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlocoStartContext extends ParserRuleContext {
		public TerminalNode START() { return getToken(gramaticaParser.START, 0); }
		public BlocoContext bloco() {
			return getRuleContext(BlocoContext.class,0);
		}
		public BlocoStartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blocoStart; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterBlocoStart(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitBlocoStart(this);
		}
	}

	public final BlocoStartContext blocoStart() throws RecognitionException {
		BlocoStartContext _localctx = new BlocoStartContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_blocoStart);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(94);
			match(START);
			setState(95);
			bloco();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlocoContext extends ParserRuleContext {
		public TerminalNode L_CHAVE() { return getToken(gramaticaParser.L_CHAVE, 0); }
		public TerminalNode R_CHAVE() { return getToken(gramaticaParser.R_CHAVE, 0); }
		public List<ComandoContext> comando() {
			return getRuleContexts(ComandoContext.class);
		}
		public ComandoContext comando(int i) {
			return getRuleContext(ComandoContext.class,i);
		}
		public BlocoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bloco; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterBloco(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitBloco(this);
		}
	}

	public final BlocoContext bloco() throws RecognitionException {
		BlocoContext _localctx = new BlocoContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_bloco);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(97);
			match(L_CHAVE);
			setState(101);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1027168272384L) != 0)) {
				{
				{
				setState(98);
				comando();
				}
				}
				setState(103);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(104);
			match(R_CHAVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComandoContext extends ParserRuleContext {
		public DeclaracaoVariavelContext declaracaoVariavel() {
			return getRuleContext(DeclaracaoVariavelContext.class,0);
		}
		public AtribuicaoContext atribuicao() {
			return getRuleContext(AtribuicaoContext.class,0);
		}
		public EstruturaWhileContext estruturaWhile() {
			return getRuleContext(EstruturaWhileContext.class,0);
		}
		public EstruturaIfContext estruturaIf() {
			return getRuleContext(EstruturaIfContext.class,0);
		}
		public ComandoPrintContext comandoPrint() {
			return getRuleContext(ComandoPrintContext.class,0);
		}
		public ComandoScanContext comandoScan() {
			return getRuleContext(ComandoScanContext.class,0);
		}
		public ComandoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comando; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterComando(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitComando(this);
		}
	}

	public final ComandoContext comando() throws RecognitionException {
		ComandoContext _localctx = new ComandoContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_comando);
		try {
			setState(112);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(106);
				declaracaoVariavel();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(107);
				atribuicao();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(108);
				estruturaWhile();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(109);
				estruturaIf();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(110);
				comandoPrint();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(111);
				comandoScan();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DeclaracaoVariavelContext extends ParserRuleContext {
		public TipoContext tipo() {
			return getRuleContext(TipoContext.class,0);
		}
		public TerminalNode ID() { return getToken(gramaticaParser.ID, 0); }
		public TerminalNode PONTOV() { return getToken(gramaticaParser.PONTOV, 0); }
		public TerminalNode RECEBA() { return getToken(gramaticaParser.RECEBA, 0); }
		public NovaInstanciaContext novaInstancia() {
			return getRuleContext(NovaInstanciaContext.class,0);
		}
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public DeclaracaoVariavelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaracaoVariavel; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterDeclaracaoVariavel(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitDeclaracaoVariavel(this);
		}
	}

	public final DeclaracaoVariavelContext declaracaoVariavel() throws RecognitionException {
		DeclaracaoVariavelContext _localctx = new DeclaracaoVariavelContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_declaracaoVariavel);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(114);
			tipo();
			setState(115);
			match(ID);
			setState(121);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RECEBA) {
				{
				setState(116);
				match(RECEBA);
				setState(119);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NEW:
					{
					setState(117);
					novaInstancia();
					}
					break;
				case NUM_INT:
				case NUM_FLOAT:
				case STRING:
				case CHAR:
				case L_PARENTESE:
				case ID:
					{
					setState(118);
					expressao();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
			}

			setState(123);
			match(PONTOV);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AtribuicaoContext extends ParserRuleContext {
		public AcessoContext acesso() {
			return getRuleContext(AcessoContext.class,0);
		}
		public TerminalNode RECEBA() { return getToken(gramaticaParser.RECEBA, 0); }
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public TerminalNode PONTOV() { return getToken(gramaticaParser.PONTOV, 0); }
		public AtribuicaoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_atribuicao; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterAtribuicao(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitAtribuicao(this);
		}
	}

	public final AtribuicaoContext atribuicao() throws RecognitionException {
		AtribuicaoContext _localctx = new AtribuicaoContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_atribuicao);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(125);
			acesso();
			setState(126);
			match(RECEBA);
			setState(127);
			expressao();
			setState(128);
			match(PONTOV);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EstruturaWhileContext extends ParserRuleContext {
		public TerminalNode WHILE() { return getToken(gramaticaParser.WHILE, 0); }
		public TerminalNode L_PARENTESE() { return getToken(gramaticaParser.L_PARENTESE, 0); }
		public CondicaoContext condicao() {
			return getRuleContext(CondicaoContext.class,0);
		}
		public TerminalNode R_PARENTESE() { return getToken(gramaticaParser.R_PARENTESE, 0); }
		public BlocoContext bloco() {
			return getRuleContext(BlocoContext.class,0);
		}
		public EstruturaWhileContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_estruturaWhile; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterEstruturaWhile(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitEstruturaWhile(this);
		}
	}

	public final EstruturaWhileContext estruturaWhile() throws RecognitionException {
		EstruturaWhileContext _localctx = new EstruturaWhileContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_estruturaWhile);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
			match(WHILE);
			setState(131);
			match(L_PARENTESE);
			setState(132);
			condicao();
			setState(133);
			match(R_PARENTESE);
			setState(134);
			bloco();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EstruturaIfContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(gramaticaParser.IF, 0); }
		public TerminalNode L_PARENTESE() { return getToken(gramaticaParser.L_PARENTESE, 0); }
		public CondicaoContext condicao() {
			return getRuleContext(CondicaoContext.class,0);
		}
		public TerminalNode R_PARENTESE() { return getToken(gramaticaParser.R_PARENTESE, 0); }
		public BlocoContext bloco() {
			return getRuleContext(BlocoContext.class,0);
		}
		public List<EstruturaElsifContext> estruturaElsif() {
			return getRuleContexts(EstruturaElsifContext.class);
		}
		public EstruturaElsifContext estruturaElsif(int i) {
			return getRuleContext(EstruturaElsifContext.class,i);
		}
		public EstruturaElseContext estruturaElse() {
			return getRuleContext(EstruturaElseContext.class,0);
		}
		public EstruturaIfContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_estruturaIf; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterEstruturaIf(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitEstruturaIf(this);
		}
	}

	public final EstruturaIfContext estruturaIf() throws RecognitionException {
		EstruturaIfContext _localctx = new EstruturaIfContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_estruturaIf);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(136);
			match(IF);
			setState(137);
			match(L_PARENTESE);
			setState(138);
			condicao();
			setState(139);
			match(R_PARENTESE);
			setState(140);
			bloco();
			setState(144);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(141);
					estruturaElsif();
					}
					} 
				}
				setState(146);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			}
			setState(148);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(147);
				estruturaElse();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EstruturaElsifContext extends ParserRuleContext {
		public TerminalNode ELSE() { return getToken(gramaticaParser.ELSE, 0); }
		public TerminalNode IF() { return getToken(gramaticaParser.IF, 0); }
		public TerminalNode L_PARENTESE() { return getToken(gramaticaParser.L_PARENTESE, 0); }
		public CondicaoContext condicao() {
			return getRuleContext(CondicaoContext.class,0);
		}
		public TerminalNode R_PARENTESE() { return getToken(gramaticaParser.R_PARENTESE, 0); }
		public BlocoContext bloco() {
			return getRuleContext(BlocoContext.class,0);
		}
		public EstruturaElsifContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_estruturaElsif; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterEstruturaElsif(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitEstruturaElsif(this);
		}
	}

	public final EstruturaElsifContext estruturaElsif() throws RecognitionException {
		EstruturaElsifContext _localctx = new EstruturaElsifContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_estruturaElsif);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(150);
			match(ELSE);
			setState(151);
			match(IF);
			setState(152);
			match(L_PARENTESE);
			setState(153);
			condicao();
			setState(154);
			match(R_PARENTESE);
			setState(155);
			bloco();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EstruturaElseContext extends ParserRuleContext {
		public TerminalNode ELSE() { return getToken(gramaticaParser.ELSE, 0); }
		public BlocoContext bloco() {
			return getRuleContext(BlocoContext.class,0);
		}
		public EstruturaElseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_estruturaElse; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterEstruturaElse(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitEstruturaElse(this);
		}
	}

	public final EstruturaElseContext estruturaElse() throws RecognitionException {
		EstruturaElseContext _localctx = new EstruturaElseContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_estruturaElse);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(157);
			match(ELSE);
			setState(158);
			bloco();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CondicaoContext extends ParserRuleContext {
		public List<CondicaoAndContext> condicaoAnd() {
			return getRuleContexts(CondicaoAndContext.class);
		}
		public CondicaoAndContext condicaoAnd(int i) {
			return getRuleContext(CondicaoAndContext.class,i);
		}
		public List<TerminalNode> OR() { return getTokens(gramaticaParser.OR); }
		public TerminalNode OR(int i) {
			return getToken(gramaticaParser.OR, i);
		}
		public CondicaoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condicao; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterCondicao(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitCondicao(this);
		}
	}

	public final CondicaoContext condicao() throws RecognitionException {
		CondicaoContext _localctx = new CondicaoContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_condicao);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(160);
			condicaoAnd();
			setState(165);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==OR) {
				{
				{
				setState(161);
				match(OR);
				setState(162);
				condicaoAnd();
				}
				}
				setState(167);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CondicaoAndContext extends ParserRuleContext {
		public List<CondicaoNotContext> condicaoNot() {
			return getRuleContexts(CondicaoNotContext.class);
		}
		public CondicaoNotContext condicaoNot(int i) {
			return getRuleContext(CondicaoNotContext.class,i);
		}
		public List<TerminalNode> AND() { return getTokens(gramaticaParser.AND); }
		public TerminalNode AND(int i) {
			return getToken(gramaticaParser.AND, i);
		}
		public CondicaoAndContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condicaoAnd; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterCondicaoAnd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitCondicaoAnd(this);
		}
	}

	public final CondicaoAndContext condicaoAnd() throws RecognitionException {
		CondicaoAndContext _localctx = new CondicaoAndContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_condicaoAnd);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(168);
			condicaoNot();
			setState(173);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==AND) {
				{
				{
				setState(169);
				match(AND);
				setState(170);
				condicaoNot();
				}
				}
				setState(175);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CondicaoNotContext extends ParserRuleContext {
		public TerminalNode NOT() { return getToken(gramaticaParser.NOT, 0); }
		public CondicaoNotContext condicaoNot() {
			return getRuleContext(CondicaoNotContext.class,0);
		}
		public CondicaoPrimariaContext condicaoPrimaria() {
			return getRuleContext(CondicaoPrimariaContext.class,0);
		}
		public CondicaoNotContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condicaoNot; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterCondicaoNot(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitCondicaoNot(this);
		}
	}

	public final CondicaoNotContext condicaoNot() throws RecognitionException {
		CondicaoNotContext _localctx = new CondicaoNotContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_condicaoNot);
		try {
			setState(179);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NOT:
				enterOuterAlt(_localctx, 1);
				{
				setState(176);
				match(NOT);
				setState(177);
				condicaoNot();
				}
				break;
			case NUM_INT:
			case NUM_FLOAT:
			case STRING:
			case CHAR:
			case L_PARENTESE:
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(178);
				condicaoPrimaria();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CondicaoPrimariaContext extends ParserRuleContext {
		public TerminalNode L_PARENTESE() { return getToken(gramaticaParser.L_PARENTESE, 0); }
		public CondicaoContext condicao() {
			return getRuleContext(CondicaoContext.class,0);
		}
		public TerminalNode R_PARENTESE() { return getToken(gramaticaParser.R_PARENTESE, 0); }
		public AcessoContext acesso() {
			return getRuleContext(AcessoContext.class,0);
		}
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public OperadorComparacaoContext operadorComparacao() {
			return getRuleContext(OperadorComparacaoContext.class,0);
		}
		public CondicaoPrimariaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condicaoPrimaria; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterCondicaoPrimaria(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitCondicaoPrimaria(this);
		}
	}

	public final CondicaoPrimariaContext condicaoPrimaria() throws RecognitionException {
		CondicaoPrimariaContext _localctx = new CondicaoPrimariaContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_condicaoPrimaria);
		try {
			setState(190);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(181);
				match(L_PARENTESE);
				setState(182);
				condicao();
				setState(183);
				match(R_PARENTESE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(185);
				acesso();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(186);
				expressao();
				setState(187);
				operadorComparacao();
				setState(188);
				expressao();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OperadorComparacaoContext extends ParserRuleContext {
		public TerminalNode IGUAL() { return getToken(gramaticaParser.IGUAL, 0); }
		public TerminalNode DIFF() { return getToken(gramaticaParser.DIFF, 0); }
		public TerminalNode MENOR() { return getToken(gramaticaParser.MENOR, 0); }
		public TerminalNode MENOR_IGUAL() { return getToken(gramaticaParser.MENOR_IGUAL, 0); }
		public TerminalNode MAIOR() { return getToken(gramaticaParser.MAIOR, 0); }
		public TerminalNode MAIOR_IGUAL() { return getToken(gramaticaParser.MAIOR_IGUAL, 0); }
		public OperadorComparacaoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operadorComparacao; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterOperadorComparacao(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitOperadorComparacao(this);
		}
	}

	public final OperadorComparacaoContext operadorComparacao() throws RecognitionException {
		OperadorComparacaoContext _localctx = new OperadorComparacaoContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_operadorComparacao);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(192);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 4128768L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NovaInstanciaContext extends ParserRuleContext {
		public TerminalNode NEW() { return getToken(gramaticaParser.NEW, 0); }
		public TerminalNode ID() { return getToken(gramaticaParser.ID, 0); }
		public TerminalNode L_PARENTESE() { return getToken(gramaticaParser.L_PARENTESE, 0); }
		public TerminalNode R_PARENTESE() { return getToken(gramaticaParser.R_PARENTESE, 0); }
		public NovaInstanciaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_novaInstancia; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterNovaInstancia(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitNovaInstancia(this);
		}
	}

	public final NovaInstanciaContext novaInstancia() throws RecognitionException {
		NovaInstanciaContext _localctx = new NovaInstanciaContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_novaInstancia);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(194);
			match(NEW);
			setState(195);
			match(ID);
			setState(196);
			match(L_PARENTESE);
			setState(197);
			match(R_PARENTESE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressaoContext extends ParserRuleContext {
		public ExpressaoSomaContext expressaoSoma() {
			return getRuleContext(ExpressaoSomaContext.class,0);
		}
		public ExpressaoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressao; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterExpressao(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitExpressao(this);
		}
	}

	public final ExpressaoContext expressao() throws RecognitionException {
		ExpressaoContext _localctx = new ExpressaoContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_expressao);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(199);
			expressaoSoma();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressaoSomaContext extends ParserRuleContext {
		public List<ExpressaoProdutoContext> expressaoProduto() {
			return getRuleContexts(ExpressaoProdutoContext.class);
		}
		public ExpressaoProdutoContext expressaoProduto(int i) {
			return getRuleContext(ExpressaoProdutoContext.class,i);
		}
		public List<TerminalNode> SOMA() { return getTokens(gramaticaParser.SOMA); }
		public TerminalNode SOMA(int i) {
			return getToken(gramaticaParser.SOMA, i);
		}
		public List<TerminalNode> SUBTRACAO() { return getTokens(gramaticaParser.SUBTRACAO); }
		public TerminalNode SUBTRACAO(int i) {
			return getToken(gramaticaParser.SUBTRACAO, i);
		}
		public ExpressaoSomaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressaoSoma; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterExpressaoSoma(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitExpressaoSoma(this);
		}
	}

	public final ExpressaoSomaContext expressaoSoma() throws RecognitionException {
		ExpressaoSomaContext _localctx = new ExpressaoSomaContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_expressaoSoma);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(201);
			expressaoProduto();
			setState(206);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==SOMA || _la==SUBTRACAO) {
				{
				{
				setState(202);
				_la = _input.LA(1);
				if ( !(_la==SOMA || _la==SUBTRACAO) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(203);
				expressaoProduto();
				}
				}
				setState(208);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressaoProdutoContext extends ParserRuleContext {
		public List<ExpressaoPrimariaContext> expressaoPrimaria() {
			return getRuleContexts(ExpressaoPrimariaContext.class);
		}
		public ExpressaoPrimariaContext expressaoPrimaria(int i) {
			return getRuleContext(ExpressaoPrimariaContext.class,i);
		}
		public List<TerminalNode> MULTIPLICACAO() { return getTokens(gramaticaParser.MULTIPLICACAO); }
		public TerminalNode MULTIPLICACAO(int i) {
			return getToken(gramaticaParser.MULTIPLICACAO, i);
		}
		public List<TerminalNode> DIVISAO() { return getTokens(gramaticaParser.DIVISAO); }
		public TerminalNode DIVISAO(int i) {
			return getToken(gramaticaParser.DIVISAO, i);
		}
		public ExpressaoProdutoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressaoProduto; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterExpressaoProduto(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitExpressaoProduto(this);
		}
	}

	public final ExpressaoProdutoContext expressaoProduto() throws RecognitionException {
		ExpressaoProdutoContext _localctx = new ExpressaoProdutoContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_expressaoProduto);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(209);
			expressaoPrimaria();
			setState(214);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==MULTIPLICACAO || _la==DIVISAO) {
				{
				{
				setState(210);
				_la = _input.LA(1);
				if ( !(_la==MULTIPLICACAO || _la==DIVISAO) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(211);
				expressaoPrimaria();
				}
				}
				setState(216);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressaoPrimariaContext extends ParserRuleContext {
		public ChamadaFuncaoContext chamadaFuncao() {
			return getRuleContext(ChamadaFuncaoContext.class,0);
		}
		public TerminalNode NUM_INT() { return getToken(gramaticaParser.NUM_INT, 0); }
		public TerminalNode NUM_FLOAT() { return getToken(gramaticaParser.NUM_FLOAT, 0); }
		public TerminalNode STRING() { return getToken(gramaticaParser.STRING, 0); }
		public TerminalNode CHAR() { return getToken(gramaticaParser.CHAR, 0); }
		public AcessoContext acesso() {
			return getRuleContext(AcessoContext.class,0);
		}
		public TerminalNode L_PARENTESE() { return getToken(gramaticaParser.L_PARENTESE, 0); }
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public TerminalNode R_PARENTESE() { return getToken(gramaticaParser.R_PARENTESE, 0); }
		public ExpressaoPrimariaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressaoPrimaria; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterExpressaoPrimaria(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitExpressaoPrimaria(this);
		}
	}

	public final ExpressaoPrimariaContext expressaoPrimaria() throws RecognitionException {
		ExpressaoPrimariaContext _localctx = new ExpressaoPrimariaContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_expressaoPrimaria);
		try {
			setState(227);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(217);
				chamadaFuncao();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(218);
				match(NUM_INT);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(219);
				match(NUM_FLOAT);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(220);
				match(STRING);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(221);
				match(CHAR);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(222);
				acesso();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(223);
				match(L_PARENTESE);
				setState(224);
				expressao();
				setState(225);
				match(R_PARENTESE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComandoPrintContext extends ParserRuleContext {
		public TerminalNode PRINT() { return getToken(gramaticaParser.PRINT, 0); }
		public TerminalNode L_PARENTESE() { return getToken(gramaticaParser.L_PARENTESE, 0); }
		public TerminalNode R_PARENTESE() { return getToken(gramaticaParser.R_PARENTESE, 0); }
		public TerminalNode PONTOV() { return getToken(gramaticaParser.PONTOV, 0); }
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public ComandoPrintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comandoPrint; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterComandoPrint(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitComandoPrint(this);
		}
	}

	public final ComandoPrintContext comandoPrint() throws RecognitionException {
		ComandoPrintContext _localctx = new ComandoPrintContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_comandoPrint);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(229);
			match(PRINT);
			setState(230);
			match(L_PARENTESE);
			{
			setState(231);
			expressao();
			}
			setState(232);
			match(R_PARENTESE);
			setState(233);
			match(PONTOV);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComandoScanContext extends ParserRuleContext {
		public TerminalNode SCAN() { return getToken(gramaticaParser.SCAN, 0); }
		public TerminalNode L_PARENTESE() { return getToken(gramaticaParser.L_PARENTESE, 0); }
		public AcessoContext acesso() {
			return getRuleContext(AcessoContext.class,0);
		}
		public TerminalNode R_PARENTESE() { return getToken(gramaticaParser.R_PARENTESE, 0); }
		public TerminalNode PONTOV() { return getToken(gramaticaParser.PONTOV, 0); }
		public ComandoScanContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comandoScan; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterComandoScan(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitComandoScan(this);
		}
	}

	public final ComandoScanContext comandoScan() throws RecognitionException {
		ComandoScanContext _localctx = new ComandoScanContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_comandoScan);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(235);
			match(SCAN);
			setState(236);
			match(L_PARENTESE);
			setState(237);
			acesso();
			setState(238);
			match(R_PARENTESE);
			setState(239);
			match(PONTOV);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DeclaracaoFuncaoContext extends ParserRuleContext {
		public TipoContext tipo() {
			return getRuleContext(TipoContext.class,0);
		}
		public TerminalNode ID() { return getToken(gramaticaParser.ID, 0); }
		public TerminalNode L_PARENTESE() { return getToken(gramaticaParser.L_PARENTESE, 0); }
		public TerminalNode R_PARENTESE() { return getToken(gramaticaParser.R_PARENTESE, 0); }
		public BlocoFuncaoContext blocoFuncao() {
			return getRuleContext(BlocoFuncaoContext.class,0);
		}
		public ParametrosContext parametros() {
			return getRuleContext(ParametrosContext.class,0);
		}
		public DeclaracaoFuncaoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaracaoFuncao; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterDeclaracaoFuncao(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitDeclaracaoFuncao(this);
		}
	}

	public final DeclaracaoFuncaoContext declaracaoFuncao() throws RecognitionException {
		DeclaracaoFuncaoContext _localctx = new DeclaracaoFuncaoContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_declaracaoFuncao);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(241);
			tipo();
			setState(242);
			match(ID);
			setState(243);
			match(L_PARENTESE);
			setState(245);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 614180323328L) != 0)) {
				{
				setState(244);
				parametros();
				}
			}

			setState(247);
			match(R_PARENTESE);
			setState(248);
			blocoFuncao();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParametrosContext extends ParserRuleContext {
		public List<ParametroContext> parametro() {
			return getRuleContexts(ParametroContext.class);
		}
		public ParametroContext parametro(int i) {
			return getRuleContext(ParametroContext.class,i);
		}
		public List<TerminalNode> VIRGULA() { return getTokens(gramaticaParser.VIRGULA); }
		public TerminalNode VIRGULA(int i) {
			return getToken(gramaticaParser.VIRGULA, i);
		}
		public ParametrosContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parametros; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterParametros(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitParametros(this);
		}
	}

	public final ParametrosContext parametros() throws RecognitionException {
		ParametrosContext _localctx = new ParametrosContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_parametros);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(250);
			parametro();
			setState(255);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==VIRGULA) {
				{
				{
				setState(251);
				match(VIRGULA);
				setState(252);
				parametro();
				}
				}
				setState(257);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParametroContext extends ParserRuleContext {
		public TipoContext tipo() {
			return getRuleContext(TipoContext.class,0);
		}
		public TerminalNode ID() { return getToken(gramaticaParser.ID, 0); }
		public ParametroContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parametro; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterParametro(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitParametro(this);
		}
	}

	public final ParametroContext parametro() throws RecognitionException {
		ParametroContext _localctx = new ParametroContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_parametro);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(258);
			tipo();
			setState(259);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlocoFuncaoContext extends ParserRuleContext {
		public TerminalNode L_CHAVE() { return getToken(gramaticaParser.L_CHAVE, 0); }
		public ComandoRetornoContext comandoRetorno() {
			return getRuleContext(ComandoRetornoContext.class,0);
		}
		public TerminalNode R_CHAVE() { return getToken(gramaticaParser.R_CHAVE, 0); }
		public List<ComandoContext> comando() {
			return getRuleContexts(ComandoContext.class);
		}
		public ComandoContext comando(int i) {
			return getRuleContext(ComandoContext.class,i);
		}
		public BlocoFuncaoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blocoFuncao; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterBlocoFuncao(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitBlocoFuncao(this);
		}
	}

	public final BlocoFuncaoContext blocoFuncao() throws RecognitionException {
		BlocoFuncaoContext _localctx = new BlocoFuncaoContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_blocoFuncao);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(261);
			match(L_CHAVE);
			setState(265);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1027168272384L) != 0)) {
				{
				{
				setState(262);
				comando();
				}
				}
				setState(267);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(268);
			comandoRetorno();
			setState(269);
			match(R_CHAVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComandoRetornoContext extends ParserRuleContext {
		public TerminalNode RETURN() { return getToken(gramaticaParser.RETURN, 0); }
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public TerminalNode PONTOV() { return getToken(gramaticaParser.PONTOV, 0); }
		public ComandoRetornoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comandoRetorno; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterComandoRetorno(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitComandoRetorno(this);
		}
	}

	public final ComandoRetornoContext comandoRetorno() throws RecognitionException {
		ComandoRetornoContext _localctx = new ComandoRetornoContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_comandoRetorno);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(271);
			match(RETURN);
			setState(272);
			expressao();
			setState(273);
			match(PONTOV);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ChamadaFuncaoContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(gramaticaParser.ID, 0); }
		public TerminalNode L_PARENTESE() { return getToken(gramaticaParser.L_PARENTESE, 0); }
		public TerminalNode R_PARENTESE() { return getToken(gramaticaParser.R_PARENTESE, 0); }
		public ArgumentosContext argumentos() {
			return getRuleContext(ArgumentosContext.class,0);
		}
		public ChamadaFuncaoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_chamadaFuncao; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterChamadaFuncao(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitChamadaFuncao(this);
		}
	}

	public final ChamadaFuncaoContext chamadaFuncao() throws RecognitionException {
		ChamadaFuncaoContext _localctx = new ChamadaFuncaoContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_chamadaFuncao);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(275);
			match(ID);
			setState(276);
			match(L_PARENTESE);
			setState(278);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 549755814520L) != 0)) {
				{
				setState(277);
				argumentos();
				}
			}

			setState(280);
			match(R_PARENTESE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArgumentosContext extends ParserRuleContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public List<TerminalNode> VIRGULA() { return getTokens(gramaticaParser.VIRGULA); }
		public TerminalNode VIRGULA(int i) {
			return getToken(gramaticaParser.VIRGULA, i);
		}
		public ArgumentosContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argumentos; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterArgumentos(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitArgumentos(this);
		}
	}

	public final ArgumentosContext argumentos() throws RecognitionException {
		ArgumentosContext _localctx = new ArgumentosContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_argumentos);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(282);
			expressao();
			setState(287);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==VIRGULA) {
				{
				{
				setState(283);
				match(VIRGULA);
				setState(284);
				expressao();
				}
				}
				setState(289);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AcessoContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(gramaticaParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(gramaticaParser.ID, i);
		}
		public AcessoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_acesso; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterAcesso(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitAcesso(this);
		}
	}

	public final AcessoContext acesso() throws RecognitionException {
		AcessoContext _localctx = new AcessoContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_acesso);
		try {
			setState(294);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(290);
				match(ID);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(291);
				match(ID);
				setState(292);
				match(T__0);
				setState(293);
				match(ID);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TipoContext extends ParserRuleContext {
		public TerminalNode TK_INT() { return getToken(gramaticaParser.TK_INT, 0); }
		public TerminalNode TK_FLOAT() { return getToken(gramaticaParser.TK_FLOAT, 0); }
		public TerminalNode TK_STRING() { return getToken(gramaticaParser.TK_STRING, 0); }
		public TerminalNode TK_CHAR() { return getToken(gramaticaParser.TK_CHAR, 0); }
		public TerminalNode ID() { return getToken(gramaticaParser.ID, 0); }
		public TipoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tipo; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).enterTipo(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof gramaticaListener ) ((gramaticaListener)listener).exitTipo(this);
		}
	}

	public final TipoContext tipo() throws RecognitionException {
		TipoContext _localctx = new TipoContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_tipo);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(296);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 614180323328L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001)\u012b\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002\u001b\u0007\u001b"+
		"\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002\u001e\u0007\u001e"+
		"\u0002\u001f\u0007\u001f\u0002 \u0007 \u0001\u0000\u0005\u0000D\b\u0000"+
		"\n\u0000\f\u0000G\t\u0000\u0001\u0000\u0005\u0000J\b\u0000\n\u0000\f\u0000"+
		"M\t\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0005\u0001V\b\u0001\n\u0001\f\u0001Y\t\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0004\u0001\u0004\u0005\u0004d\b\u0004\n\u0004\f\u0004"+
		"g\t\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0003\u0005q\b\u0005\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0003\u0006x\b\u0006"+
		"\u0003\u0006z\b\u0006\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0005\t\u008f"+
		"\b\t\n\t\f\t\u0092\t\t\u0001\t\u0003\t\u0095\b\t\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\f\u0001\f\u0001\f\u0005\f\u00a4\b\f\n\f\f\f\u00a7\t\f\u0001\r\u0001"+
		"\r\u0001\r\u0005\r\u00ac\b\r\n\r\f\r\u00af\t\r\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0003\u000e\u00b4\b\u000e\u0001\u000f\u0001\u000f\u0001\u000f"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f"+
		"\u0003\u000f\u00bf\b\u000f\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001\u0013"+
		"\u0001\u0013\u0001\u0013\u0005\u0013\u00cd\b\u0013\n\u0013\f\u0013\u00d0"+
		"\t\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0005\u0014\u00d5\b\u0014"+
		"\n\u0014\f\u0014\u00d8\t\u0014\u0001\u0015\u0001\u0015\u0001\u0015\u0001"+
		"\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001"+
		"\u0015\u0003\u0015\u00e4\b\u0015\u0001\u0016\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0001\u0016\u0001\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001"+
		"\u0017\u0001\u0017\u0001\u0017\u0001\u0018\u0001\u0018\u0001\u0018\u0001"+
		"\u0018\u0003\u0018\u00f6\b\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001"+
		"\u0019\u0001\u0019\u0001\u0019\u0005\u0019\u00fe\b\u0019\n\u0019\f\u0019"+
		"\u0101\t\u0019\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001b\u0001\u001b"+
		"\u0005\u001b\u0108\b\u001b\n\u001b\f\u001b\u010b\t\u001b\u0001\u001b\u0001"+
		"\u001b\u0001\u001b\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001c\u0001"+
		"\u001d\u0001\u001d\u0001\u001d\u0003\u001d\u0117\b\u001d\u0001\u001d\u0001"+
		"\u001d\u0001\u001e\u0001\u001e\u0001\u001e\u0005\u001e\u011e\b\u001e\n"+
		"\u001e\f\u001e\u0121\t\u001e\u0001\u001f\u0001\u001f\u0001\u001f\u0001"+
		"\u001f\u0003\u001f\u0127\b\u001f\u0001 \u0001 \u0001 \u0000\u0000!\u0000"+
		"\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c"+
		"\u001e \"$&(*,.02468:<>@\u0000\u0004\u0001\u0000\u0010\u0015\u0001\u0000"+
		"\u0016\u0017\u0001\u0000\u0018\u0019\u0002\u0000 #\'\'\u0129\u0000E\u0001"+
		"\u0000\u0000\u0000\u0002Q\u0001\u0000\u0000\u0000\u0004\\\u0001\u0000"+
		"\u0000\u0000\u0006^\u0001\u0000\u0000\u0000\ba\u0001\u0000\u0000\u0000"+
		"\np\u0001\u0000\u0000\u0000\fr\u0001\u0000\u0000\u0000\u000e}\u0001\u0000"+
		"\u0000\u0000\u0010\u0082\u0001\u0000\u0000\u0000\u0012\u0088\u0001\u0000"+
		"\u0000\u0000\u0014\u0096\u0001\u0000\u0000\u0000\u0016\u009d\u0001\u0000"+
		"\u0000\u0000\u0018\u00a0\u0001\u0000\u0000\u0000\u001a\u00a8\u0001\u0000"+
		"\u0000\u0000\u001c\u00b3\u0001\u0000\u0000\u0000\u001e\u00be\u0001\u0000"+
		"\u0000\u0000 \u00c0\u0001\u0000\u0000\u0000\"\u00c2\u0001\u0000\u0000"+
		"\u0000$\u00c7\u0001\u0000\u0000\u0000&\u00c9\u0001\u0000\u0000\u0000("+
		"\u00d1\u0001\u0000\u0000\u0000*\u00e3\u0001\u0000\u0000\u0000,\u00e5\u0001"+
		"\u0000\u0000\u0000.\u00eb\u0001\u0000\u0000\u00000\u00f1\u0001\u0000\u0000"+
		"\u00002\u00fa\u0001\u0000\u0000\u00004\u0102\u0001\u0000\u0000\u00006"+
		"\u0105\u0001\u0000\u0000\u00008\u010f\u0001\u0000\u0000\u0000:\u0113\u0001"+
		"\u0000\u0000\u0000<\u011a\u0001\u0000\u0000\u0000>\u0126\u0001\u0000\u0000"+
		"\u0000@\u0128\u0001\u0000\u0000\u0000BD\u0003\u0002\u0001\u0000CB\u0001"+
		"\u0000\u0000\u0000DG\u0001\u0000\u0000\u0000EC\u0001\u0000\u0000\u0000"+
		"EF\u0001\u0000\u0000\u0000FK\u0001\u0000\u0000\u0000GE\u0001\u0000\u0000"+
		"\u0000HJ\u00030\u0018\u0000IH\u0001\u0000\u0000\u0000JM\u0001\u0000\u0000"+
		"\u0000KI\u0001\u0000\u0000\u0000KL\u0001\u0000\u0000\u0000LN\u0001\u0000"+
		"\u0000\u0000MK\u0001\u0000\u0000\u0000NO\u0003\u0006\u0003\u0000OP\u0005"+
		"\u0000\u0000\u0001P\u0001\u0001\u0000\u0000\u0000QR\u0005$\u0000\u0000"+
		"RS\u0005\'\u0000\u0000SW\u0005\u0007\u0000\u0000TV\u0003\u0004\u0002\u0000"+
		"UT\u0001\u0000\u0000\u0000VY\u0001\u0000\u0000\u0000WU\u0001\u0000\u0000"+
		"\u0000WX\u0001\u0000\u0000\u0000XZ\u0001\u0000\u0000\u0000YW\u0001\u0000"+
		"\u0000\u0000Z[\u0005\b\u0000\u0000[\u0003\u0001\u0000\u0000\u0000\\]\u0003"+
		"\f\u0006\u0000]\u0005\u0001\u0000\u0000\u0000^_\u0005\u0002\u0000\u0000"+
		"_`\u0003\b\u0004\u0000`\u0007\u0001\u0000\u0000\u0000ae\u0005\u0007\u0000"+
		"\u0000bd\u0003\n\u0005\u0000cb\u0001\u0000\u0000\u0000dg\u0001\u0000\u0000"+
		"\u0000ec\u0001\u0000\u0000\u0000ef\u0001\u0000\u0000\u0000fh\u0001\u0000"+
		"\u0000\u0000ge\u0001\u0000\u0000\u0000hi\u0005\b\u0000\u0000i\t\u0001"+
		"\u0000\u0000\u0000jq\u0003\f\u0006\u0000kq\u0003\u000e\u0007\u0000lq\u0003"+
		"\u0010\b\u0000mq\u0003\u0012\t\u0000nq\u0003,\u0016\u0000oq\u0003.\u0017"+
		"\u0000pj\u0001\u0000\u0000\u0000pk\u0001\u0000\u0000\u0000pl\u0001\u0000"+
		"\u0000\u0000pm\u0001\u0000\u0000\u0000pn\u0001\u0000\u0000\u0000po\u0001"+
		"\u0000\u0000\u0000q\u000b\u0001\u0000\u0000\u0000rs\u0003@ \u0000sy\u0005"+
		"\'\u0000\u0000tw\u0005\u001a\u0000\u0000ux\u0003\"\u0011\u0000vx\u0003"+
		"$\u0012\u0000wu\u0001\u0000\u0000\u0000wv\u0001\u0000\u0000\u0000xz\u0001"+
		"\u0000\u0000\u0000yt\u0001\u0000\u0000\u0000yz\u0001\u0000\u0000\u0000"+
		"z{\u0001\u0000\u0000\u0000{|\u0005\f\u0000\u0000|\r\u0001\u0000\u0000"+
		"\u0000}~\u0003>\u001f\u0000~\u007f\u0005\u001a\u0000\u0000\u007f\u0080"+
		"\u0003$\u0012\u0000\u0080\u0081\u0005\f\u0000\u0000\u0081\u000f\u0001"+
		"\u0000\u0000\u0000\u0082\u0083\u0005\u001d\u0000\u0000\u0083\u0084\u0005"+
		"\t\u0000\u0000\u0084\u0085\u0003\u0018\f\u0000\u0085\u0086\u0005\n\u0000"+
		"\u0000\u0086\u0087\u0003\b\u0004\u0000\u0087\u0011\u0001\u0000\u0000\u0000"+
		"\u0088\u0089\u0005\u001b\u0000\u0000\u0089\u008a\u0005\t\u0000\u0000\u008a"+
		"\u008b\u0003\u0018\f\u0000\u008b\u008c\u0005\n\u0000\u0000\u008c\u0090"+
		"\u0003\b\u0004\u0000\u008d\u008f\u0003\u0014\n\u0000\u008e\u008d\u0001"+
		"\u0000\u0000\u0000\u008f\u0092\u0001\u0000\u0000\u0000\u0090\u008e\u0001"+
		"\u0000\u0000\u0000\u0090\u0091\u0001\u0000\u0000\u0000\u0091\u0094\u0001"+
		"\u0000\u0000\u0000\u0092\u0090\u0001\u0000\u0000\u0000\u0093\u0095\u0003"+
		"\u0016\u000b\u0000\u0094\u0093\u0001\u0000\u0000\u0000\u0094\u0095\u0001"+
		"\u0000\u0000\u0000\u0095\u0013\u0001\u0000\u0000\u0000\u0096\u0097\u0005"+
		"\u001c\u0000\u0000\u0097\u0098\u0005\u001b\u0000\u0000\u0098\u0099\u0005"+
		"\t\u0000\u0000\u0099\u009a\u0003\u0018\f\u0000\u009a\u009b\u0005\n\u0000"+
		"\u0000\u009b\u009c\u0003\b\u0004\u0000\u009c\u0015\u0001\u0000\u0000\u0000"+
		"\u009d\u009e\u0005\u001c\u0000\u0000\u009e\u009f\u0003\b\u0004\u0000\u009f"+
		"\u0017\u0001\u0000\u0000\u0000\u00a0\u00a5\u0003\u001a\r\u0000\u00a1\u00a2"+
		"\u0005\u000e\u0000\u0000\u00a2\u00a4\u0003\u001a\r\u0000\u00a3\u00a1\u0001"+
		"\u0000\u0000\u0000\u00a4\u00a7\u0001\u0000\u0000\u0000\u00a5\u00a3\u0001"+
		"\u0000\u0000\u0000\u00a5\u00a6\u0001\u0000\u0000\u0000\u00a6\u0019\u0001"+
		"\u0000\u0000\u0000\u00a7\u00a5\u0001\u0000\u0000\u0000\u00a8\u00ad\u0003"+
		"\u001c\u000e\u0000\u00a9\u00aa\u0005\r\u0000\u0000\u00aa\u00ac\u0003\u001c"+
		"\u000e\u0000\u00ab\u00a9\u0001\u0000\u0000\u0000\u00ac\u00af\u0001\u0000"+
		"\u0000\u0000\u00ad\u00ab\u0001\u0000\u0000\u0000\u00ad\u00ae\u0001\u0000"+
		"\u0000\u0000\u00ae\u001b\u0001\u0000\u0000\u0000\u00af\u00ad\u0001\u0000"+
		"\u0000\u0000\u00b0\u00b1\u0005\u000f\u0000\u0000\u00b1\u00b4\u0003\u001c"+
		"\u000e\u0000\u00b2\u00b4\u0003\u001e\u000f\u0000\u00b3\u00b0\u0001\u0000"+
		"\u0000\u0000\u00b3\u00b2\u0001\u0000\u0000\u0000\u00b4\u001d\u0001\u0000"+
		"\u0000\u0000\u00b5\u00b6\u0005\t\u0000\u0000\u00b6\u00b7\u0003\u0018\f"+
		"\u0000\u00b7\u00b8\u0005\n\u0000\u0000\u00b8\u00bf\u0001\u0000\u0000\u0000"+
		"\u00b9\u00bf\u0003>\u001f\u0000\u00ba\u00bb\u0003$\u0012\u0000\u00bb\u00bc"+
		"\u0003 \u0010\u0000\u00bc\u00bd\u0003$\u0012\u0000\u00bd\u00bf\u0001\u0000"+
		"\u0000\u0000\u00be\u00b5\u0001\u0000\u0000\u0000\u00be\u00b9\u0001\u0000"+
		"\u0000\u0000\u00be\u00ba\u0001\u0000\u0000\u0000\u00bf\u001f\u0001\u0000"+
		"\u0000\u0000\u00c0\u00c1\u0007\u0000\u0000\u0000\u00c1!\u0001\u0000\u0000"+
		"\u0000\u00c2\u00c3\u0005\u001f\u0000\u0000\u00c3\u00c4\u0005\'\u0000\u0000"+
		"\u00c4\u00c5\u0005\t\u0000\u0000\u00c5\u00c6\u0005\n\u0000\u0000\u00c6"+
		"#\u0001\u0000\u0000\u0000\u00c7\u00c8\u0003&\u0013\u0000\u00c8%\u0001"+
		"\u0000\u0000\u0000\u00c9\u00ce\u0003(\u0014\u0000\u00ca\u00cb\u0007\u0001"+
		"\u0000\u0000\u00cb\u00cd\u0003(\u0014\u0000\u00cc\u00ca\u0001\u0000\u0000"+
		"\u0000\u00cd\u00d0\u0001\u0000\u0000\u0000\u00ce\u00cc\u0001\u0000\u0000"+
		"\u0000\u00ce\u00cf\u0001\u0000\u0000\u0000\u00cf\'\u0001\u0000\u0000\u0000"+
		"\u00d0\u00ce\u0001\u0000\u0000\u0000\u00d1\u00d6\u0003*\u0015\u0000\u00d2"+
		"\u00d3\u0007\u0002\u0000\u0000\u00d3\u00d5\u0003*\u0015\u0000\u00d4\u00d2"+
		"\u0001\u0000\u0000\u0000\u00d5\u00d8\u0001\u0000\u0000\u0000\u00d6\u00d4"+
		"\u0001\u0000\u0000\u0000\u00d6\u00d7\u0001\u0000\u0000\u0000\u00d7)\u0001"+
		"\u0000\u0000\u0000\u00d8\u00d6\u0001\u0000\u0000\u0000\u00d9\u00e4\u0003"+
		":\u001d\u0000\u00da\u00e4\u0005\u0003\u0000\u0000\u00db\u00e4\u0005\u0004"+
		"\u0000\u0000\u00dc\u00e4\u0005\u0005\u0000\u0000\u00dd\u00e4\u0005\u0006"+
		"\u0000\u0000\u00de\u00e4\u0003>\u001f\u0000\u00df\u00e0\u0005\t\u0000"+
		"\u0000\u00e0\u00e1\u0003$\u0012\u0000\u00e1\u00e2\u0005\n\u0000\u0000"+
		"\u00e2\u00e4\u0001\u0000\u0000\u0000\u00e3\u00d9\u0001\u0000\u0000\u0000"+
		"\u00e3\u00da\u0001\u0000\u0000\u0000\u00e3\u00db\u0001\u0000\u0000\u0000"+
		"\u00e3\u00dc\u0001\u0000\u0000\u0000\u00e3\u00dd\u0001\u0000\u0000\u0000"+
		"\u00e3\u00de\u0001\u0000\u0000\u0000\u00e3\u00df\u0001\u0000\u0000\u0000"+
		"\u00e4+\u0001\u0000\u0000\u0000\u00e5\u00e6\u0005%\u0000\u0000\u00e6\u00e7"+
		"\u0005\t\u0000\u0000\u00e7\u00e8\u0003$\u0012\u0000\u00e8\u00e9\u0005"+
		"\n\u0000\u0000\u00e9\u00ea\u0005\f\u0000\u0000\u00ea-\u0001\u0000\u0000"+
		"\u0000\u00eb\u00ec\u0005&\u0000\u0000\u00ec\u00ed\u0005\t\u0000\u0000"+
		"\u00ed\u00ee\u0003>\u001f\u0000\u00ee\u00ef\u0005\n\u0000\u0000\u00ef"+
		"\u00f0\u0005\f\u0000\u0000\u00f0/\u0001\u0000\u0000\u0000\u00f1\u00f2"+
		"\u0003@ \u0000\u00f2\u00f3\u0005\'\u0000\u0000\u00f3\u00f5\u0005\t\u0000"+
		"\u0000\u00f4\u00f6\u00032\u0019\u0000\u00f5\u00f4\u0001\u0000\u0000\u0000"+
		"\u00f5\u00f6\u0001\u0000\u0000\u0000\u00f6\u00f7\u0001\u0000\u0000\u0000"+
		"\u00f7\u00f8\u0005\n\u0000\u0000\u00f8\u00f9\u00036\u001b\u0000\u00f9"+
		"1\u0001\u0000\u0000\u0000\u00fa\u00ff\u00034\u001a\u0000\u00fb\u00fc\u0005"+
		"\u000b\u0000\u0000\u00fc\u00fe\u00034\u001a\u0000\u00fd\u00fb\u0001\u0000"+
		"\u0000\u0000\u00fe\u0101\u0001\u0000\u0000\u0000\u00ff\u00fd\u0001\u0000"+
		"\u0000\u0000\u00ff\u0100\u0001\u0000\u0000\u0000\u01003\u0001\u0000\u0000"+
		"\u0000\u0101\u00ff\u0001\u0000\u0000\u0000\u0102\u0103\u0003@ \u0000\u0103"+
		"\u0104\u0005\'\u0000\u0000\u01045\u0001\u0000\u0000\u0000\u0105\u0109"+
		"\u0005\u0007\u0000\u0000\u0106\u0108\u0003\n\u0005\u0000\u0107\u0106\u0001"+
		"\u0000\u0000\u0000\u0108\u010b\u0001\u0000\u0000\u0000\u0109\u0107\u0001"+
		"\u0000\u0000\u0000\u0109\u010a\u0001\u0000\u0000\u0000\u010a\u010c\u0001"+
		"\u0000\u0000\u0000\u010b\u0109\u0001\u0000\u0000\u0000\u010c\u010d\u0003"+
		"8\u001c\u0000\u010d\u010e\u0005\b\u0000\u0000\u010e7\u0001\u0000\u0000"+
		"\u0000\u010f\u0110\u0005\u001e\u0000\u0000\u0110\u0111\u0003$\u0012\u0000"+
		"\u0111\u0112\u0005\f\u0000\u0000\u01129\u0001\u0000\u0000\u0000\u0113"+
		"\u0114\u0005\'\u0000\u0000\u0114\u0116\u0005\t\u0000\u0000\u0115\u0117"+
		"\u0003<\u001e\u0000\u0116\u0115\u0001\u0000\u0000\u0000\u0116\u0117\u0001"+
		"\u0000\u0000\u0000\u0117\u0118\u0001\u0000\u0000\u0000\u0118\u0119\u0005"+
		"\n\u0000\u0000\u0119;\u0001\u0000\u0000\u0000\u011a\u011f\u0003$\u0012"+
		"\u0000\u011b\u011c\u0005\u000b\u0000\u0000\u011c\u011e\u0003$\u0012\u0000"+
		"\u011d\u011b\u0001\u0000\u0000\u0000\u011e\u0121\u0001\u0000\u0000\u0000"+
		"\u011f\u011d\u0001\u0000\u0000\u0000\u011f\u0120\u0001\u0000\u0000\u0000"+
		"\u0120=\u0001\u0000\u0000\u0000\u0121\u011f\u0001\u0000\u0000\u0000\u0122"+
		"\u0127\u0005\'\u0000\u0000\u0123\u0124\u0005\'\u0000\u0000\u0124\u0125"+
		"\u0005\u0001\u0000\u0000\u0125\u0127\u0005\'\u0000\u0000\u0126\u0122\u0001"+
		"\u0000\u0000\u0000\u0126\u0123\u0001\u0000\u0000\u0000\u0127?\u0001\u0000"+
		"\u0000\u0000\u0128\u0129\u0007\u0003\u0000\u0000\u0129A\u0001\u0000\u0000"+
		"\u0000\u0016EKWepwy\u0090\u0094\u00a5\u00ad\u00b3\u00be\u00ce\u00d6\u00e3"+
		"\u00f5\u00ff\u0109\u0116\u011f\u0126";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}