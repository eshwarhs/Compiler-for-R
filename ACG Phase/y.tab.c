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

int yyerror(const char *s);
int tops=-1;
void display();
extern int yylineno;
extern char* yytext;
char pushvar[20];
int lnum=0;
char temp[2] = "t";
char temp2[4]="t";
int temp_i = 0;
char tmp_i[3];
int W[10000];
int A[10000];
int R[10000];
int IFS[10000];
int if_top=-1;
int while_top=-1;
int rep_top=-1;
int i_top=-1;
int l_while = 0;
int ltop = 0;
void repeat1();
void repeat2();
void repeat3(); 
void ifelse4();
void ifelse3();
void ifelse2();
void ifelse1();
void while3();
void while2();
void while1();
void codegen_assign();
void codegen();
void optimize_code();
void intermediate_code();
void push(char *string);
int label[20];
int quadnum = 0;    
char stk[100][100];
int change=0;
int check(char *string);
int kk=0;



#line 120 "y.tab.c" /* yacc.c:339  */

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
    T_BREAK = 263,
    T_REPEAT = 264,
    T_IN = 265,
    T_ELSE = 266,
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
#define T_BREAK 263
#define T_REPEAT 264
#define T_IN 265
#define T_ELSE 266
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

#line 251 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

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
       0,    87,    87,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   101,   101,   101,   101,   104,   104,   104,   107,
     107,   111,   111,   114,   115,   115,   119,   119,   119,   120,
     120,   123,   124,   126,   126,   127,   127,   128,   131,   132,
     133,   134,   137,   137,   138,   138,   139,   142,   142,   143,
     143,   144,   148,   149,   150,   151,   154,   155,   156,   157,
     160,   161,   162,   163,   164,   165,   168,   169,   170,   173,
     174,   178,   179,   180,   181,   182,   185,   189,   190,   191,
     193,   194,   198,   201,   202,   205,   209
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_LIBRARY", "T_NL", "T_PRINT",
  "T_WHILE", "T_IF", "T_BREAK", "T_REPEAT", "T_IN", "T_ELSE", "T_BY",
  "T_LENGTHOUT", "T_PASTEO", "T_TRUE", "T_FALSE", "T_MOD", "T_MMOD",
  "T_NUM", "T_STR", "T_ID", "T_COPEN", "T_SEQOPEN", "T_CO", "T_CC",
  "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_GT", "T_LT", "T_EQ", "T_AND",
  "T_OR", "'<'", "'>'", "T_LE", "T_GE", "T_EE", "T_NE", "T_RA", "'='",
  "T_LA", "'('", "')'", "'['", "']'", "','", "$accept", "Q", "S", "WHILE",
  "$@1", "$@2", "$@3", "REPEAT", "$@4", "$@5", "BREAK", "$@6", "IF", "$@7",
  "NIF", "$@8", "E", "$@9", "$@10", "$@11", "EIF", "EXP", "$@12", "$@13",
  "COND", "K", "@14", "@15", "L", "@16", "@17", "O", "INDEX", "RELOP",
  "ASSIGNOP", "LOGICOP", "ITEM", "PASTE", "PASTEIN", "N", "NUM", "BOOL",
  "STR", "ID", YY_NULLPTR
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

#define YYPACT_NINF -100

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-100)))

#define YYTABLE_NINF -27

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      86,    17,   -41,    38,    38,  -100,  -100,  -100,  -100,    38,
     -15,    44,  -100,    32,    32,    32,    32,    32,   198,   -13,
    -100,  -100,     2,    32,     3,  -100,  -100,     8,    42,    38,
     182,   -19,    12,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,   -15,  -100,
    -100,  -100,  -100,  -100,     9,   -15,  -100,    11,  -100,  -100,
    -100,    24,  -100,  -100,  -100,  -100,  -100,    26,    38,  -100,
      49,    50,  -100,   -15,   -15,    23,   -15,   -15,    27,    29,
      30,    23,    15,    75,    38,   -15,    38,    77,   -13,   -13,
      79,  -100,  -100,  -100,     9,     9,    81,    43,    41,    48,
      32,   -15,    38,   213,     2,   182,    32,  -100,  -100,  -100,
    -100,  -100,    15,    15,  -100,    38,    45,  -100,  -100,   -15,
     -15,   -15,    74,  -100,  -100,  -100,    56,  -100,    23,    23,
      23,  -100,  -100,    38,   100,    38,    82,  -100,    84,    38,
      38,  -100,   182,   182,    87,    88,   110,  -100,   104,   112,
     106,  -100,   114,  -100,   115,    38,    38,   101,    80,    38,
      38,   182,   -15,   102,    38,   122,    83,  -100,  -100,    38,
     108,    38,   182,   109,   129,   106,  -100,  -100
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    81,    81,    19,    16,    82,    86,    81,
       0,     0,     2,     0,     0,     0,     0,     0,     0,    46,
      51,    53,    52,     0,     0,    80,    12,     0,     0,    81,
       0,     0,    52,     1,     3,     5,     6,     4,     7,    37,
      42,    44,    61,    60,    63,    64,    62,    65,     0,    47,
      49,    66,    68,    67,     0,     0,    10,     0,    83,    84,
      85,     0,    74,    71,    72,    73,    75,     0,    81,    20,
       0,     0,    54,     0,     0,    33,     0,     0,     0,    58,
      59,    35,    79,     0,    81,     0,    81,     0,    43,    45,
       0,    48,    50,    55,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    41,    52,     0,     0,    34,    56,    57,
      36,    76,    79,    79,     8,    81,     0,    69,    70,     0,
       0,     0,     0,     9,    77,    78,     0,    21,    38,    40,
      39,    17,    13,    81,     0,    81,     0,    18,     0,    81,
      81,    22,     0,     0,     0,     0,     0,    14,    23,     0,
       0,    15,    29,    25,     0,    81,    81,     0,     0,    81,
      81,     0,     0,     0,    81,     0,     0,    30,    27,    81,
       0,    81,     0,     0,     0,    32,    31,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -100,  -100,    -3,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,   -38,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,   -99,    -1,  -100,  -100,   -14,  -100,
    -100,   -11,   -33,    35,    37,  -100,  -100,  -100,   -45,    -4,
     -23,  -100,   118,    99
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    67,   135,   149,    14,    29,   134,
      15,    28,    16,   133,   141,   150,   153,   154,   169,   155,
     177,    17,    90,    96,   102,    18,    73,    74,    19,    76,
      77,    20,    78,    48,    55,   120,    61,    62,    97,    26,
      21,    64,    98,    22
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    63,   115,    24,     7,    30,     8,    40,    41,    31,
      34,    35,    36,    37,    38,    49,    50,    57,    58,    59,
      56,    23,     7,    60,     8,    70,    72,    71,     7,    10,
       8,    79,   -11,     1,    51,    60,     8,     2,     3,     4,
       5,     6,    25,    52,    33,    53,    69,    75,    54,    40,
      41,     7,    68,     8,    81,    82,     9,   -11,    54,    88,
      89,   108,   109,   164,    85,    91,    92,   124,   125,    83,
      84,    79,    79,    86,    93,    87,    10,    94,    95,   100,
     101,   106,   105,   107,   103,   110,   -11,     1,   111,   112,
     127,     2,     3,     4,     5,     6,   113,   114,   116,   131,
     103,   132,   122,   123,   137,     7,   139,     8,   140,    32,
       9,   126,   146,   147,   148,   -24,   151,   152,   128,   129,
     130,   -26,   156,    66,   160,   159,   167,   165,   168,   136,
      10,   138,   171,   175,   174,   142,   143,   176,   119,   144,
     145,   121,    65,     0,     0,     0,     0,    32,     0,     0,
       0,   157,   158,    80,    32,   161,   162,     0,   163,     0,
     166,   103,     0,     0,     0,   170,     0,   172,     0,   173,
       0,     0,    32,    32,     0,    32,    32,     0,     0,     0,
       0,    99,     0,     1,   104,     0,     0,     2,     3,     4,
       5,     6,     0,    80,    80,     0,     0,     0,     0,     0,
     104,     7,    39,     8,     0,     0,     9,   -11,     0,     0,
       0,    99,    99,     0,     0,     0,     0,     0,    32,    32,
      32,     0,     0,     0,    40,    41,    10,     0,    42,    43,
       0,     0,     0,     0,     0,    44,    45,    46,    47,    40,
      41,     0,     0,    42,    43,     0,   117,   118,     0,     0,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,   104
};

static const yytype_int16 yycheck[] =
{
       4,    24,   101,    44,    19,     9,    21,    26,    27,    10,
      13,    14,    15,    16,    17,    28,    29,    14,    15,    16,
      23,     4,    19,    20,    21,    29,    45,    30,    19,    44,
      21,    54,     0,     1,    32,    20,    21,     5,     6,     7,
       8,     9,     4,    41,     0,    43,     4,    48,    46,    26,
      27,    19,    44,    21,    55,    44,    24,    25,    46,    73,
      74,    94,    95,   162,    68,    76,    77,   112,   113,    45,
      44,    94,    95,    24,    47,    25,    44,    48,    48,     4,
      84,     4,    86,     4,    85,     4,     0,     1,    45,    48,
      45,     5,     6,     7,     8,     9,    48,   100,   102,    25,
     101,    45,   105,   106,     4,    19,    24,    21,    24,    10,
      24,   115,    25,    25,     4,    11,     4,    11,   119,   120,
     121,     7,     7,    24,    44,    24,     4,    25,    45,   133,
      44,   135,    24,     4,    25,   139,   140,   175,   103,   142,
     143,   104,    24,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,   155,   156,    54,    55,   159,   160,    -1,   161,    -1,
     164,   162,    -1,    -1,    -1,   169,    -1,   171,    -1,   172,
      -1,    -1,    73,    74,    -1,    76,    77,    -1,    -1,    -1,
      -1,    82,    -1,     1,    85,    -1,    -1,     5,     6,     7,
       8,     9,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
     101,    19,     4,    21,    -1,    -1,    24,    25,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,    26,    27,    44,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    26,
      27,    -1,    -1,    30,    31,    -1,    33,    34,    -1,    -1,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     6,     7,     8,     9,    19,    21,    24,
      44,    50,    51,    52,    56,    59,    61,    70,    74,    77,
      80,    89,    92,     4,    44,     4,    88,    88,    60,    57,
      88,    74,    92,     0,    51,    51,    51,    51,    51,     4,
      26,    27,    30,    31,    37,    38,    39,    40,    82,    28,
      29,    32,    41,    43,    46,    83,    51,    14,    15,    16,
      20,    85,    86,    89,    90,    91,    92,    53,    44,     4,
      88,    51,    45,    75,    76,    74,    78,    79,    81,    89,
      92,    74,    44,    45,    44,    88,    24,    25,    77,    77,
      71,    80,    80,    47,    48,    48,    72,    87,    91,    92,
       4,    88,    73,    74,    92,    88,     4,     4,    81,    81,
       4,    45,    48,    48,    51,    73,    88,    33,    34,    82,
      84,    83,    51,    51,    87,    87,    88,    45,    74,    74,
      74,    25,    45,    62,    58,    54,    88,     4,    88,    24,
      24,    63,    88,    88,    51,    51,    25,    25,     4,    55,
      64,     4,    11,    65,    66,    68,     7,    88,    88,    24,
      44,    88,    88,    51,    73,    25,    88,     4,    45,    67,
      88,    24,    88,    51,    25,     4,    65,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    53,    54,    55,    52,    57,    58,    56,    60,
      59,    62,    61,    63,    64,    63,    66,    67,    65,    68,
      65,    69,    69,    71,    70,    72,    70,    70,    73,    73,
      73,    73,    75,    74,    76,    74,    74,    78,    77,    79,
      77,    77,    80,    80,    80,    80,    81,    81,    81,    81,
      82,    82,    82,    82,    82,    82,    83,    83,    83,    84,
      84,    85,    85,    85,    85,    85,    86,    87,    87,    87,
      88,    88,    89,    90,    90,    91,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     2,     6,     6,
       3,     0,     0,     0,     0,    16,     0,     0,     9,     0,
       3,     0,    11,     4,     0,     6,     0,     0,    17,     0,
       8,     1,     0,     0,     5,     0,     5,     2,     3,     3,
       3,     1,     0,     4,     0,     4,     1,     0,     4,     0,
       4,     1,     1,     1,     3,     4,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     3,     0,
       1,     0,     1,     1,     1,     1,     1
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
        case 12:
#line 101 "code.y" /* yacc.c:1646  */
    {while1();}
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 101 "code.y" /* yacc.c:1646  */
    {while2();}
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 101 "code.y" /* yacc.c:1646  */
    {while3();}
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 104 "code.y" /* yacc.c:1646  */
    {repeat1();}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 104 "code.y" /* yacc.c:1646  */
    {repeat2();}
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 107 "code.y" /* yacc.c:1646  */
    {repeat3();}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 111 "code.y" /* yacc.c:1646  */
    {ifelse1();}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 114 "code.y" /* yacc.c:1646  */
    {ifelse4();}
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 115 "code.y" /* yacc.c:1646  */
    {IFS[++i_top]=lnum;lnum++;}
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 115 "code.y" /* yacc.c:1646  */
    {ifelse3();}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 119 "code.y" /* yacc.c:1646  */
    {ifelse2();}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 119 "code.y" /* yacc.c:1646  */
    {ifelse1();}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 120 "code.y" /* yacc.c:1646  */
    {ifelse2();}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 124 "code.y" /* yacc.c:1646  */
    {ifelse4();}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 126 "code.y" /* yacc.c:1646  */
    {codegen();}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 127 "code.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 131 "code.y" /* yacc.c:1646  */
    {codegen();}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 132 "code.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 133 "code.y" /* yacc.c:1646  */
    {codegen();}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 137 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"+");push(pushvar);}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 137 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-3])+(yyvsp[-1]);codegen();}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"-");push(pushvar);}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 138 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-3])-(yyvsp[-1]);codegen();}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 139 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 142 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"*");push(pushvar);}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 142 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-3])*(yyvsp[-1]);codegen();}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 143 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"/");push(pushvar);}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 143 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-3])/(yyvsp[-1]);codegen();}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 144 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 149 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 160 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"<");push(pushvar);}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 161 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,">");push(pushvar);}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 162 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"==");push(pushvar);}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 163 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"<=");push(pushvar);}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 164 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,">=");push(pushvar);}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 165 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"!=");push(pushvar);}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 168 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"=");push(pushvar);}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 169 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"<-");push(pushvar);}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 170 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"->");push(pushvar);}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 173 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"&&");push(pushvar);}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 174 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"||");push(pushvar);}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 198 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,yytext);push(pushvar);}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 209 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,yytext);push(pushvar);}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1725 "y.tab.c" /* yacc.c:1646  */
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
#line 212 "code.y" /* yacc.c:1906  */


#include <ctype.h>
int yyerror(const char *s)
{
    extern int yylineno;
    valid =0;
    //display();
    //printf("\nLine no: %d \n The error is: %s\n\n",yylineno-1,s);
}

typedef struct quadruples{
        int valid;
        char *op;
        char *arg1;
        char *arg2;
        char *res;
    }alls;

alls q[100];


void display()
{
    //printf("\n\nQuadraple Table\n\n");
    //printf("\tResult:\t\t Op:\t\t Arg1:\t\t Arg2:\t\t \n");
    int count=0;
    for(int i=0;i<quadnum;i++)
    {
        if(q[i].valid)
        {
            count++;
            
        }
    }
    printf("%d\n",count);
    for(int i=0;i<quadnum;i++)
    {
        if(q[i].valid)
        {
            printf("%s \t\t %s \t\t %s \t\t %s \t\t \n",q[i].res,q[i].op,q[i].arg1,q[i].arg2);
        }
            
    }   
    
}

void push(char *string) {
    
    strcpy(stk[++tops], string);
}

void codegen()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    //printf("%s = %s %s %s\n",temp,stk[tops-2],stk[tops-1],stk[tops]);
    q[quadnum].op = (char*)malloc(sizeof(char)*strlen(stk[tops-1]));
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*strlen(stk[tops-2]));
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*strlen(stk[tops]));
    q[quadnum].res = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,stk[tops-1]);
    strcpy(q[quadnum].arg1,stk[tops-2]);
    strcpy(q[quadnum].arg2,stk[tops]);
    strcpy(q[quadnum].res,temp);
    quadnum++;
    tops-=2;
    strcpy(stk[tops],temp);

temp_i++;
}
void codegen_assign()
{
    //printf("%s = %s\n", stk[tops-2], stk[tops]);
    q[quadnum].op = (char*)malloc(sizeof(char));
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*strlen(stk[tops]));
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*strlen(stk[tops-2]));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op, "=");
    strcpy(q[quadnum].arg1, stk[tops]);
    strcpy(q[quadnum].arg2, "NULL");
    strcpy(q[quadnum].res, stk[tops-2]);
    quadnum++;
    char b[20];
        tops -= 2;
}

void ifelse1()
{
    
    strcpy(temp, "T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp, tmp_i);
    //printf("%s = not %s\n", temp, stk[tops]);
    q[quadnum].op = (char*)malloc(sizeof(char)*4);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*strlen(stk[tops]));
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op, "not");
    strcpy(q[quadnum].arg1, stk[tops]);
    strcpy(q[quadnum].arg2, "NULL");
    strcpy(q[quadnum].res, temp);
    quadnum++;

    //printf("if %s goto L%d\n", temp, lnum);
    q[quadnum].op = (char*)malloc(sizeof(char)*3);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op, "if");
    strcpy(q[quadnum].arg1, temp);
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d", lnum);
    char l[] = "L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
    temp_i++;
    label[++ltop] = lnum;
    A[++if_top]=lnum;
    lnum++;
}

void ifelse2()
{
    int x;
    
    x=label[ltop--];
    if_top--;
    int r=IFS[i_top];
    //printf("goto L%d\n",r);
    q[quadnum].op = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op, "goto");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char jug[10];
    sprintf(jug,"%d",r);
    char l[] = "L";
    strcpy(q[quadnum].res,strcat(l,jug));
    quadnum++;
    //printf("L%d: \n",x);
    q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(x+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[] = "L";
    strcpy(q[quadnum].res,strcat(l1,jug1));
    quadnum++;

}

void ifelse3()
{
    //printf("yaha phatt rahi hai\n");
    int y;
    y = IFS[i_top--];
   // printf("L%d: \n",y);
    //int mera=A[if_top--];
    //printf("L%d: \n",mera);
    q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(y+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",y);
    char l[] = "L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;

}

void ifelse4()
{
        int res=A[if_top--];
        ltop--;
        //printf("L%d:\n",res);
        q[quadnum].op = (char*)malloc(sizeof(char)*6);
            q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
            q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
            q[quadnum].res = (char*)malloc(sizeof(char)*(res+2));
                q[quadnum].valid=1;
            strcpy(q[quadnum].op,"Label");
                strcpy(q[quadnum].arg1, "NULL");
        strcpy(q[quadnum].arg2, "NULL");

            char jug1[10];
            sprintf(jug1,"%d",res);
            char l1[] = "L";
            strcpy(q[quadnum].res,strcat(l1,jug1));
            quadnum++;
        }


void while1()
{
    
   // printf("L%d: \n",lnum);
    
    q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",lnum);
    char l[] = "L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
    lnum++;
}

void repeat1()
{
    
    //printf("L%d: \n",lnum++);
    
    q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",lnum);
    char l[] = "L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
    R[++rep_top]=lnum;
    lnum++;
}


void while2()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    //printf("%s = not %s\n",temp,stk[tops]);
    q[quadnum].op = (char*)malloc(sizeof(char)*4);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*strlen(stk[tops]));
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"not");
    strcpy(q[quadnum].arg1,stk[tops]);
    strcpy(q[quadnum].arg2, "NULL");
    strcpy(q[quadnum].res,temp);
    quadnum++;
   // printf("if %s goto L%d\n",temp,lnum);
    W[++while_top]=lnum++;
    q[quadnum].op = (char*)malloc(sizeof(char)*3);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"if");
    strcpy(q[quadnum].arg1,temp);
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",W[while_top]);
    char l[]="L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
    temp_i++;
 }

void repeat2()
{
if(kk==1)
{
int p,y;
    p=R[rep_top];
    y=R[rep_top-1];

//printf("\tgoto L%d \n",y);
    q[quadnum].op = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(l_while+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"goto");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;

//printf("L%d :\n",p);
q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x1[10];
    sprintf(x1,"%d",p);
    char l1[]="L";
    strcpy(q[quadnum].res,strcat(l1,x1));
    quadnum++;
kk=0;
}
else
{
int p,y;
    y=R[rep_top];
    

//printf("\tgoto L%d \n",y);
    q[quadnum].op = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(l_while+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"goto");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;



}


    
    
}




void while3()
{
    //printf("%d hai l_while\n",l_while);
    int mera=W[while_top--]-1;
   // printf("goto L%d \n",mera);
    q[quadnum].op = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(l_while+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"goto");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",mera);
    char l[]="L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
    //printf("L%d: \n",mera+1);
lnum++;
    q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x1[10];
    sprintf(x1,"%d",mera+1);
    char l1[]="L";
    strcpy(q[quadnum].res,strcat(l1,x1));
    quadnum++;
}


void repeat3()
{
    //printf("goto L%d \n",lnum++);

    q[quadnum].op = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(l_while+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"goto");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",lnum);
    char l[]="L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
R[++rep_top]=lnum;
lnum++;     
kk=1;
}

void optimize_code()
{
    char *targ1,*targ2,*tres,*topr,*res2;
    //printf("\n\n");
    int i=0;
    for(i=0;i<quadnum;i++)
    {
        if((!(strcmp(q[i].arg2,"NULL")==0)) && (q[i].valid))
        {
            targ1=(char*)malloc(sizeof(char)*strlen(q[i].arg1));
            targ2=(char*)malloc(sizeof(char)*strlen(q[i].arg2));
            tres=(char*)malloc(sizeof(char)*strlen(q[i].res));
            topr=(char*)malloc(sizeof(char)*strlen(q[i].op));
            strcpy(targ1,q[i].arg1);
            strcpy(targ2,q[i].arg2);
            strcpy(tres,q[i].res);
            strcpy(topr,q[i].op);
            int p=i+1;
            while( p<quadnum && !((strcmp(q[p].res,tres)==0) || (strcmp(q[p].res,targ1)==0) || (strcmp(q[p].res,targ2)==0))  ) 
            {
                if( (strcmp(q[p].arg1,targ1)==0) && (strcmp(q[p].arg2,targ2)==0) && (strcmp(q[p].op,topr)==0) )
                {
                    q[p].valid=0;
                    change=1;
                    res2=(char*)malloc(sizeof(char)*strlen(q[p].res));
                    strcpy(res2,q[p].res);
                    int h=p+1;
                    while(h<quadnum && !(strcmp(q[h].res,res2)==0))
                    {
                        if(strcmp(q[h].arg1,res2)==0)
                        {
                            strcpy(q[h].arg1,tres);
                        }
                        if(strcmp(q[h].arg2,res2)==0)
                        {
                            strcpy(q[h].arg2,tres);
                        }
                        h=h+1;
                    }
                    if(h!=quadnum)
                    {
                        if(strcmp(q[h].arg1,res2)==0)
                        {
                            strcpy(q[h].arg1,tres);
                        }
                        if(strcmp(q[h].arg2,res2)==0)
                        {
                            strcpy(q[h].arg2,tres);
                        }       
                    }
                }
                p=p+1;
            }
            
        }
    }
    //printf("\n\n");
    if(change==1)
    {
        //printf("Duplicate code optimization is:\n\n");
        //intermediate_code();
    }
    else
    {
        //printf("No duplicate optimization \n\n\n");
    }



    //printf("\n\n");
    i=0;
    change=0;
    for(i=0;i<quadnum;i++)
    {
        if((q[i].valid)&& check(q[i].arg1) && check(q[i].arg2))
        {
            if(strcmp("+",q[i].op)==0 || strcmp("-",q[i].op)==0 || strcmp("/",q[i].op)==0 || strcmp("*",q[i].op)==0)
            {
                
                change=1;
                int x,y,res;
                q[i].valid=0;
                sscanf(q[i].arg1,"%d",&x);
                sscanf(q[i].arg2,"%d",&y);
                if(strcmp(q[i].op,"+")==0)
                {
                    res=x+y;    
                }
                if(strcmp(q[i].op,"-")==0)
                {
                    res=x-y;    
                }
                if(strcmp(q[i].op,"*")==0)
                {
                    res=x*y;    
                }
                if(strcmp(q[i].op,"/")==0)
                {
                    res=x/y;    
                }
                char qw[5]; 
                sprintf(qw, "%d", res);
                tres=(char*)malloc(sizeof(char)*strlen(q[i].res));
                strcpy(tres,q[i].res);
                int p=i+1;
                while(p<quadnum)
                {
                    if(strcmp(tres,q[p].arg1)==0)
                    {
                        strcpy(q[p].arg1,qw);
                    }
                    if(strcmp(tres,q[p].arg2)==0)
                    {
                        strcpy(q[p].arg2,qw);
                    }
                    p=p+1;
                }   
                            
            }
                        
        }
    }
    //printf("\n\n");
    if(change==1)
    {
        //printf("Constant folding optimization:\n\n");
        //intermediate_code();
    }
    else
    {
        //printf("No constant folding optimization\n\n\n");
    }       


    //printf("\n\n");
    i=0;
    change=0;
    for(i=0;i<quadnum;i++)
    {
        if(q[i].valid &&  strcmp("=",q[i].op)==0 && check(q[i].arg1))
        {
            tres=(char*)malloc(sizeof(char)*strlen(q[i].res));
            strcpy(tres,q[i].res);
            int amt=0;
            for(int j=i+1;j<quadnum;j++)
            {
                if(q[j].valid && (strcmp(tres,q[j].arg1)==0 || strcmp(tres,q[j].arg2)==0 ))
                {
                    amt=1;
                }       
            }
            if(amt==0)
            {
                change=1;
                q[i].valid=0;
            }
                
        }
    }
    //printf("\n\n");
    if(change==1)
    {
        //printf("\tDead code optimization is:\n\n");
        //intermediate_code();
    }
    else
    {
        //printf("\tNo dead code optimization\n\n\n");
    }       
}



int check(char *string)
{
    int x=strlen(string);
    for(int i=0;i<x;i++)
    {
        int j=isdigit(string[i]);
        if(j==0)
        {
            return(0);
        }
    }
    return(1);
}



void intermediate_code()
{
    int i;
    for(i=0;i<quadnum;i++)
    {
        if(q[i].valid)
        {
            if(strcmp(q[i].op,"Label")==0)
            {
                printf("%s:\n",q[i].res);
            }
            else if(strcmp(q[i].op,"goto")==0)
            {   
                printf("\tgoto %s\n",q[i].res);
            }
            else if(strcmp(q[i].op,"not")==0)
            {   
                printf("\t%s = not %s\n",q[i].res,q[i].arg1);
            }
            else if(strcmp(q[i].op,"if")==0)
            {   
                printf("\tif %s goto %s\n",q[i].arg1,q[i].res);
            }
            else if(strcmp(q[i].op,"=")==0)
            {   
                printf("\t%s = %s\n",q[i].res,q[i].arg1);
            }
            else
            {
                printf("\t%s = %s %s %s\n",q[i].res,q[i].arg1,q[i].op,q[i].arg2);
            }
                
        }
    }
    display();
}



int main()
{
    yyparse();
    if(valid)
    {
        //printf("\n\nParsing successful\n\n");
        
    }
    else
    {
        //printf("\n\nParsing unsuccessful\n\n");
        
    }
    
    optimize_code();
    display();
    
    return 0;
}        


  

