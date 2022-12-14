/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintatico.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#include "utils.c"
#include "lexico.c"


void yyerror(char *msg);
int yywrap();

#line 85 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_S_IF = 3,                       /* S_IF  */
  YYSYMBOL_S_THEN = 4,                     /* S_THEN  */
  YYSYMBOL_S_ELSE = 5,                     /* S_ELSE  */
  YYSYMBOL_S_PROGRAM = 6,                  /* S_PROGRAM  */
  YYSYMBOL_S_IDENTIF = 7,                  /* S_IDENTIF  */
  YYSYMBOL_S_PONTOVG = 8,                  /* S_PONTOVG  */
  YYSYMBOL_S_VIRGULA = 9,                  /* S_VIRGULA  */
  YYSYMBOL_S_MAIOR = 10,                   /* S_MAIOR  */
  YYSYMBOL_S_PONTO = 11,                   /* S_PONTO  */
  YYSYMBOL_S_DIV = 12,                     /* S_DIV  */
  YYSYMBOL_S_WRITE = 13,                   /* S_WRITE  */
  YYSYMBOL_S_DO = 14,                      /* S_DO  */
  YYSYMBOL_S_MAIS = 15,                    /* S_MAIS  */
  YYSYMBOL_S_MENOR = 16,                   /* S_MENOR  */
  YYSYMBOL_S_NOT = 17,                     /* S_NOT  */
  YYSYMBOL_S_ABREPAR = 18,                 /* S_ABREPAR  */
  YYSYMBOL_S_MAIGUAL = 19,                 /* S_MAIGUAL  */
  YYSYMBOL_S_BEGIN = 20,                   /* S_BEGIN  */
  YYSYMBOL_S_NUMERO = 21,                  /* S_NUMERO  */
  YYSYMBOL_S_VEZES = 22,                   /* S_VEZES  */
  YYSYMBOL_S_OR = 23,                      /* S_OR  */
  YYSYMBOL_S_DOISPTOS = 24,                /* S_DOISPTOS  */
  YYSYMBOL_S_DIFERENTE = 25,               /* S_DIFERENTE  */
  YYSYMBOL_S_ATRIBUI = 26,                 /* S_ATRIBUI  */
  YYSYMBOL_S_WHILE = 27,                   /* S_WHILE  */
  YYSYMBOL_S_MEIGUAL = 28,                 /* S_MEIGUAL  */
  YYSYMBOL_S_AND = 29,                     /* S_AND  */
  YYSYMBOL_S_READ = 30,                    /* S_READ  */
  YYSYMBOL_S_VAR = 31,                     /* S_VAR  */
  YYSYMBOL_S_END = 32,                     /* S_END  */
  YYSYMBOL_S_MENOS = 33,                   /* S_MENOS  */
  YYSYMBOL_S_IGUAL = 34,                   /* S_IGUAL  */
  YYSYMBOL_S_FECHAPAR = 35,                /* S_FECHAPAR  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_programa = 37,                  /* programa  */
  YYSYMBOL_38_1 = 38,                      /* $@1  */
  YYSYMBOL_39_2 = 39,                      /* $@2  */
  YYSYMBOL_bloco = 40,                     /* bloco  */
  YYSYMBOL_variaveis = 41,                 /* variaveis  */
  YYSYMBOL_42_3 = 42,                      /* $@3  */
  YYSYMBOL_declaracoes_de_vars = 43,       /* declaracoes_de_vars  */
  YYSYMBOL_lista_de_identificadores = 44,  /* lista_de_identificadores  */
  YYSYMBOL_corpo = 45,                     /* corpo  */
  YYSYMBOL_sequencia_comandos = 46,        /* sequencia_comandos  */
  YYSYMBOL_comando_sem_rotulo = 47,        /* comando_sem_rotulo  */
  YYSYMBOL_chamada_comando_escrita = 48,   /* chamada_comando_escrita  */
  YYSYMBOL_chamada_comando_leitura = 49,   /* chamada_comando_leitura  */
  YYSYMBOL_lista_de_expressoes = 50,       /* lista_de_expressoes  */
  YYSYMBOL_lista_de_variaveis = 51,        /* lista_de_variaveis  */
  YYSYMBOL_52_4 = 52,                      /* $@4  */
  YYSYMBOL_53_5 = 53,                      /* $@5  */
  YYSYMBOL_atribuicao = 54,                /* atribuicao  */
  YYSYMBOL_55_6 = 55,                      /* $@6  */
  YYSYMBOL_composto = 56,                  /* composto  */
  YYSYMBOL_lista_comandos_sem_rotulo = 57, /* lista_comandos_sem_rotulo  */
  YYSYMBOL_condicional = 58,               /* condicional  */
  YYSYMBOL_59_7 = 59,                      /* $@7  */
  YYSYMBOL_alternativa_cond = 60,          /* alternativa_cond  */
  YYSYMBOL_61_8 = 61,                      /* $@8  */
  YYSYMBOL_repetitivo = 62,                /* repetitivo  */
  YYSYMBOL_63_9 = 63,                      /* $@9  */
  YYSYMBOL_64_10 = 64,                     /* $@10  */
  YYSYMBOL_expressao = 65,                 /* expressao  */
  YYSYMBOL_expressao_simples = 66,         /* expressao_simples  */
  YYSYMBOL_termo = 67,                     /* termo  */
  YYSYMBOL_fator = 68                      /* fator  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   94

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  117

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    57,    54,    62,    66,    68,    67,    74,
      76,    80,    82,    87,    91,    92,    96,    97,    98,    99,
     100,   101,   102,   106,   111,   116,   117,   120,   125,   127,
     126,   141,   141,   159,   158,   178,   182,   183,   188,   187,
     205,   206,   206,   218,   224,   218,   242,   244,   246,   248,
     250,   252,   254,   258,   260,   262,   264,   265,   267,   271,
     273,   275,   277,   281,   292,   294,   295
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "S_IF", "S_THEN",
  "S_ELSE", "S_PROGRAM", "S_IDENTIF", "S_PONTOVG", "S_VIRGULA", "S_MAIOR",
  "S_PONTO", "S_DIV", "S_WRITE", "S_DO", "S_MAIS", "S_MENOR", "S_NOT",
  "S_ABREPAR", "S_MAIGUAL", "S_BEGIN", "S_NUMERO", "S_VEZES", "S_OR",
  "S_DOISPTOS", "S_DIFERENTE", "S_ATRIBUI", "S_WHILE", "S_MEIGUAL",
  "S_AND", "S_READ", "S_VAR", "S_END", "S_MENOS", "S_IGUAL", "S_FECHAPAR",
  "$accept", "programa", "$@1", "$@2", "bloco", "variaveis", "$@3",
  "declaracoes_de_vars", "lista_de_identificadores", "corpo",
  "sequencia_comandos", "comando_sem_rotulo", "chamada_comando_escrita",
  "chamada_comando_leitura", "lista_de_expressoes", "lista_de_variaveis",
  "$@4", "$@5", "atribuicao", "$@6", "composto",
  "lista_comandos_sem_rotulo", "condicional", "$@7", "alternativa_cond",
  "$@8", "repetitivo", "$@9", "$@10", "expressao", "expressao_simples",
  "termo", "fator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-38)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-32)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -1,    12,     7,    15,   -38,   -38,   -10,   -38,    16,     4,
      28,   -38,    13,   -38,   -38,    28,     1,   -38,    -4,   -38,
      29,    13,   -38,    31,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,    48,    46,    54,   -38,    58,    58,    -4,   -38,
      58,   -38,    35,    30,   -38,    41,    -4,   -38,    14,    -4,
      63,    13,   -38,    64,   -38,    65,    30,   -38,    39,    30,
      73,    -4,    58,    -4,    -4,    58,    -4,    -4,    58,    -4,
      58,    58,    58,    -4,     6,   -38,    13,   -38,   -38,     9,
      75,   -38,    77,   -38,   -38,    13,    33,    30,    33,    33,
      30,    33,    33,    30,    33,   -38,   -38,   -38,   -38,    -4,
     -38,   -38,    76,   -38,   -38,   -38,   -38,    82,   -38,    13,
      84,   -38,   -38,   -38,   -38,    13,   -38
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     2,     6,     7,     0,     0,
       0,     3,    16,     5,    12,     8,     0,     4,     0,    33,
       0,    16,    43,     0,     0,    15,    17,    18,    19,    20,
      21,    22,     0,     0,     0,    63,     0,     0,     0,    64,
       0,    38,    52,    58,    62,     0,    25,    37,     0,     0,
      28,    16,    13,     0,    11,     0,    56,    66,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    16,    35,    44,     0,
       0,    14,     0,    10,    65,    16,    49,    53,    48,    51,
      55,    47,    50,    54,    46,    60,    59,    61,    34,     0,
      23,    36,     0,    29,    24,    32,     9,    40,    26,    16,
       0,    41,    39,    45,    30,    16,    42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,    74,   -38,
     -38,   -21,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -37,
      17,   -34,   -33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     6,    17,     8,     9,    10,    15,    16,    13,
      24,    25,    26,    27,    74,    79,   110,    80,    28,    45,
      29,    48,    30,    60,   112,   115,    31,    49,   102,    41,
      42,    43,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      47,    58,    56,    35,    57,     1,    59,     4,    51,    75,
      33,    36,    78,    37,    38,    99,    18,    39,   103,     3,
      19,     7,    76,     5,    12,    34,    20,    11,    87,    40,
      81,    90,    52,    21,    93,    14,    98,    95,    96,    97,
      22,   100,    70,    23,   104,    61,    77,    46,    62,    50,
      62,    63,    71,    54,    64,   101,    65,    33,    65,    72,
      66,    55,   108,    67,   107,    35,    68,    73,    68,    69,
     -31,    82,    53,    83,    84,    37,    38,    85,    86,    39,
      88,    89,   105,    91,    92,   106,    94,   111,   113,    32,
     109,   114,     0,     0,   116
};

static const yytype_int8 yycheck[] =
{
      21,    38,    36,     7,    37,     6,    40,     0,     8,    46,
       9,    15,    49,    17,    18,     9,     3,    21,     9,     7,
       7,    31,     8,     8,    20,    24,    13,    11,    62,    33,
      51,    65,    32,    20,    68,     7,    73,    70,    71,    72,
      27,    35,    12,    30,    35,    10,    32,    18,    15,    18,
      15,    16,    22,     7,    19,    76,    23,     9,    23,    29,
      25,     7,    99,    28,    85,     7,    33,    26,    33,    34,
       7,     7,    24,     8,    35,    17,    18,     4,    61,    21,
      63,    64,     7,    66,    67,     8,    69,     5,   109,    15,
      14,     7,    -1,    -1,   115
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    37,     7,     0,     8,    38,    31,    40,    41,
      42,    11,    20,    45,     7,    43,    44,    39,     3,     7,
      13,    20,    27,    30,    46,    47,    48,    49,    54,    56,
      58,    62,    44,     9,    24,     7,    15,    17,    18,    21,
      33,    65,    66,    67,    68,    55,    18,    47,    57,    63,
      18,     8,    32,    24,     7,     7,    67,    68,    65,    67,
      59,    10,    15,    16,    19,    23,    25,    28,    33,    34,
      12,    22,    29,    26,    50,    65,     8,    32,    65,    51,
      53,    47,     7,     8,    35,     4,    66,    67,    66,    66,
      67,    66,    66,    67,    66,    68,    68,    68,    65,     9,
      35,    47,    64,     9,    35,     7,     8,    47,    65,    14,
      52,     5,    60,    47,     7,    61,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    38,    39,    37,    40,    41,    42,    41,    43,
      43,    44,    44,    45,    46,    46,    47,    47,    47,    47,
      47,    47,    47,    48,    49,    50,    50,    50,    51,    52,
      51,    53,    51,    55,    54,    56,    57,    57,    59,    58,
      60,    61,    60,    63,    64,    62,    65,    65,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    67,
      67,    67,    67,    68,    68,    68,    68
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     7,     2,     0,     0,     3,     5,
       4,     3,     1,     3,     3,     1,     0,     1,     1,     1,
       1,     1,     1,     4,     4,     0,     3,     1,     0,     0,
       4,     0,     2,     0,     4,     3,     3,     1,     0,     6,
       0,     0,     3,     0,     0,     6,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     2,     2,     1,     3,
       3,     3,     1,     1,     1,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 55 "sintatico.y"
                { fprintf(arq_mep, "%s\n","INPP"); }
#line 1327 "y.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 57 "sintatico.y"
                { fprintf(arq_mep, "%s\n","PARA"); }
#line 1333 "y.tab.c"
    break;

  case 4: /* programa: S_PROGRAM S_IDENTIF S_PONTOVG $@1 bloco S_PONTO $@2  */
#line 58 "sintatico.y"
                { fprintf(arq_mep, "%s\n","FIM"); }
#line 1339 "y.tab.c"
    break;

  case 7: /* $@3: %empty  */
#line 68 "sintatico.y"
                { CONTA_VARS = 0; }
#line 1345 "y.tab.c"
    break;

  case 8: /* variaveis: S_VAR $@3 declaracoes_de_vars  */
#line 70 "sintatico.y"
                { fprintf(arq_mep, "%s %s %d\n","AMEM","",CONTA_VARS); }
#line 1351 "y.tab.c"
    break;

  case 11: /* lista_de_identificadores: lista_de_identificadores S_VIRGULA S_IDENTIF  */
#line 81 "sintatico.y"
                { insere_variavel(lexema); CONTA_VARS++; }
#line 1357 "y.tab.c"
    break;

  case 12: /* lista_de_identificadores: S_IDENTIF  */
#line 83 "sintatico.y"
                { insere_variavel(lexema); CONTA_VARS++; }
#line 1363 "y.tab.c"
    break;

  case 26: /* lista_de_expressoes: lista_de_expressoes S_VIRGULA expressao  */
#line 119 "sintatico.y"
                { fprintf(arq_mep, "%s\n","IMPR"); }
#line 1369 "y.tab.c"
    break;

  case 27: /* lista_de_expressoes: expressao  */
#line 121 "sintatico.y"
                { fprintf(arq_mep, "%s\n","IMPR"); }
#line 1375 "y.tab.c"
    break;

  case 29: /* $@4: %empty  */
#line 127 "sintatico.y"
                { fprintf(arq_mep, "%s\n","LEIT"); }
#line 1381 "y.tab.c"
    break;

  case 30: /* lista_de_variaveis: lista_de_variaveis S_VIRGULA $@4 S_IDENTIF  */
#line 129 "sintatico.y"
                { 
	  		POS_SIMB = busca_simbolo(lexema);

	  		if(POS_SIMB == -1){
                		printf("Vari??vel [%s] n??o declarada.\n",lexema);
                		exit(1);
            }
	  		else{
	  		  fprintf(arq_mep, "%s %s %d\n", "ARMZ", "", TSIMB[POS_SIMB].endereco);  		
	  		}  
	  	}
#line 1397 "y.tab.c"
    break;

  case 31: /* $@5: %empty  */
#line 141 "sintatico.y"
          { fprintf(arq_mep, "%s\n","LEIT"); }
#line 1403 "y.tab.c"
    break;

  case 32: /* lista_de_variaveis: $@5 S_IDENTIF  */
#line 143 "sintatico.y"
                { 
	  		POS_SIMB = busca_simbolo(lexema);

	  		if(POS_SIMB == -1){

                		printf("Vari??vel [%s] n??o declarada.\n",lexema);
                		exit(1);
            }
	  		else{
	  		  fprintf(arq_mep, "%s %s %d\n", "ARMZ", "", TSIMB[POS_SIMB].endereco);  		
	  		}  
	  	}
#line 1420 "y.tab.c"
    break;

  case 33: /* $@6: %empty  */
#line 159 "sintatico.y"
                { 
	  		POS_SIMB = busca_simbolo(lexema);

	  		if(POS_SIMB == -1){
                	printf("Identificador [%s] n??o declarado\n",lexema);
                	exit(1);
            }
	  		else{
	  		  empilha(TSIMB[POS_SIMB].endereco);  		
	  		}  
	  	}
#line 1436 "y.tab.c"
    break;

  case 34: /* atribuicao: S_IDENTIF $@6 S_ATRIBUI expressao  */
#line 171 "sintatico.y"
                {
			aux = desempilha();		  	
			fprintf(arq_mep, "%s %s %d\n", "ARMZ", "", aux);
		}
#line 1445 "y.tab.c"
    break;

  case 38: /* $@7: %empty  */
#line 188 "sintatico.y"
                  {
	 	ROTULO++;
	 	empilha(ROTULO);
	  	fprintf(arq_mep, "DSVF L%d\n",ROTULO); 
	 }
#line 1455 "y.tab.c"
    break;

  case 39: /* condicional: S_IF expressao $@7 S_THEN comando_sem_rotulo alternativa_cond  */
#line 197 "sintatico.y"
         {
	 	aux=desempilha();
	 	fprintf(arq_mep,"L%d:NADA\n",aux);
	 }
#line 1464 "y.tab.c"
    break;

  case 41: /* $@8: %empty  */
#line 206 "sintatico.y"
                 {
		aux=desempilha();
		ROTULO++;
		empilha(ROTULO);
		fprintf(arq_mep,"DSVS L%d\n",ROTULO);
		fprintf(arq_mep,"L%d:NADA\n",aux);
	}
#line 1476 "y.tab.c"
    break;

  case 43: /* $@9: %empty  */
#line 218 "sintatico.y"
                {
		ROTULO++;
		empilha(ROTULO);
		fprintf(arq_mep,"L%d:NADA\n",ROTULO);
	}
#line 1486 "y.tab.c"
    break;

  case 44: /* $@10: %empty  */
#line 224 "sintatico.y"
                  {
	 	ROTULO++;
	 	empilha(ROTULO);
	 	fprintf(arq_mep,"DSVF L%d\n",ROTULO);
	 }
#line 1496 "y.tab.c"
    break;

  case 45: /* repetitivo: S_WHILE $@9 expressao $@10 S_DO comando_sem_rotulo  */
#line 232 "sintatico.y"
                           {
	 	aux = desempilha(); //2
	 	fprintf(arq_mep,"DSVS L%d\n",desempilha());//1
	 	fprintf(arq_mep,"L%d:NADA\n",aux);
	 }
#line 1506 "y.tab.c"
    break;

  case 46: /* expressao: expressao_simples S_IGUAL expressao_simples  */
#line 243 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CMIG"); }
#line 1512 "y.tab.c"
    break;

  case 47: /* expressao: expressao_simples S_DIFERENTE expressao_simples  */
#line 245 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CMDG"); }
#line 1518 "y.tab.c"
    break;

  case 48: /* expressao: expressao_simples S_MENOR expressao_simples  */
#line 247 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CMME"); }
#line 1524 "y.tab.c"
    break;

  case 49: /* expressao: expressao_simples S_MAIOR expressao_simples  */
#line 249 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CMMA"); }
#line 1530 "y.tab.c"
    break;

  case 50: /* expressao: expressao_simples S_MEIGUAL expressao_simples  */
#line 251 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CMEG"); }
#line 1536 "y.tab.c"
    break;

  case 51: /* expressao: expressao_simples S_MAIGUAL expressao_simples  */
#line 253 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CMAG"); }
#line 1542 "y.tab.c"
    break;

  case 53: /* expressao_simples: expressao_simples S_MAIS termo  */
#line 259 "sintatico.y"
                { fprintf(arq_mep, "%s\n","SOMA"); }
#line 1548 "y.tab.c"
    break;

  case 54: /* expressao_simples: expressao_simples S_MENOS termo  */
#line 261 "sintatico.y"
                { fprintf(arq_mep, "%s\n","SUBT"); }
#line 1554 "y.tab.c"
    break;

  case 55: /* expressao_simples: expressao_simples S_OR termo  */
#line 263 "sintatico.y"
                { fprintf(arq_mep, "%s\n","DISJ"); }
#line 1560 "y.tab.c"
    break;

  case 57: /* expressao_simples: S_MENOS termo  */
#line 266 "sintatico.y"
                { fprintf(arq_mep, "%s\n","INVR"); }
#line 1566 "y.tab.c"
    break;

  case 59: /* termo: termo S_VEZES fator  */
#line 272 "sintatico.y"
                { fprintf(arq_mep, "%s\n","MULT"); }
#line 1572 "y.tab.c"
    break;

  case 60: /* termo: termo S_DIV fator  */
#line 274 "sintatico.y"
                { fprintf(arq_mep, "%s\n","DIVI"); }
#line 1578 "y.tab.c"
    break;

  case 61: /* termo: termo S_AND fator  */
#line 276 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CONJ"); }
#line 1584 "y.tab.c"
    break;

  case 63: /* fator: S_IDENTIF  */
#line 282 "sintatico.y"
                { 
	  		POS_SIMB = busca_simbolo(lexema);

	  		if(POS_SIMB == -1){
	  		  printf("Variavel [%s] nao declarada!",lexema);
	  		}
	  		else{
	  		  fprintf(arq_mep, "%s %s %d\n", "CRVL", "", TSIMB[POS_SIMB].endereco);  		
	  		}  
	  	}
#line 1599 "y.tab.c"
    break;

  case 64: /* fator: S_NUMERO  */
#line 293 "sintatico.y"
                { fprintf(arq_mep, "%s %s %s\n","CRCT", "", lexema); }
#line 1605 "y.tab.c"
    break;

  case 66: /* fator: S_NOT fator  */
#line 296 "sintatico.y"
                { fprintf(arq_mep, "%s\n","NEGA"); }
#line 1611 "y.tab.c"
    break;


#line 1615 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 299 "sintatico.y"



int yywrap(){
	return(1);
}

void yyerror(char *msg){
	printf("Erro sintatico. LINHA: %d.\n",numero_da_linha);
}

int main(int argc, char **argv){
	char temp[100];
	//Checa se entrou com o nome do programa
	if(argc < 2){
		printf("Erro!\n");
		printf("Uso:\tpascal.bin <nome_sem_extensao>\n");
		printf("\tExemplo: ./pascal.bin teste\n");
		exit(1);
	}//else

	strcpy(temp,argv[1]);
	strcat(temp,".pas");
	
	yyin=fopen(temp,"r");
	//Testa se consegui abrir o arquivo
	if(yyin==NULL){
		printf("Erro!\n");
		printf("N??o consigo abrir o arquivo [%s]\n",temp);
		exit(1);
	}
	
	strcpy(temp,argv[1]);
	strcat(temp,".mep");
	arq_mep = fopen(temp,"w");
	if(arq_mep==NULL){
	printf("Erro!\n");
		printf("N??o consigo abrir o arquivo [%s]\n",temp);
		exit(1);
	
	}
	
	if(!yyparse()){
		printf("\nPrograma CORRETO!");
		printf("\nNumeros de linhas compiladas: %d\n\n", numero_da_linha);
	}
	else{
		printf("Nao foi poss??vel compilar!.\n");
	}
}
