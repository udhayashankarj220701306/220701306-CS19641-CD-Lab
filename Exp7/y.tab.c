/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20170201

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "exp7.y"
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char *msg);
int yylex(void);
#line 26 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define ID 257
#define NUM 258
#define FOR 259
#define LE 260
#define GE 261
#define EQ 262
#define NE 263
#define AND 264
#define OR 265
#define IF 266
#define ELSE 267
#define WHILE 268
#define SWITCH 269
#define CASE 270
#define BREAK 271
#define DEFAULT 272
#define UMINUS 273
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    6,    7,    7,    8,    8,
    9,    9,    5,    5,    5,    5,   11,   12,   13,   13,
    4,    4,    4,    4,   10,   10,   10,   10,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    3,    3,    3,    3,
    3,    3,    3,    3,
};
static const YYINT yylen[] = {                            2,
    2,    9,    5,    1,    1,    7,    1,    2,    2,    6,
    5,    3,    1,    2,    2,    3,    5,    2,    2,    2,
    3,    2,    1,    0,    2,    2,    1,    0,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    2,    1,    1,    3,    3,    3,    3,
    3,    3,    3,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    4,    5,    0,    0,
    0,    0,    0,    1,    0,   14,    0,    0,   46,    0,
    0,    0,    0,    0,    0,    0,   23,    0,   18,    0,
   16,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   27,    0,
    0,   22,    0,    0,    0,    0,    0,    0,    0,    0,
   42,    0,   43,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   17,    3,    0,
   26,   21,    0,   19,    0,    0,    0,    0,    0,    0,
    6,    0,    0,    8,    0,    0,    0,    2,    0,    0,
    0,    0,   10,   11,
};
static const YYINT yydgoto[] = {                          5,
   59,   60,   23,   29,    7,    8,   97,  103,  104,   93,
    9,   16,   17,
};
static const YYINT yysindex[] = {                      -189,
  -31,  -16,    1,    5,    0,   18,    0,    0, -242,   -3,
   -3,   -3, -224,    0,   13,    0, -242,  -23,    0,   -3,
  105,  139,   -4,   20,   24,   30,    0,  112,    0, -242,
    0, -217,   -3,  -49,   -3,   -3,   -3,   -3,   -3,   -3,
  -25,  -13,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,
   -3,   -3,   -3,   -3,   -3,   13,   13,  -55,    0,  133,
   26,    0, -197,  155,  155,  155,  155,  155,  161,  161,
    0,  147,    0,  147,  -49,  -49,   14,  155,  155,  155,
  155,  155,  155,  161,  161,  155,  155,    0,    0, -198,
    0,    0,   30,    0,   -3, -180,  -41, -208,   47,   28,
    0,   33, -198,    0,   13,   30,   30,    0,  -32,  -28,
   37,   39,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,  -10,    0,
    0,    0,    0,    0,    2,    0,   -6,   40,    0,    0,
    0,    0,    0,    0,    0,  -22,    0,    0,    0,  -10,
    0,    9,    0,   63,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    2,    2,    0,    0,    0,
    0,    0,    0,  -24,  -20,  -19,  -15,  -12,   83,   85,
    0,   52,    0,   80,   71,   90,    0,   -7,   -5,    7,
    8,   12,   15,   87,   97,   16,   17,    0,    0,    0,
    0,    0, -111,    0,    0,    0,    0,    4,    0,    0,
    0,    0, -119,    0,    2, -170, -110,    0,    0,   38,
    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  276,  415,   -2,  -54,    0,    0,    0,   27,    0,   34,
   -8,  103,   -1,
};
#define YYTABLESIZE 520
static const YYINT yytable[] = {                         13,
   20,   88,   89,   15,   20,    9,   30,   20,   10,   24,
   47,   24,   46,   25,   28,   32,   29,   71,   20,   20,
   36,   37,   13,   11,   15,   38,   15,   14,   39,   20,
   32,   73,   25,   34,   29,   35,   56,   33,   36,   37,
   12,   20,   77,   38,   13,   20,   39,   49,   50,   63,
  108,   34,   51,   35,   94,   52,   48,   47,   20,   61,
   57,   96,   20,  102,   58,   49,   50,   90,    2,    1,
   51,   96,   95,   52,   48,   47,    2,  100,    3,    4,
   45,   45,   45,  101,   45,  106,   45,  105,   43,   41,
  107,   42,   30,   44,   30,  113,   30,  114,   45,   45,
   28,   45,   28,   44,   44,   44,   47,   44,   46,   44,
   30,   32,   32,   32,   13,   32,   98,   32,   15,   31,
   31,   44,   31,   41,   31,   40,   24,   54,    7,   32,
   33,   33,   33,   20,   33,   26,   33,   53,   31,  109,
  110,   41,    0,   40,    0,   54,   43,   41,   33,   42,
   92,   44,    9,   43,   41,   53,   42,    0,   44,   25,
   28,    0,   12,   45,   47,    0,   46,    0,    0,    0,
   62,   47,    0,   46,   43,   41,    0,   42,    0,   44,
   43,   41,    0,   42,    0,   44,    0,    0,   43,    0,
    0,   91,   47,   44,   46,    0,   43,   41,   55,   42,
   54,   44,   43,   41,    0,   42,   47,   44,   46,    0,
   35,   36,   37,   38,   47,    0,   46,    0,    0,    0,
   47,    0,   46,    0,   18,   19,    1,    0,   18,   19,
    1,   18,   19,    2,    0,    3,    4,    2,  111,    3,
    4,    0,  112,   18,   19,    0,   13,   13,   13,    0,
   15,   15,   15,   18,   19,   13,    0,   13,   13,   15,
   13,   15,   15,    0,   15,   20,   20,   20,   24,   18,
   19,    1,   24,    0,   20,    6,   20,   20,    2,   20,
    3,    4,   18,   19,    1,    0,   18,   19,    1,    0,
   27,    2,    0,    3,    4,    2,    0,    3,    4,   45,
   45,   45,   45,   45,   45,    0,   35,   36,   37,   38,
   39,   40,    0,    0,    0,   30,   30,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   44,   44,    0,    0,
    0,   27,   27,    0,   32,   32,    0,    0,    0,    0,
    0,    0,    0,   31,   31,    0,   41,   41,   40,   40,
   41,   41,    0,   33,   33,    0,    0,    0,    0,    0,
   40,   40,    0,    0,   35,   36,   37,   38,   39,   40,
    0,   35,   36,   37,   38,   39,   40,    0,    0,    0,
   27,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   35,   36,   37,   38,   39,   40,   48,   49,
   50,   51,   52,   53,    0,    0,   35,   36,   37,   38,
    0,    0,    0,    0,   35,   36,   37,   38,   39,   40,
   35,   36,   37,   38,   21,   22,   22,    0,    0,   28,
    0,    0,    0,    0,   34,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   64,    0,   65,
   66,   67,   68,   69,   70,   72,   74,   75,   76,   22,
   78,   79,   80,   81,   82,   83,   84,   85,   86,   87,
   28,   28,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   99,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   28,
};
static const YYINT yycheck[] = {                         10,
   33,   56,   57,   10,   33,  125,   15,   33,   40,   12,
   60,   10,   62,  125,  125,   17,   41,   43,   10,   33,
   41,   41,   33,   40,  267,   41,   33,   10,   41,   33,
   32,   45,  257,   41,   59,   41,   41,   61,   59,   59,
   40,   33,   45,   59,   40,   33,   59,   41,   41,  267,
  105,   59,   41,   59,   63,   41,   41,   41,   33,   26,
   41,  270,   33,  272,   41,   59,   59,  123,  266,  259,
   59,  270,   59,   59,   59,   59,  266,  258,  268,  269,
   41,   42,   43,  125,   45,   58,   47,   41,   42,   43,
   58,   45,   41,   47,   43,   59,   45,   59,   59,   60,
  271,   62,  125,   41,   42,   43,   60,   45,   62,   47,
   59,   41,   42,   43,  125,   45,   90,   47,  125,   17,
   41,   59,   43,   41,   45,   41,  125,   41,  125,   59,
   41,   42,   43,  125,   45,  123,   47,   41,   59,  106,
  107,   59,   -1,   59,   -1,   59,   42,   43,   59,   45,
  125,   47,  272,   42,   43,   59,   45,   -1,   47,  271,
  271,   -1,  125,   59,   60,   -1,   62,   -1,   -1,   -1,
   59,   60,   -1,   62,   42,   43,   -1,   45,   -1,   47,
   42,   43,   -1,   45,   -1,   47,   -1,   -1,   42,   -1,
   -1,   59,   60,   47,   62,   -1,   42,   43,   60,   45,
   62,   47,   42,   43,   -1,   45,   60,   47,   62,   -1,
  260,  261,  262,  263,   60,   -1,   62,   -1,   -1,   -1,
   60,   -1,   62,   -1,  257,  258,  259,   -1,  257,  258,
  259,  257,  258,  266,   -1,  268,  269,  266,  271,  268,
  269,   -1,  271,  257,  258,   -1,  257,  258,  259,   -1,
  257,  258,  259,  257,  258,  266,   -1,  268,  269,  266,
  271,  268,  269,   -1,  271,  257,  258,  259,  267,  257,
  258,  259,  271,   -1,  266,    0,  268,  269,  266,  271,
  268,  269,  257,  258,  259,   -1,  257,  258,  259,   -1,
   15,  266,   -1,  268,  269,  266,   -1,  268,  269,  260,
  261,  262,  263,  264,  265,   -1,  260,  261,  262,  263,
  264,  265,   -1,   -1,   -1,  264,  265,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  264,  265,   -1,   -1,
   -1,   56,   57,   -1,  264,  265,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  264,  265,   -1,  264,  265,  264,  265,
  264,  265,   -1,  264,  265,   -1,   -1,   -1,   -1,   -1,
  264,  265,   -1,   -1,  260,  261,  262,  263,  264,  265,
   -1,  260,  261,  262,  263,  264,  265,   -1,   -1,   -1,
  105,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  260,  261,  262,  263,  264,  265,  260,  261,
  262,  263,  264,  265,   -1,   -1,  260,  261,  262,  263,
   -1,   -1,   -1,   -1,  260,  261,  262,  263,  264,  265,
  260,  261,  262,  263,   10,   11,   12,   -1,   -1,   15,
   -1,   -1,   -1,   -1,   20,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   33,   -1,   35,
   36,   37,   38,   39,   40,   41,   42,   43,   44,   45,
   46,   47,   48,   49,   50,   51,   52,   53,   54,   55,
   56,   57,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   95,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  105,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 273
#define YYUNDFTOKEN 289
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,"'\\n'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'!'",0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,
0,"':'","';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ID","NUM","FOR","LE","GE","EQ","NE","AND","OR",
"IF","ELSE","WHILE","SWITCH","CASE","BREAK","DEFAULT","UMINUS",0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : F",
"F : S '\\n'",
"S : FOR '(' E ';' C ';' E ')' DEF",
"S : WHILE '(' C ')' DEF",
"S : IC",
"S : SC",
"SC : SWITCH '(' ID ')' '{' B '}'",
"B : CASES",
"B : CASES D",
"CASES : CASES CASES",
"CASES : CASE NUM ':' BODY BREAK ';'",
"D : DEFAULT ':' BODY BREAK ';'",
"D : DEFAULT ':' BODY",
"IC : IFS",
"IC : IFS ELSES",
"IC : IFS ELIF",
"IC : IFS ELIF ELSES",
"IFS : IF '(' C ')' DEF",
"ELSES : ELSE DEF",
"ELIF : ELSE IFS",
"ELIF : ELIF ELIF",
"DEF : '{' BODY '}'",
"DEF : E ';'",
"DEF : S",
"DEF :",
"BODY : BODY BODY",
"BODY : E ';'",
"BODY : S",
"BODY :",
"E : ID '=' E",
"E : E '+' E",
"E : E '-' E",
"E : E '*' E",
"E : E '/' E",
"E : E '>' E",
"E : E '<' E",
"E : E LE E",
"E : E GE E",
"E : E EQ E",
"E : E NE E",
"E : E OR E",
"E : E AND E",
"E : E '+' '+'",
"E : E '-' '-'",
"E : '!' E",
"E : ID",
"E : NUM",
"C : E '<' E",
"C : E '>' E",
"C : E LE E",
"C : E GE E",
"C : E EQ E",
"C : E NE E",
"C : E OR E",
"C : E AND E",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 94 "exp7.y"
void  yyerror(const char *msg){
  printf("Invalid equation or expression: %s\n",msg);
}

int main(){
  printf("Enter a Control Structure: \n");  
  yyparse();
  printf("\nEntered code is invalid\n");
  return 0;
}
#line 384 "y.tab.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yym = 0;
    yyn = 0;
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
case 1:
#line 16 "exp7.y"
	{printf("INPUT ACCEPTED\n\n");exit(0);}
break;
#line 587 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
