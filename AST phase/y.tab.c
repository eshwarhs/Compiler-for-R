/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "code.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int valid=1;
int yylex();	
extern char* yytext;
typedef struct Abstract_syntax_tree
{
    char *name;
    struct Abstract_syntax_tree *left;
    struct Abstract_syntax_tree *right;
}node;
node* buildTree(char *,node *,node *);
void printTree(node *);
int yyerror(const char *s);
extern int yylineno;
extern char* yytext;
char varname[20];
int flag=0;
int stat_c=1;
char sc[20];
#define YYSTYPE struct Abstract_syntax_tree *

#line 91 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_LIBRARY = 258,
    T_NL = 259,
    T_PRINT = 260,
    T_WHILE = 261,
    T_IF = 262,
    T_IN = 263,
    T_ELSE = 264,
    T_BREAK = 265,
    T_REPEAT = 266,
    T_BY = 267,
    T_LENGTHOUT = 268,
    T_PASTEO = 269,
    T_TRUE = 270,
    T_FALSE = 271,
    T_MOD = 272,
    T_MMOD = 273,
    T_NUM = 274,
    T_STR = 275,
    T_ID = 276,
    T_COPEN = 277,
    T_SEQOPEN = 278,
    T_CO = 279,
    T_CC = 280,
    T_ADD = 281,
    T_SUB = 282,
    T_MUL = 283,
    T_DIV = 284,
    T_GT = 285,
    T_LT = 286,
    T_EQ = 287,
    T_AND = 288,
    T_OR = 289,
    T_LE = 290,
    T_GE = 291,
    T_EE = 292,
    T_NE = 293,
    T_RA = 294,
    T_LA = 295
  };
#endif
/* Tokens.  */
#define T_LIBRARY 258
#define T_NL 259
#define T_PRINT 260
#define T_WHILE 261
#define T_IF 262
#define T_IN 263
#define T_ELSE 264
#define T_BREAK 265
#define T_REPEAT 266
#define T_BY 267
#define T_LENGTHOUT 268
#define T_PASTEO 269
#define T_TRUE 270
#define T_FALSE 271
#define T_MOD 272
#define T_MMOD 273
#define T_NUM 274
#define T_STR 275
#define T_ID 276
#define T_COPEN 277
#define T_SEQOPEN 278
#define T_CO 279
#define T_CC 280
#define T_ADD 281
#define T_SUB 282
#define T_MUL 283
#define T_DIV 284
#define T_GT 285
#define T_LT 286
#define T_EQ 287
#define T_AND 288
#define T_OR 289
#define T_LE 290
#define T_GE 291
#define T_EE 292
#define T_NE 293
#define T_RA 294
#define T_LA 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 222 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   229

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      35,    42,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
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
      37,    38,    39,    40,    41,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    72,    76,    79,    83,    86,    87,    91,    92,
      92,    95,    96,    97,   100,   101,   102,   103,   106,   107,
     108,   111,   112,   113,   116,   117,   118,   121,   122,   123,
     124,   127,   128,   129,   130,   133,   134,   135,   136,   137,
     138,   141,   142,   143,   146,   147,   151,   152,   153,   154,
     155,   158,   162,   163,   164,   166,   167,   170,   173,   174,
     177,   180
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_LIBRARY", "T_NL", "T_PRINT",
  "T_WHILE", "T_IF", "T_IN", "T_ELSE", "T_BREAK", "T_REPEAT", "T_BY",
  "T_LENGTHOUT", "T_PASTEO", "T_TRUE", "T_FALSE", "T_MOD", "T_MMOD",
  "T_NUM", "T_STR", "T_ID", "T_COPEN", "T_SEQOPEN", "T_CO", "T_CC",
  "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_GT", "T_LT", "T_EQ", "T_AND",
  "T_OR", "'<'", "'>'", "T_LE", "T_GE", "T_EE", "T_NE", "T_RA", "'='",
  "T_LA", "'('", "')'", "'['", "']'", "','", "$accept", "Q", "S", "WHILE",
  "REPEAT", "BREAK", "IF", "NIF", "E", "@1", "EXP", "COND", "K", "L", "M",
  "O", "INDEX", "RELOP", "ASSIGNOP", "LOGICOP", "ITEM", "PASTE", "PASTEIN",
  "N", "NUM", "BOOL", "STR", "ID", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    60,    62,   290,   291,   292,
     293,   294,    61,   295,    40,    41,    91,    93,    44
};
# endif

#define YYPACT_NINF -89

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-89)))

#define YYTABLE_NINF -12

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      36,    12,   -24,    27,    27,    40,    27,   -89,   -89,    27,
     -12,    35,   -89,   164,   164,   164,   164,   164,    55,   -10,
       6,   -89,   -89,    75,   164,   147,   -89,    14,    19,   -89,
      32,   185,     7,    33,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -12,   -12,   -89,   -89,   -89,   -89,   -89,   -89,   -12,
     -12,   -12,   -12,   -12,   -89,   -89,   -89,   -11,   -12,   -89,
      21,   -89,   -89,   -89,    42,   -89,   -89,   -89,   -89,   -89,
      27,    27,    27,    66,   -89,   -10,   -10,    -1,     6,     6,
     -89,   -89,    49,    51,    57,    13,    28,    99,   -12,   -12,
     185,   106,   -89,   -89,   -11,   -11,   -89,    67,    63,    69,
     164,    27,   187,    75,    27,    94,   164,   -89,   -89,   -89,
      28,    28,   -89,    78,   -89,   -89,   -12,   -12,   -12,    80,
     122,   -89,   -89,   -89,    27,     1,     1,     1,    27,   -89,
     103,   109,    27,    27,   185,   -89,   185,   110,   115,   137,
     140,   -89,   136,    27,   -89,    -3,    27,    27,   104,   185,
      27,   124,   -12,   151,    27,   -89,   112,   -89,    27,   127,
      27,   185,   133,   156,   136,   -89
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    66,    66,     0,    66,    67,    71,    66,
       0,     0,     2,     0,     0,     0,     0,     0,     0,    30,
      33,    36,    38,    37,     0,     0,    65,     0,     0,    14,
       0,     0,     0,    37,     1,     3,     5,     6,     4,     7,
      23,     0,     0,    46,    45,    48,    49,    47,    50,     0,
       0,     0,     0,     0,    51,    53,    52,     0,     0,    10,
       0,    68,    69,    70,     0,    59,    56,    57,    58,    60,
      66,    66,    66,     0,    39,    28,    29,     0,    31,    32,
      34,    35,     0,    43,    44,     0,    64,     0,     0,     0,
       0,     0,    21,    40,     0,     0,    22,     0,     0,     0,
       0,    66,    27,    37,    66,     0,     0,    41,    42,    61,
      64,    64,     8,     0,    54,    55,     0,     0,     0,     0,
       0,     9,    62,    63,    66,    24,    26,    25,    66,    13,
       0,     0,    66,    66,     0,    15,     0,     0,     0,     0,
       0,    12,    16,    66,    17,     0,    66,    66,     0,     0,
      66,     0,     0,     0,    66,    19,     0,    20,    66,     0,
      66,     0,     0,     0,     0,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,    -2,   -89,   -89,   -89,   -89,   -89,    15,   -89,
     -89,   -88,    64,     9,     3,    31,    -5,    71,    73,   -89,
     -89,   -89,    -9,    -4,   -19,   -89,   152,    20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    16,   135,   144,   157,
      17,   101,    18,    19,    20,    21,    82,    49,    58,   117,
      64,    65,    97,    27,    22,    67,    98,    23
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,   104,    30,    92,   146,    31,    66,     7,     7,     8,
       8,    35,    36,    37,    38,    39,    24,    96,    50,    51,
      25,   147,    59,    52,    53,    41,    42,    41,    42,    73,
      33,    26,    10,    41,    42,    34,   -11,     1,    83,    41,
      42,     2,     3,     4,    29,    69,     5,     6,    63,     8,
      75,    76,    74,    78,    79,     7,    72,     8,    70,    40,
       9,    33,    33,    71,   154,    86,    88,    89,    90,    33,
      33,    33,    33,    33,    32,    83,    83,    84,    33,    57,
      10,    41,    42,    80,    81,    43,    44,    87,   105,   107,
     108,    91,    45,    46,    47,    48,    93,   113,   112,    94,
     119,   122,   123,   100,   121,    95,    99,    54,   103,   103,
     106,   110,   109,    77,    84,    84,    55,   111,    56,   120,
     130,    57,    85,   124,   131,   128,   129,   132,   134,   136,
      99,    99,   137,   133,   138,   139,    33,    33,    33,   145,
     140,   141,   148,   149,   142,   143,   152,   151,   150,   153,
     156,   160,   102,   102,   159,   155,   161,   158,   163,   162,
     164,    60,    61,    62,   -11,     1,     7,    63,     8,     2,
       3,     4,   103,   116,     5,     6,   118,    68,     0,   165,
     125,   126,   127,     7,     0,     8,     1,     0,     9,   -11,
       2,     3,     4,     0,     0,     5,     6,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     8,     0,    10,     9,
     -11,     0,     0,    41,    42,     0,   102,    43,    44,     0,
     114,   115,     0,     0,    45,    46,    47,    48,     0,    10
};

static const yytype_int16 yycheck[] =
{
       4,    89,     6,     4,     7,     9,    25,    19,    19,    21,
      21,    13,    14,    15,    16,    17,     4,     4,    28,    29,
      44,    24,    24,    17,    18,    26,    27,    26,    27,    31,
      10,     4,    44,    26,    27,     0,     0,     1,    57,    26,
      27,     5,     6,     7,     4,    25,    10,    11,    20,    21,
      41,    42,    45,    50,    51,    19,    24,    21,    44,     4,
      24,    41,    42,    44,   152,    44,    70,    71,    72,    49,
      50,    51,    52,    53,    10,    94,    95,    57,    58,    46,
      44,    26,    27,    52,    53,    30,    31,    45,    90,    94,
      95,    25,    37,    38,    39,    40,    47,   101,   100,    48,
     104,   110,   111,     4,   106,    48,    86,    32,    88,    89,
       4,    48,    45,    49,    94,    95,    41,    48,    43,    25,
     124,    46,    58,    45,   128,    45,     4,    24,   132,   133,
     110,   111,   134,    24,   136,    25,   116,   117,   118,   143,
      25,     4,   146,   147,     4,     9,   150,   149,    44,    25,
     154,    24,    88,    89,   158,     4,   160,    45,    25,   161,
       4,    14,    15,    16,     0,     1,    19,    20,    21,     5,
       6,     7,   152,   102,    10,    11,   103,    25,    -1,   164,
     116,   117,   118,    19,    -1,    21,     1,    -1,    24,    25,
       5,     6,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    44,    24,
      25,    -1,    -1,    26,    27,    -1,   152,    30,    31,    -1,
      33,    34,    -1,    -1,    37,    38,    39,    40,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     6,     7,    10,    11,    19,    21,    24,
      44,    50,    51,    52,    53,    54,    55,    59,    61,    62,
      63,    64,    73,    76,     4,    44,     4,    72,    72,     4,
      72,    72,    61,    76,     0,    51,    51,    51,    51,    51,
       4,    26,    27,    30,    31,    37,    38,    39,    40,    66,
      28,    29,    17,    18,    32,    41,    43,    46,    67,    51,
      14,    15,    16,    20,    69,    70,    73,    74,    75,    76,
      44,    44,    24,    51,    45,    62,    62,    61,    63,    63,
      64,    64,    65,    73,    76,    61,    44,    45,    72,    72,
      72,    25,     4,    47,    48,    48,     4,    71,    75,    76,
       4,    60,    61,    76,    60,    51,     4,    65,    65,    45,
      48,    48,    51,    72,    33,    34,    66,    68,    67,    72,
      25,    51,    71,    71,    45,    61,    61,    61,    45,     4,
      72,    72,    24,    24,    72,    56,    72,    51,    51,    25,
      25,     4,     4,     9,    57,    72,     7,    24,    72,    72,
      44,    51,    72,    25,    60,     4,    72,    58,    45,    72,
      24,    72,    51,    25,     4,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    52,    53,    54,    55,    56,    56,    57,    58,
      57,    59,    59,    59,    60,    60,    60,    60,    61,    61,
      61,    62,    62,    62,    63,    63,    63,    64,    64,    64,
      64,    65,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    67,    67,    67,    68,    68,    69,    69,    69,    69,
      69,    70,    71,    71,    71,    72,    72,    73,    74,    74,
      75,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     2,     6,     6,
       3,     0,    13,     7,     2,    10,     4,     5,    16,     0,
       8,     4,     4,     2,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     1,     1,     3,
       4,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     3,     0,     1,     0,     1,     1,     1,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 58 "code.y" /* yacc.c:1646  */
    {printf("\n\t\tAbstract Syntax Tree\n\n");printTree1((yyvsp[0])); printf("\n\n\t\tAbstract Syntax Tree v2\n\n"); printTree((yyvsp[0]));}
#line 1420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 61 "code.y" /* yacc.c:1646  */
    {sprintf(sc,"Statement%d",stat_c++); (yyval) = buildTree(sc,(yyvsp[-1]),(yyvsp[0]));}
#line 1426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 62 "code.y" /* yacc.c:1646  */
    {sprintf(sc,"Statement%d",stat_c++); (yyval) = buildTree(sc,(yyvsp[-1]),(yyvsp[0]));}
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 63 "code.y" /* yacc.c:1646  */
    {sprintf(sc,"Statement%d",stat_c++); (yyval) = buildTree(sc,(yyvsp[-1]),(yyvsp[0]));}
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 64 "code.y" /* yacc.c:1646  */
    {sprintf(sc,"Statement%d",stat_c++); (yyval) = buildTree(sc,(yyvsp[-1]),(yyvsp[0]));}
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 65 "code.y" /* yacc.c:1646  */
    {sprintf(sc,"Statement%d",stat_c++); (yyval) = buildTree(sc,(yyvsp[-1]),(yyvsp[0]));}
#line 1450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 66 "code.y" /* yacc.c:1646  */
    {sprintf(sc,"Statement%d",stat_c++); (yyval) = buildTree(sc,(yyvsp[-3]),(yyvsp[0]));}
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 67 "code.y" /* yacc.c:1646  */
    {sprintf(sc,"Statement%d",stat_c++); (yyval) = buildTree(sc,(yyvsp[-3]),(yyvsp[0]));}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 68 "code.y" /* yacc.c:1646  */
    {sprintf(sc,"Statement%d",stat_c++); (yyval) = buildTree(sc,(yyvsp[-2]),(yyvsp[0]));}
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 69 "code.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 72 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("while",(yyvsp[-8]),(yyvsp[-2]));}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 76 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("repeat",(yyvsp[-2]),NULL);}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 79 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("break",NULL,NULL);}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 83 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("if",(yyvsp[-5]),(yyvsp[0]));}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 86 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("in if",(yyvsp[-2]),NULL);}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 87 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("inif",(yyvsp[-3]),(yyvsp[0]));}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 91 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("elseif",buildTree("if",(yyvsp[-9]),(yyvsp[-3])),(yyvsp[0]));}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 92 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("in if",(yyvsp[-5]),NULL);}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 92 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("else",(yyvsp[-3]),NULL);}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 95 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree((yyvsp[-2]),(yyvsp[-3]),(yyvsp[-1]));}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 96 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree((yyvsp[-2]),(yyvsp[-3]),(yyvsp[-1]));}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 97 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 100 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree((yyvsp[-1]),(yyvsp[-2]),(yyvsp[0]));}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 101 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree((yyvsp[-1]),(yyvsp[-2]),(yyvsp[0]));}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 102 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree((yyvsp[-1]),(yyvsp[-2]),(yyvsp[0]));}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 103 "code.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 106 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("+",(yyvsp[-2]),(yyvsp[0]));}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 107 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("-",(yyvsp[-2]),(yyvsp[0]));}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 108 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 111 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("*",(yyvsp[-2]),(yyvsp[0]));}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 112 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("/",(yyvsp[-2]),(yyvsp[0]));}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 113 "code.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 116 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("%",(yyvsp[-2]),(yyvsp[0]));}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 117 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("mmod",(yyvsp[-2]),(yyvsp[0]));}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 118 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 121 "code.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 122 "code.y" /* yacc.c:1646  */
    {(yyval) =(yyvsp[0]);}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 123 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("exp",(yyvsp[-1]),NULL);}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 124 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("array",(yyvsp[-3]),(yyvsp[-1]));}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 127 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree(",",(yyvsp[-2]),(yyvsp[0]));}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 128 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree(",",(yyvsp[-2]),(yyvsp[0]));}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 129 "code.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 130 "code.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 133 "code.y" /* yacc.c:1646  */
    { (yyval) = "<";}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 134 "code.y" /* yacc.c:1646  */
    { (yyval) = ">";}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 135 "code.y" /* yacc.c:1646  */
    { (yyval) = "==";}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 136 "code.y" /* yacc.c:1646  */
    { (yyval) = "<=";}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 137 "code.y" /* yacc.c:1646  */
    { (yyval) = ">=";}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 138 "code.y" /* yacc.c:1646  */
    { (yyval) = "!=";}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 141 "code.y" /* yacc.c:1646  */
    {(yyval)="=";}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 142 "code.y" /* yacc.c:1646  */
    {(yyval)="=";}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 143 "code.y" /* yacc.c:1646  */
    {(yyval)="=";}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 146 "code.y" /* yacc.c:1646  */
    {(yyval)="&&";}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 147 "code.y" /* yacc.c:1646  */
    {(yyval)="||";}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 151 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 152 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 153 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 154 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 155 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 158 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("paste0",(yyvsp[-1]),NULL);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 162 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree("paste0",(yyvsp[0]),NULL);}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 163 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree(",",(yyvsp[-2]),(yyvsp[0]));}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 164 "code.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 170 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree(yytext,NULL,NULL);}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 173 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree(yytext,NULL,NULL);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 174 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree(yytext,NULL,NULL);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 177 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree(yytext,NULL,NULL);}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 180 "code.y" /* yacc.c:1646  */
    {(yyval) = buildTree(yytext,NULL,NULL);}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1826 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 183 "code.y" /* yacc.c:1906  */


#include <ctype.h>
int yyerror(const char *s)
{
  	extern int yylineno;
  	valid =0;
	//display();
  	printf("\nLine no: %d \n The error is: %s\n\n",yylineno-1,s);
}

int main()
{
	yyparse();
	if(valid)
	{
  		printf("Parsing successful\n\n");
		
	}
	else
	{
  		printf("Parsing unsuccessful\n\n");
		
	}
	
	return 0;
}        

node* buildTree(char *op, node *left, node *right)
{
	node *new = (node*)malloc(sizeof(node));
	char *newstr = (char *)malloc(strlen(op)+1);
	strcpy(newstr,op);
	new->left = left;
	new->right = right;
	new->name = newstr;
    /*
    printf("root : %s\n", new->name);
    if(!new->left)
        printf("left node of %s is null\n", new->name);
    else
        printf("left node of %s is %s\n", new->name, new->left->name);
    if(!new->right)
        printf("right node of %s is null\n", new->name);
    else
        printf("right node of %s is %s\n", new->name, new->right->name);
    */
	return new;
}

void printTree(node *tree)
{
	if(tree!=NULL && (tree->left!=NULL || tree->right!=NULL))
	{
		
		printf("%s\n",tree->name);
		if(tree->left!=NULL)
			printf("%s\t", tree->left->name);
		else
			printf("NULL\t");

		if(tree->right!=NULL)
			printf("%s\n\n", tree->right->name);
		else
			printf("NULL\n\n");

		printTree(tree->left);
		printTree(tree->right);
		
	}
}


void printTree1(node *tree)
{
	if(tree->left || tree->right)
		printf("(");
	printf(" %s ",tree->name);
	if(tree->left)
		printTree1(tree->left);
	if(tree->right)
		printTree1(tree->right);
	if(tree->left || tree->right)
		printf(")");
}

  
