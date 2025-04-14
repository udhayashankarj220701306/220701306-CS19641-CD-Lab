#ifndef _yy_defines_h_
#define _yy_defines_h_

#define NUM 257
#define TYPE 258
#define ID 259
#define FOR 260
#define LE 261
#define GE 262
#define EQ 263
#define NE 264
#define AND 265
#define OR 266
#define IF 267
#define ELSE 268
#define WHILE 269
#define SWITCH 270
#define CASE 271
#define BREAK 272
#define DEFAULT 273
#define MAIN 274
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE{
	int ival;
	double dval;
	char string[10];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;

#endif /* _yy_defines_h_ */
