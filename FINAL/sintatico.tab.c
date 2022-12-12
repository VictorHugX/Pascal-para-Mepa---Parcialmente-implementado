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

#line 84 "sintatico.tab.c"

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
    S_FECHAPAR = 290,              /* S_FECHAPAR  */
    S_REPEAT = 291,                /* S_REPEAT  */
    S_UNTIL = 292                  /* S_UNTIL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



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
  YYSYMBOL_S_REPEAT = 36,                  /* S_REPEAT  */
  YYSYMBOL_S_UNTIL = 37,                   /* S_UNTIL  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_programa = 39,                  /* programa  */
  YYSYMBOL_40_1 = 40,                      /* $@1  */
  YYSYMBOL_41_2 = 41,                      /* $@2  */
  YYSYMBOL_bloco = 42,                     /* bloco  */
  YYSYMBOL_variaveis = 43,                 /* variaveis  */
  YYSYMBOL_44_3 = 44,                      /* $@3  */
  YYSYMBOL_declaracoes_de_vars = 45,       /* declaracoes_de_vars  */
  YYSYMBOL_46_4 = 46,                      /* $@4  */
  YYSYMBOL_47_5 = 47,                      /* $@5  */
  YYSYMBOL_lista_de_identificadores = 48,  /* lista_de_identificadores  */
  YYSYMBOL_corpo = 49,                     /* corpo  */
  YYSYMBOL_sequencia_comandos = 50,        /* sequencia_comandos  */
  YYSYMBOL_comando_sem_rotulo = 51,        /* comando_sem_rotulo  */
  YYSYMBOL_chamada_comando_escrita = 52,   /* chamada_comando_escrita  */
  YYSYMBOL_chamada_comando_leitura = 53,   /* chamada_comando_leitura  */
  YYSYMBOL_lista_de_expressoes = 54,       /* lista_de_expressoes  */
  YYSYMBOL_lista_de_variaveis = 55,        /* lista_de_variaveis  */
  YYSYMBOL_56_6 = 56,                      /* $@6  */
  YYSYMBOL_57_7 = 57,                      /* $@7  */
  YYSYMBOL_atribuicao = 58,                /* atribuicao  */
  YYSYMBOL_59_8 = 59,                      /* $@8  */
  YYSYMBOL_composto = 60,                  /* composto  */
  YYSYMBOL_lista_comandos_sem_rotulo = 61, /* lista_comandos_sem_rotulo  */
  YYSYMBOL_condicional = 62,               /* condicional  */
  YYSYMBOL_63_9 = 63,                      /* $@9  */
  YYSYMBOL_alternativa_cond = 64,          /* alternativa_cond  */
  YYSYMBOL_65_10 = 65,                     /* $@10  */
  YYSYMBOL_repetitivo = 66,                /* repetitivo  */
  YYSYMBOL_67_11 = 67,                     /* $@11  */
  YYSYMBOL_68_12 = 68,                     /* $@12  */
  YYSYMBOL_repetitivo2 = 69,               /* repetitivo2  */
  YYSYMBOL_70_13 = 70,                     /* $@13  */
  YYSYMBOL_expressao = 71,                 /* expressao  */
  YYSYMBOL_expressao_simples = 72,         /* expressao_simples  */
  YYSYMBOL_termo = 73,                     /* termo  */
  YYSYMBOL_fator = 74                      /* fator  */
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
#define YYLAST   103

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  126

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


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
      35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    56,    56,    58,    55,    63,    67,    69,    68,    76,
      75,    79,    78,    84,    86,    91,    95,    96,   100,   101,
     102,   103,   104,   105,   106,   107,   111,   115,   120,   121,
     123,   128,   130,   129,   144,   144,   162,   161,   194,   198,
     199,   204,   203,   221,   222,   222,   234,   240,   234,   258,
     258,   275,   277,   279,   281,   283,   285,   287,   291,   293,
     295,   297,   302,   304,   306,   308,   313,   326,   328,   329,
     330,   332
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
  "S_REPEAT", "S_UNTIL", "$accept", "programa", "$@1", "$@2", "bloco",
  "variaveis", "$@3", "declaracoes_de_vars", "$@4", "$@5",
  "lista_de_identificadores", "corpo", "sequencia_comandos",
  "comando_sem_rotulo", "chamada_comando_escrita",
  "chamada_comando_leitura", "lista_de_expressoes", "lista_de_variaveis",
  "$@6", "$@7", "atribuicao", "$@8", "composto",
  "lista_comandos_sem_rotulo", "condicional", "$@9", "alternativa_cond",
  "$@10", "repetitivo", "$@11", "$@12", "repetitivo2", "$@13", "expressao",
  "expressao_simples", "termo", "fator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-52)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-35)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       8,     2,    13,    11,   -52,   -52,   -11,   -52,    10,    25,
      16,   -52,     4,   -52,   -52,    16,    41,   -52,    31,   -52,
       9,     4,   -52,    33,   -52,    -3,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,    46,    51,    55,    26,   -52,    38,
      -4,    31,   -52,     0,    31,    57,     4,     4,   -52,    62,
     -52,   -52,   -52,    26,    26,    31,   -52,    26,    27,   -52,
      70,    31,    26,    31,    31,    26,    31,    31,    26,    31,
      31,     3,   -52,     4,   -52,   -52,     7,    75,    47,   -52,
     -52,    77,   -52,   -52,    52,   -52,    26,    26,    26,     4,
      -5,    27,    -5,    -5,    27,    -5,    -5,    27,    -5,   -52,
      31,   -52,   -52,    72,   -52,   -52,   -52,    31,    80,   -52,
     -52,   -52,   -52,   -52,    84,   -52,     4,    83,   -52,   -52,
     -52,   -52,   -52,   -52,     4,   -52
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     2,     6,     7,     0,     0,
       0,     3,    18,     5,    14,     8,     0,     4,     0,    36,
       0,    18,    46,     0,    49,     0,    17,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,    41,    57,
       0,    28,    40,     0,     0,    31,    18,    18,    15,     0,
      13,    11,    66,     0,     0,     0,    67,     0,    61,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    18,    38,    47,     0,     0,     0,    16,
       9,     0,    69,    71,     0,    70,     0,     0,     0,    18,
      51,    59,    52,    53,    60,    56,    54,    58,    55,    37,
       0,    26,    39,     0,    32,    27,    35,     0,     0,    12,
      68,    62,    63,    64,    43,    29,    18,     0,    50,    10,
      44,    42,    48,    33,    18,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
      76,   -52,   -52,   -21,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -40,    12,    15,   -51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     6,    17,     8,     9,    10,    15,   108,    81,
      16,    13,    25,    26,    27,    28,    71,    76,   117,    77,
      29,    40,    30,    43,    31,    60,   121,   124,    32,    44,
     103,    33,    46,    38,    39,    58,    59
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      42,    72,    82,    83,    75,    47,    85,    18,    73,     3,
      62,    19,   100,     4,     1,    84,   104,    20,    65,     5,
       7,    11,    70,    14,    21,    78,    79,    41,    68,    48,
      99,    22,    74,    52,    23,   111,   112,   113,   101,    86,
      24,    53,   105,    54,    55,    12,    37,    56,    61,    87,
      35,    45,   102,    62,    63,    35,    88,    64,    50,    57,
     115,    65,    51,    66,   -34,    36,    67,   118,   114,    80,
      49,    68,    69,    90,    89,    92,    93,    91,    95,    96,
      94,    98,   106,    97,   107,   109,   116,   110,   119,   120,
     123,    34,     0,     0,     0,   122,     0,     0,     0,     0,
       0,     0,     0,   125
};

static const yytype_int8 yycheck[] =
{
      21,    41,    53,    54,    44,     8,    57,     3,     8,     7,
      15,     7,     9,     0,     6,    55,     9,    13,    23,     8,
      31,    11,    26,     7,    20,    46,    47,    18,    33,    32,
      70,    27,    32,     7,    30,    86,    87,    88,    35,    12,
      36,    15,    35,    17,    18,    20,    15,    21,    10,    22,
       9,    18,    73,    15,    16,     9,    29,    19,     7,    33,
     100,    23,     7,    25,     7,    24,    28,   107,    89,     7,
      24,    33,    34,    61,     4,    63,    64,    62,    66,    67,
      65,    69,     7,    68,    37,     8,    14,    35,     8,     5,
       7,    15,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    39,     7,     0,     8,    40,    31,    42,    43,
      44,    11,    20,    49,     7,    45,    48,    41,     3,     7,
      13,    20,    27,    30,    36,    50,    51,    52,    53,    58,
      60,    62,    66,    69,    48,     9,    24,    15,    71,    72,
      59,    18,    51,    61,    67,    18,    70,     8,    32,    24,
       7,     7,     7,    15,    17,    18,    21,    33,    73,    74,
      63,    10,    15,    16,    19,    23,    25,    28,    33,    34,
      26,    54,    71,     8,    32,    71,    55,    57,    51,    51,
       7,    47,    74,    74,    71,    74,    12,    22,    29,     4,
      72,    73,    72,    72,    73,    72,    72,    73,    72,    71,
       9,    35,    51,    68,     9,    35,     7,    37,    46,     8,
      35,    74,    74,    74,    51,    71,    14,    56,    71,     8,
       5,    64,    51,     7,    65,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    40,    41,    39,    42,    43,    44,    43,    46,
      45,    47,    45,    48,    48,    49,    50,    50,    51,    51,
      51,    51,    51,    51,    51,    51,    52,    53,    54,    54,
      54,    55,    56,    55,    57,    55,    59,    58,    60,    61,
      61,    63,    62,    64,    65,    64,    67,    68,    66,    70,
      69,    71,    71,    71,    71,    71,    71,    71,    72,    72,
      72,    72,    73,    73,    73,    73,    74,    74,    74,    74,
      74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     7,     2,     0,     0,     3,     0,
       6,     0,     5,     3,     1,     3,     3,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     0,     3,
       1,     0,     0,     4,     0,     2,     0,     4,     3,     3,
       1,     0,     6,     0,     0,     3,     0,     0,     6,     0,
       5,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     2,     3,     3,     3,     1,     1,     1,     3,     2,
       2,     2
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
#line 56 "sintatico.y"
                { fprintf(arq_mep, "%s\n","INPP"); }
#line 1302 "sintatico.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 58 "sintatico.y"
                { fprintf(arq_mep, "%s\n","PARA"); }
#line 1308 "sintatico.tab.c"
    break;

  case 4: /* programa: S_PROGRAM S_IDENTIF S_PONTOVG $@1 bloco S_PONTO $@2  */
#line 59 "sintatico.y"
                { fprintf(arq_mep, "%s\n","FIM"); }
#line 1314 "sintatico.tab.c"
    break;

  case 7: /* $@3: %empty  */
#line 69 "sintatico.y"
                { CONTA_VARS = 0; }
#line 1320 "sintatico.tab.c"
    break;

  case 8: /* variaveis: S_VAR $@3 declaracoes_de_vars  */
#line 71 "sintatico.y"
                { fprintf(arq_mep, "%s %s %d\n","AMEM","",CONTA_VARS); }
#line 1326 "sintatico.tab.c"
    break;

  case 9: /* $@4: %empty  */
#line 76 "sintatico.y"
        { inserir_tipo(lexema); }
#line 1332 "sintatico.tab.c"
    break;

  case 11: /* $@5: %empty  */
#line 79 "sintatico.y"
        { inserir_tipo(lexema); }
#line 1338 "sintatico.tab.c"
    break;

  case 13: /* lista_de_identificadores: lista_de_identificadores S_VIRGULA S_IDENTIF  */
#line 85 "sintatico.y"
                { insere_variavel(lexema); CONTA_VARS++; }
#line 1344 "sintatico.tab.c"
    break;

  case 14: /* lista_de_identificadores: S_IDENTIF  */
#line 87 "sintatico.y"
                { insere_variavel(lexema); CONTA_VARS++; }
#line 1350 "sintatico.tab.c"
    break;

  case 29: /* lista_de_expressoes: lista_de_expressoes S_VIRGULA expressao  */
#line 122 "sintatico.y"
                { fprintf(arq_mep, "%s\n","IMPR"); }
#line 1356 "sintatico.tab.c"
    break;

  case 30: /* lista_de_expressoes: expressao  */
#line 124 "sintatico.y"
                { fprintf(arq_mep, "%s\n","IMPR"); }
#line 1362 "sintatico.tab.c"
    break;

  case 32: /* $@6: %empty  */
#line 130 "sintatico.y"
                { fprintf(arq_mep, "%s\n","LEIT"); }
#line 1368 "sintatico.tab.c"
    break;

  case 33: /* lista_de_variaveis: lista_de_variaveis S_VIRGULA $@6 S_IDENTIF  */
#line 132 "sintatico.y"
                { 
	  		POS_SIMB = busca_simbolo(lexema);

	  		if(POS_SIMB == -1){
                		printf("Variável [%s] não declarada.\n",lexema);
                		exit(1);
            }
	  		else{
	  		  fprintf(arq_mep, "%s %s %d\n", "ARMZ", "", TSIMB[POS_SIMB].endereco);  		
	  		}  
	  	}
#line 1384 "sintatico.tab.c"
    break;

  case 34: /* $@7: %empty  */
#line 144 "sintatico.y"
          { fprintf(arq_mep, "%s\n","LEIT"); }
#line 1390 "sintatico.tab.c"
    break;

  case 35: /* lista_de_variaveis: $@7 S_IDENTIF  */
#line 146 "sintatico.y"
                { 
	  		POS_SIMB = busca_simbolo(lexema);

	  		if(POS_SIMB == -1){

                		printf("Variável [%s] não declarada.\n",lexema);
                		exit(1);
            }
	  		else{
	  		  fprintf(arq_mep, "%s %s %d\n", "ARMZ", "", TSIMB[POS_SIMB].endereco);  		
	  		}  
	  	}
#line 1407 "sintatico.tab.c"
    break;

  case 36: /* $@8: %empty  */
#line 162 "sintatico.y"
                { 
	  		POS_SIMB = busca_simbolo(lexema);

	  		if(POS_SIMB == -1){
                	printf("Identificador [%s] não declarado\n",lexema);
                	exit(1);
            }
	  		else{
	  		  empilha(TSIMB[POS_SIMB].endereco);  		
	  		}  
	  	}
#line 1423 "sintatico.tab.c"
    break;

  case 37: /* atribuicao: S_IDENTIF $@8 S_ATRIBUI expressao  */
#line 174 "sintatico.y"
                {
			aux = desempilha();
			TabelaSimbolos* tabelaSimbolos = 0;
			for(int i=0; i < TOPO_TSIMB; i++){
			    if(TSIMB[i].endereco == aux){
			         tabelaSimbolos = &TSIMB[i];
			         break;
			}
			
		}
		if(tabelaSimbolos == 0){ printf("Simbolo Inválido\n"); exit(1);}
		if(tabelaSimbolos->tipo != STIPO){
		       printf("Erro linha %d: Nenhum tipo incompativel\n", numero_da_linha);
		       exit(1);
	}
	fprintf(arq_mep, "%s %s %d\n", "ARMZ", "", aux);
}
#line 1445 "sintatico.tab.c"
    break;

  case 41: /* $@9: %empty  */
#line 204 "sintatico.y"
                  {
	 	ROTULO++;
	 	empilha(ROTULO);
	  	fprintf(arq_mep, "DSVF L%d\n",ROTULO); 
	 }
#line 1455 "sintatico.tab.c"
    break;

  case 42: /* condicional: S_IF expressao $@9 S_THEN comando_sem_rotulo alternativa_cond  */
#line 213 "sintatico.y"
         {
	 	aux=desempilha();
	 	fprintf(arq_mep,"L%d:NADA\n",aux);
	 }
#line 1464 "sintatico.tab.c"
    break;

  case 44: /* $@10: %empty  */
#line 222 "sintatico.y"
                 {
		aux=desempilha();
		ROTULO++;
		empilha(ROTULO);
		fprintf(arq_mep,"DSVS L%d\n",ROTULO);
		fprintf(arq_mep,"L%d:NADA\n",aux);
	}
#line 1476 "sintatico.tab.c"
    break;

  case 46: /* $@11: %empty  */
#line 234 "sintatico.y"
                {
		ROTULO++;
		empilha(ROTULO);
		fprintf(arq_mep,"L%d:NADA\n",ROTULO);
	}
#line 1486 "sintatico.tab.c"
    break;

  case 47: /* $@12: %empty  */
#line 240 "sintatico.y"
                  {
	 	ROTULO++;
	 	empilha(ROTULO);
	 	fprintf(arq_mep,"DSVF L%d\n",ROTULO);
	 }
#line 1496 "sintatico.tab.c"
    break;

  case 48: /* repetitivo: S_WHILE $@11 expressao $@12 S_DO comando_sem_rotulo  */
#line 248 "sintatico.y"
                           {
	 	aux = desempilha(); //2
	 	fprintf(arq_mep,"DSVS L%d\n",desempilha());//1
	 	fprintf(arq_mep,"L%d:NADA\n",aux);
	 }
#line 1506 "sintatico.tab.c"
    break;

  case 49: /* $@13: %empty  */
#line 258 "sintatico.y"
                 {
		ROTULO++;
		empilha(ROTULO);
		fprintf(arq_mep,"L%d:NADA\n",ROTULO);
	}
#line 1516 "sintatico.tab.c"
    break;

  case 50: /* repetitivo2: S_REPEAT $@13 comando_sem_rotulo S_UNTIL expressao  */
#line 268 "sintatico.y"
                 {
	 	fprintf(arq_mep,"DSVF L%d\n",aux);}
#line 1523 "sintatico.tab.c"
    break;

  case 51: /* expressao: expressao_simples S_MAIOR expressao_simples  */
#line 276 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CMMA"); }
#line 1529 "sintatico.tab.c"
    break;

  case 52: /* expressao: expressao_simples S_MENOR expressao_simples  */
#line 278 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CMME"); }
#line 1535 "sintatico.tab.c"
    break;

  case 53: /* expressao: expressao_simples S_MAIGUAL expressao_simples  */
#line 280 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CMAG"); }
#line 1541 "sintatico.tab.c"
    break;

  case 54: /* expressao: expressao_simples S_MEIGUAL expressao_simples  */
#line 282 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CMEG"); }
#line 1547 "sintatico.tab.c"
    break;

  case 55: /* expressao: expressao_simples S_IGUAL expressao_simples  */
#line 284 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CMIG"); }
#line 1553 "sintatico.tab.c"
    break;

  case 56: /* expressao: expressao_simples S_DIFERENTE expressao_simples  */
#line 286 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CMDG"); }
#line 1559 "sintatico.tab.c"
    break;

  case 58: /* expressao_simples: expressao_simples S_MENOS termo  */
#line 292 "sintatico.y"
                { fprintf(arq_mep, "%s\n","SUBT"); }
#line 1565 "sintatico.tab.c"
    break;

  case 59: /* expressao_simples: expressao_simples S_MAIS termo  */
#line 294 "sintatico.y"
                { fprintf(arq_mep, "%s\n","SOMA"); }
#line 1571 "sintatico.tab.c"
    break;

  case 60: /* expressao_simples: expressao_simples S_OR termo  */
#line 296 "sintatico.y"
                { fprintf(arq_mep, "%s\n","DISJ"); }
#line 1577 "sintatico.tab.c"
    break;

  case 62: /* termo: termo S_DIV fator  */
#line 303 "sintatico.y"
                { fprintf(arq_mep, "%s\n","DIVI"); }
#line 1583 "sintatico.tab.c"
    break;

  case 63: /* termo: termo S_VEZES fator  */
#line 305 "sintatico.y"
                { fprintf(arq_mep, "%s\n","MULT"); }
#line 1589 "sintatico.tab.c"
    break;

  case 64: /* termo: termo S_AND fator  */
#line 307 "sintatico.y"
                { fprintf(arq_mep, "%s\n","CONJ"); }
#line 1595 "sintatico.tab.c"
    break;

  case 66: /* fator: S_IDENTIF  */
#line 314 "sintatico.y"
                { 
	  		POS_SIMB = busca_simbolo(lexema);

	  		if(POS_SIMB == -1){
	  		  printf("Variavel [%s] nao declarada!",lexema);
	  		}
	  		else{
	  		  STIPO = TSIMB[POS_SIMB].tipo;
	  		  fprintf(arq_mep, "%s %s %d\n", "CRVL", "", TSIMB[POS_SIMB].endereco);  		
	  		}  
	  	}
#line 1611 "sintatico.tab.c"
    break;

  case 67: /* fator: S_NUMERO  */
#line 327 "sintatico.y"
                { STIPO = 'i'; fprintf(arq_mep, "%s %s %s\n","CRCT", "", lexema); }
#line 1617 "sintatico.tab.c"
    break;

  case 70: /* fator: S_MENOS fator  */
#line 331 "sintatico.y"
                { fprintf(arq_mep, "%s\n","INVR"); }
#line 1623 "sintatico.tab.c"
    break;

  case 71: /* fator: S_NOT fator  */
#line 333 "sintatico.y"
                { fprintf(arq_mep, "%s\n","NEGA"); }
#line 1629 "sintatico.tab.c"
    break;


#line 1633 "sintatico.tab.c"

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

#line 336 "sintatico.y"



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
		printf("Não consigo abrir o arquivo [%s]\n",temp);
		exit(1);
	}
	
	strcpy(temp,argv[1]);
	strcat(temp,".mep");
	arq_mep = fopen(temp,"w");
	if(arq_mep==NULL){
	printf("Erro!\n");
		printf("Não consigo abrir o arquivo [%s]\n",temp);
		exit(1);
	
	}
	
	if(!yyparse()){
		printf("\nPrograma CORRETO!");
		printf("\nNumeros de linhas compiladas: %d\n\n", numero_da_linha);
	}
	else{
		printf("Nao foi possível compilar!.\n");
	}
}
