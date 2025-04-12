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

#line 2 "exp9.y"
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
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
static const YYINT yylen[] = {                            2,
    6,    6,    6,    6,    6,    6,    6,    6,    6,    6,
    6,    6,    4,    4,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   13,
    0,    0,    0,    0,   14,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    1,    9,    2,
   10,    3,   11,    4,   12,    5,    6,    7,    8,
};
static const YYINT yydgoto[] = {                          2,
};
static const YYINT yysindex[] = {                      -252,
  -48,    0, -256,  -10,   -4, -254, -250, -248, -246,    0,
 -243, -242, -241, -240,    0,    8,    9,   10,   11,   12,
   13,   14,   15,   16,   17,   18,   19,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
};
#define YYTABLESIZE 43
static const YYINT yytable[] = {                         10,
    4,    5,   16,   17,    1,   15,   18,   19,   20,   21,
   22,   23,    3,   24,   25,   26,   27,   28,   29,   30,
   31,   32,   33,   34,   35,   36,   37,   38,   39,    0,
    0,    8,    6,    0,    7,    0,    9,   13,   11,    0,
   12,    0,   14,
};
static const YYINT yycheck[] = {                         10,
  257,  258,  257,  258,  257,   10,  257,  258,  257,  258,
  257,  258,   61,  257,  257,  257,  257,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   10,   10,   -1,
   -1,   42,   43,   -1,   45,   -1,   47,   42,   43,   -1,
   45,   -1,   47,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 258
#define YYUNDFTOKEN 261
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,"'\\n'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,"'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,0,0,
"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"ID","NUM",0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : CODE",
"CODE : ID '=' ID '+' ID '\\n'",
"CODE : ID '=' ID '-' ID '\\n'",
"CODE : ID '=' ID '*' ID '\\n'",
"CODE : ID '=' ID '/' ID '\\n'",
"CODE : ID '=' NUM '+' ID '\\n'",
"CODE : ID '=' NUM '-' ID '\\n'",
"CODE : ID '=' NUM '*' ID '\\n'",
"CODE : ID '=' NUM '/' ID '\\n'",
"CODE : ID '=' ID '+' NUM '\\n'",
"CODE : ID '=' ID '-' NUM '\\n'",
"CODE : ID '=' ID '*' NUM '\\n'",
"CODE : ID '=' ID '/' NUM '\\n'",
"CODE : ID '=' ID '\\n'",
"CODE : ID '=' NUM '\\n'",

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
#line 105 "exp9.y"
void  yyerror(const char *msg){
  printf("Invalid Three code: %s\n",msg);
}

int main(){
  printf("Enter a Three Code: \n");  
  yyparse();
  printf("\nEntered code is invalid\n");
  return 0;
}

#line 198 "y.tab.c"

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
#line 13 "exp9.y"
	{
		printf("MOV AX,[%s]\n",yystack.l_mark[-5]);
		printf("ADD AX,[%s]\n",yystack.l_mark[-4]);
		printf("MOV [%s],AX\n",yystack.l_mark[-6]);
	}
break;
case 2:
#line 18 "exp9.y"
	{
                printf("MOV AX,[%s]\n",yystack.l_mark[-5]);
                printf("SUB AX,[%s]\n",yystack.l_mark[-4]);
                printf("MOV [%s],AX\n",yystack.l_mark[-6]);
        }
break;
case 3:
#line 24 "exp9.y"
	{
                printf("MOV AX,[%s]\n",yystack.l_mark[-5]);
		printf("MOV BX,[%s]\n",yystack.l_mark[-4]);
                printf("MUL BX\n");
                printf("MOV [%s],AX\n",yystack.l_mark[-6]);
        }
break;
case 4:
#line 31 "exp9.y"
	{
                printf("MOV AX,[%s]\n",yystack.l_mark[-5]);
		printf("MOV DX,0\n");
                printf("MOV BX,[%s]\n",yystack.l_mark[-4]);
		printf("DIV BX\n");
                printf("MOV [%s],AX\n",yystack.l_mark[-6]);
        }
break;
case 5:
#line 39 "exp9.y"
	{
                printf("MOV AX,%s\n",yystack.l_mark[-5]);
                printf("ADD AX,[%s]\n",yystack.l_mark[-4]);
                printf("MOV [%s],AX\n",yystack.l_mark[-6]);
        }
break;
case 6:
#line 45 "exp9.y"
	{
                printf("MOV AX,%s\n",yystack.l_mark[-5]);
                printf("SUB AX,[%s]\n",yystack.l_mark[-4]);
                printf("MOV [%s],AX\n",yystack.l_mark[-6]);
        }
break;
case 7:
#line 51 "exp9.y"
	{
                printf("MOV AX,%s\n",yystack.l_mark[-5]);
                printf("MOV BX,[%s]\n",yystack.l_mark[-4]);
                printf("MUL BX\n");
                printf("MOV [%s],AX\n",yystack.l_mark[-6]);
        }
break;
case 8:
#line 59 "exp9.y"
	{
                printf("MOV AX,%s\n",yystack.l_mark[-5]);
                printf("MOV DX,0\n");
                printf("MOV BX,[%s]\n",yystack.l_mark[-4]);
                printf("DIV BX\n");
                printf("MOV [%s],AX\n",yystack.l_mark[-6]);
        }
break;
case 9:
#line 68 "exp9.y"
	{
                printf("MOV AX,[%s]\n",yystack.l_mark[-5]);
                printf("ADD AX,%s\n",yystack.l_mark[-4]);
                printf("MOV [%s],AX\n",yystack.l_mark[-6]);
        }
break;
case 10:
#line 74 "exp9.y"
	{
                printf("MOV AX,[%s]\n",yystack.l_mark[-5]);
                printf("SUB AX,%s\n",yystack.l_mark[-4]);
                printf("MOV [%s],AX\n",yystack.l_mark[-6]);
        }
break;
case 11:
#line 80 "exp9.y"
	{
                printf("MOV AX,[%s]\n",yystack.l_mark[-5]);
                printf("MOV BX,%s\n",yystack.l_mark[-4]);
                printf("MUL BX\n");
                printf("MOV [%s],AX\n",yystack.l_mark[-6]);
        }
break;
case 12:
#line 88 "exp9.y"
	{
                printf("MOV AX,%s\n",yystack.l_mark[-5]);
                printf("MOV DX,0\n");
                printf("MOV BX,[%s]\n",yystack.l_mark[-4]);
                printf("DIV BX\n");
                printf("MOV [%s],AX\n",yystack.l_mark[-6]);
        }
break;
case 13:
#line 97 "exp9.y"
	{
                printf("MOV [%s],[%s]\n",yystack.l_mark[-4],yystack.l_mark[-3]);
        }
break;
case 14:
#line 101 "exp9.y"
	{
                printf("MOV [%s],%s\n",yystack.l_mark[-4],yystack.l_mark[-3]);
        }
break;
#line 514 "y.tab.c"
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
