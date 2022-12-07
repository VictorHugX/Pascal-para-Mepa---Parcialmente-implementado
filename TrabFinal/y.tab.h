/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    S_IF = 258,                    /* S_IF  */
    S_THEN = 259,                  /* S_THEN  */
    S_ELSE = 260,                  /* S_ELSE  */
    S_PROGRAM = 261,               /* S_PROGRAM  */
    S_IDENTIF = 262,               /* S_IDENTIF  */
    S_PONTOVG = 263,               /* S_PONTOVG  */
    S_VIRGULA = 264,               /* S_VIRGULA  */
    S_MAIOR = 265,                 /* S_MAIOR  */
    S_PONTO = 266,                 /* S_PONTO  */
    S_DIV = 267,                   /* S_DIV  */
    S_WRITE = 268,                 /* S_WRITE  */
    S_DO = 269,                    /* S_DO  */
    S_MAIS = 270,                  /* S_MAIS  */
    S_MENOR = 271,                 /* S_MENOR  */
    S_NOT = 272,                   /* S_NOT  */
    S_ABREPAR = 273,               /* S_ABREPAR  */
    S_MAIGUAL = 274,               /* S_MAIGUAL  */
    S_BEGIN = 275,                 /* S_BEGIN  */
    S_NUMERO = 276,                /* S_NUMERO  */
    S_VEZES = 277,                 /* S_VEZES  */
    S_OR = 278,                    /* S_OR  */
    S_DOISPTOS = 279,              /* S_DOISPTOS  */
    S_DIFERENTE = 280,             /* S_DIFERENTE  */
    S_ATRIBUI = 281,               /* S_ATRIBUI  */
    S_WHILE = 282,                 /* S_WHILE  */
    S_MEIGUAL = 283,               /* S_MEIGUAL  */
    S_AND = 284,                   /* S_AND  */
    S_READ = 285,                  /* S_READ  */
    S_VAR = 286,                   /* S_VAR  */
    S_END = 287,                   /* S_END  */
    S_MENOS = 288,                 /* S_MENOS  */
    S_IGUAL = 289,                 /* S_IGUAL  */
    S_FECHAPAR = 290               /* S_FECHAPAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define S_IF 258
#define S_THEN 259
#define S_ELSE 260
#define S_PROGRAM 261
#define S_IDENTIF 262
#define S_PONTOVG 263
#define S_VIRGULA 264
#define S_MAIOR 265
#define S_PONTO 266
#define S_DIV 267
#define S_WRITE 268
#define S_DO 269
#define S_MAIS 270
#define S_MENOR 271
#define S_NOT 272
#define S_ABREPAR 273
#define S_MAIGUAL 274
#define S_BEGIN 275
#define S_NUMERO 276
#define S_VEZES 277
#define S_OR 278
#define S_DOISPTOS 279
#define S_DIFERENTE 280
#define S_ATRIBUI 281
#define S_WHILE 282
#define S_MEIGUAL 283
#define S_AND 284
#define S_READ 285
#define S_VAR 286
#define S_END 287
#define S_MENOS 288
#define S_IGUAL 289
#define S_FECHAPAR 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
