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

#line 2 "exp8.y"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Symbol_Table{
	char sym_name[10];
	char sym_type[10];
	double value;
} Sym[10];
int sym_cnt=0;
int Index=0;
int temp_var=0;
int search_symbol(char []);
void make_symtab_entry(char [],char [],double);
void display_sym_tab();
void addQuadruple(char [],char [],char [],char []);
void display_Quadruple();
void push(char*);
char* pop();
struct Quadruple{
	char operator[5];
	char operand1[10];
	char operand2[10];
	char result[10];
} QUAD[25];
struct Stack{
	char *items[10];
	int top;
} Stk;
int yylex(void);
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 32 "exp8.y"
typedef union{
	int ival;
	double dval;
	char string[10];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 64 "y.tab.c"

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

#define NUMBER 257
#define TYPE 258
#define ID 259
#define MAIN 260
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    3,    4,    4,    6,    1,    1,    1,    1,    5,
    5,    7,    7,    7,    2,    2,    2,    2,    2,    2,
};
static const YYINT yylen[] = {                            2,
    6,    2,    2,    0,    3,    3,    3,    5,    1,    2,
    0,    4,    4,    4,    3,    3,    3,    3,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    1,    0,    2,    0,    3,    0,    5,    0,    0,
   10,    7,    0,    0,    0,    0,    0,   12,   13,    0,
    0,    0,    0,   14,    8,   20,   19,    0,    0,   17,
   18,
};
static const YYINT yydgoto[] = {                          2,
   11,   26,    7,    8,   14,    9,   15,
};
static const YYINT yysindex[] = {                      -252,
  -23,    0,  -28, -102, -228, -227,  -89, -221, -228,  -17,
  -34,    0,  -16,    0, -221,    0, -211,    0, -212, -243,
    0,    0,  -13,  -10,   -9,  -41, -206,    0,    0, -235,
 -235, -235, -235,    0,    0,    0,    0,  -27,  -27,    0,
    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0, -125,    0,    0,  -73, -125,  -33,
    0,    0,    0,    0,  -73,    0,    0,    0,    0,    0,
    0,    0,  -32,  -14,   -8,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -40,  -36,    0,
    0,
};
static const YYINT yygindex[] = {                         0,
    0,   10,    0,   44,   39,    0,    0,
};
#define YYTABLESIZE 134
static const YYINT yytable[] = {                          4,
   32,   30,   15,   31,   15,   33,   16,    1,   16,   19,
    9,    6,    4,   24,   32,   25,    3,   34,   15,   33,
    5,   36,   16,   37,   18,    9,    6,   20,   20,    6,
   20,   10,   20,   19,   19,   12,   19,   13,   19,   38,
   39,   40,   41,   17,   20,   22,   23,   27,   28,   29,
   35,   11,   16,   21,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    4,
};
static const YYINT yycheck[] = {                        125,
   42,   43,   43,   45,   45,   47,   43,  260,   45,   44,
   44,   44,   41,  257,   42,  259,   40,   59,   59,   47,
  123,  257,   59,  259,   59,   59,   59,   42,   43,  258,
   45,  259,   47,   42,   43,  125,   45,  259,   47,   30,
   31,   32,   33,   61,   61,  257,  259,   61,   59,   59,
  257,  125,    9,   15,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  259,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 260
#define YYUNDFTOKEN 270
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"NUMBER","TYPE","ID","MAIN",0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : MAIN '(' ')' '{' body '}'",
"body : varstmt stmtlist",
"varstmt : vardecl varstmt",
"varstmt :",
"vardecl : TYPE varlist ';'",
"varlist : varlist ',' ID",
"varlist : ID '=' NUMBER",
"varlist : varlist ',' ID '=' NUMBER",
"varlist : ID",
"stmtlist : stmt stmtlist",
"stmtlist :",
"stmt : ID '=' NUMBER ';'",
"stmt : ID '=' ID ';'",
"stmt : ID '=' expr ';'",
"expr : expr '+' expr",
"expr : expr '-' expr",
"expr : expr '*' expr",
"expr : expr '/' expr",
"expr : ID",
"expr : NUMBER",

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
#line 162 "exp8.y"
extern FILE *yyin;
int main(){
	Stk.top = -1;
	yyin = fopen("input.txt","r");
	yyparse();
	display_sym_tab();
	printf("\n\n");
	display_Quadruple();
	printf("\n\n");
	return(0);
}
int search_symbol(char sym[10]){
	int i,flag=0;
	for(i=0;i<sym_cnt;i++){
		if(strcmp(Sym[i].sym_name,sym)==0){
			flag=1;
			break;
		}
	}
	if(flag==0)
		return(-1);
	else
		return(i);
}
void make_symtab_entry(char sym[10],char dtype[10],double val){
	strcpy(Sym[sym_cnt].sym_name,sym);
	strcpy(Sym[sym_cnt].sym_type,dtype);
	Sym[sym_cnt].value=val;
	sym_cnt++;
}
void display_sym_tab(){
	int i;
	printf("\n\n The Symbol Table \n\n");
	printf(" Name Type Value");
	for(i=0;i<sym_cnt;i++)
	printf("\n %s %s %f",Sym[i].sym_name,Sym[i].sym_type,Sym[i].value);
}
void display_Quadruple(){
	int i;
	printf("\n\n The INTERMEDIATE CODE Is : \n\n");
	printf("\n\n The Quadruple Table \n\n");
	printf("\n    Result Operator       Operand1       Operand2 ");
	for(i=0;i<Index;i++)
	printf("\n %2d %6s %8s   %12s   %12s",i,QUAD[i].result,QUAD[i].operator,QUAD[i].operand1,QUAD[i].operand2);
}
int yyerror(){
	printf("\nERROR!!\n");
	return(1);
}
void push(char *str){
	Stk.top++;
	Stk.items[Stk.top]=(char *)malloc(strlen(str)+1);
	strcpy(Stk.items[Stk.top],str);
}
char * pop(){
	int i;
	if(Stk.top==-1){
		printf("\nStack Empty!! \n");
		exit(0);
	}
	char *str=(char *)malloc(strlen(Stk.items[Stk.top])+1);;
	strcpy(str,Stk.items[Stk.top]);
	Stk.top--;
	return(str);
}
void addQuadruple(char op[10],char op2[10],char op1[10],char res[10]){
	strcpy(QUAD[Index].operator,op);
	strcpy(QUAD[Index].operand2,op2);
	strcpy(QUAD[Index].operand1,op1);
	strcpy(QUAD[Index].result,res);
	Index++;
}
#line 322 "y.tab.c"

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
case 6:
#line 55 "exp8.y"
	{ 
		int i;
		i=search_symbol(yystack.l_mark[0].string);
		if(i!=-1)
			printf("\n Multiple Declaration of Variable");
		else
			make_symtab_entry(yystack.l_mark[0].string,yystack.l_mark[-3].string,0);
	}
break;
case 7:
#line 63 "exp8.y"
	{
		int i;
		i=search_symbol(yystack.l_mark[-2].string);
		if(i!=-1)
			printf("\n Multiple Declaration of Variable");
		else
			make_symtab_entry(yystack.l_mark[-2].string,yystack.l_mark[-3].string,yystack.l_mark[0].dval);
	}
break;
case 8:
#line 71 "exp8.y"
	{
		int i;
		i=search_symbol(yystack.l_mark[-2].string);
		if(i!=-1)
			printf("\n Multiple Declaration of Variable");
		else
			make_symtab_entry(yystack.l_mark[-2].string,yystack.l_mark[-5].string,yystack.l_mark[0].dval);
	}
break;
case 9:
#line 79 "exp8.y"
	{ 
		int i;
		i=search_symbol(yystack.l_mark[0].string);
		if(i!=-1)
			printf("\n Multiple Declaration of Variable");
		else
			make_symtab_entry(yystack.l_mark[0].string,yystack.l_mark[-1].string,0);
	}
break;
case 12:
#line 91 "exp8.y"
	{
		int i;
		i=search_symbol(yystack.l_mark[-3].string);
		if(i==-1)
			printf("\n Undefined Variable");
		else{
			char temp[10];
			if(strcmp(Sym[i].sym_type,"int")==0)
				sprintf(temp,"%d",(int)yystack.l_mark[-1].dval);
			else
				snprintf(temp,10,"%f",yystack.l_mark[-1].dval);
			addQuadruple("=","",temp,yystack.l_mark[-3].string);
		}
	}
break;
case 13:
#line 105 "exp8.y"
	{
		int i,j;
		i=search_symbol(yystack.l_mark[-3].string);
		j=search_symbol(yystack.l_mark[-1].string);
		if(i==-1 || j==-1)
			printf("\n Undefined Variable");
		else
			addQuadruple("=","",yystack.l_mark[-1].string,yystack.l_mark[-3].string);
	}
break;
case 14:
#line 114 "exp8.y"
	{ addQuadruple("=","",pop(),yystack.l_mark[-3].string); }
break;
case 15:
#line 116 "exp8.y"
	{
		char str[5],str1[5]="t";
		sprintf(str, "%d", temp_var);
		strcat(str1,str);
		temp_var++;
		addQuadruple("+",pop(),pop(),str1);
		push(str1);
	}
break;
case 16:
#line 124 "exp8.y"
	{
		char str[5],str1[5]="t";
		sprintf(str, "%d", temp_var);
		strcat(str1,str);
		temp_var++;
		addQuadruple("-",pop(),pop(),str1);
		push(str1);
	}
break;
case 17:
#line 132 "exp8.y"
	{
		char str[5],str1[5]="t";
		sprintf(str, "%d", temp_var);
		strcat(str1,str);
		temp_var++;
		addQuadruple("*",pop(),pop(),str1);
		push(str1);
	}
break;
case 18:
#line 140 "exp8.y"
	{
		char str[5],str1[5]="t";
		sprintf(str, "%d", temp_var);
		strcat(str1,str);
		temp_var++;
		addQuadruple("/",pop(),pop(),str1);
		push(str1);
	}
break;
case 19:
#line 148 "exp8.y"
	{ int i;
		i=search_symbol(yystack.l_mark[0].string);
		if(i==-1)
		printf("\n Undefined Variable");
		else
		push(yystack.l_mark[0].string);
	}
break;
case 20:
#line 155 "exp8.y"
	{ 
		char temp[10];
		snprintf(temp,10,"%f",yystack.l_mark[0].dval);
		push(temp);
	}
break;
#line 660 "y.tab.c"
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
