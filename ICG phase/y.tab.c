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




#line 121 "y.tab.c" /* yacc.c:339  */

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

#line 252 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   269

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  179

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
       0,    88,    88,    88,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   102,   102,   102,   102,   105,   105,   105,
     108,   108,   112,   112,   115,   116,   116,   120,   120,   120,
     121,   121,   124,   125,   127,   127,   128,   128,   129,   132,
     133,   134,   135,   138,   138,   139,   139,   140,   143,   143,
     144,   144,   145,   149,   150,   151,   152,   155,   156,   157,
     158,   161,   162,   163,   164,   165,   166,   169,   170,   171,
     174,   175,   179,   180,   181,   182,   183,   186,   190,   191,
     192,   194,   195,   199,   202,   203,   206,   210
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
  "T_LA", "'('", "')'", "'['", "']'", "','", "$accept", "Q", "$@1", "S",
  "WHILE", "$@2", "$@3", "$@4", "REPEAT", "$@5", "$@6", "BREAK", "$@7",
  "IF", "$@8", "NIF", "$@9", "E", "$@10", "$@11", "$@12", "EIF", "EXP",
  "$@13", "$@14", "COND", "K", "@15", "@16", "L", "@17", "@18", "O",
  "INDEX", "RELOP", "ASSIGNOP", "LOGICOP", "ITEM", "PASTE", "PASTEIN", "N",
  "NUM", "BOOL", "STR", "ID", YY_NULLPTR
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

#define YYPACT_NINF -101

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-101)))

#define YYTABLE_NINF -28

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -101,     7,    60,  -101,    14,   -28,    19,    19,  -101,  -101,
    -101,  -101,    19,   -13,  -101,    28,    28,    28,    28,    28,
     203,    -8,  -101,  -101,     0,    28,    78,  -101,  -101,   -17,
      21,    19,   169,   -23,     2,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,   -13,
    -101,  -101,  -101,  -101,  -101,    -4,   -13,  -101,    -2,  -101,
    -101,  -101,    -5,  -101,  -101,  -101,  -101,  -101,    20,    19,
    -101,    27,    31,  -101,   -13,   -13,    12,   -13,   -13,    30,
      34,    35,    12,    24,    81,    19,   -13,    19,    82,    -8,
      -8,    84,  -101,  -101,  -101,    -4,    -4,    85,    45,    43,
      54,    28,   -13,    19,   184,     0,   169,    28,  -101,  -101,
    -101,  -101,  -101,    24,    24,  -101,    19,    61,  -101,  -101,
     -13,   -13,   -13,    80,  -101,  -101,  -101,    62,  -101,    12,
      12,    12,  -101,  -101,    19,   104,    19,    86,  -101,    87,
      19,    19,  -101,   169,   169,    88,    89,   108,  -101,   105,
     111,   107,  -101,   110,  -101,   113,    19,    19,   100,    91,
      19,    19,   169,   -13,   101,    19,   121,    83,  -101,  -101,
      19,   112,    19,   169,   114,   126,   107,  -101,  -101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,    82,    82,    20,    17,
      83,    87,    82,     0,     3,     0,     0,     0,     0,     0,
       0,    47,    52,    54,    53,     0,     0,    81,    13,     0,
       0,    82,     0,     0,    53,     4,     6,     7,     5,     8,
      38,    43,    45,    62,    61,    64,    65,    63,    66,     0,
      48,    50,    67,    69,    68,     0,     0,    11,     0,    84,
      85,    86,     0,    75,    72,    73,    74,    76,     0,    82,
      21,     0,     0,    55,     0,     0,    34,     0,     0,     0,
      59,    60,    36,    80,     0,    82,     0,    82,     0,    44,
      46,     0,    49,    51,    56,     0,     0,     0,     0,     0,
       0,     0,     0,    82,    42,    53,     0,     0,    35,    57,
      58,    37,    77,    80,    80,     9,    82,     0,    70,    71,
       0,     0,     0,     0,    10,    78,    79,     0,    22,    39,
      41,    40,    18,    14,    82,     0,    82,     0,    19,     0,
      82,    82,    23,     0,     0,     0,     0,     0,    15,    24,
       0,     0,    16,    30,    26,     0,    82,    82,     0,     0,
      82,    82,     0,     0,     0,    82,     0,     0,    31,    28,
      82,     0,    82,     0,     0,     0,    33,    32,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -101,  -101,  -101,    -6,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,   -45,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -100,     1,  -101,  -101,   -20,
    -101,  -101,   -19,   -22,    36,    37,  -101,  -101,  -101,   -38,
      -7,   -25,  -101,   115,   106
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    14,    15,    68,   136,   150,    16,    31,
     135,    17,    30,    18,   134,   142,   151,   154,   155,   170,
     156,   178,    19,    91,    97,   103,    20,    74,    75,    21,
      77,    78,    22,    79,    49,    56,   121,    62,    63,    98,
      28,    23,    65,    99,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    64,   116,    41,    42,    32,    10,     3,    11,    35,
      36,    37,    38,    39,    33,    10,    26,    11,    25,    57,
      50,    51,    73,    27,    71,    70,    72,    69,   -12,     4,
      80,    13,    52,     5,     6,     7,     8,     9,    41,    42,
      84,    53,    83,    54,    61,    11,    55,    10,    55,    11,
      76,    87,    12,   -12,    89,    90,    88,    82,    92,    93,
     -12,     4,    86,   165,    85,     5,     6,     7,     8,     9,
      80,    80,    13,   109,   110,   125,   126,    94,   102,    10,
     106,    11,    95,    96,    12,   101,   107,   104,   108,   111,
     112,   113,    58,    59,    60,   115,   117,    10,    61,    11,
     123,   124,   114,   104,    13,   132,   128,   133,   138,   127,
     140,   141,   149,   147,   148,   152,   -25,   -27,   153,    34,
     157,   129,   130,   131,   160,   168,   166,   137,   169,   139,
     176,   177,    67,   143,   144,   161,   172,   145,   146,   175,
     120,    66,   122,     0,     0,     0,     0,     0,     0,   158,
     159,     0,     0,   162,   163,    34,   164,     0,   167,     0,
       0,    81,    34,   171,   104,   173,     0,   174,     0,     0,
       4,     0,     0,     0,     5,     6,     7,     8,     9,     0,
      34,    34,     0,    34,    34,     0,     0,     0,    10,   100,
      11,     0,   105,    12,   -12,     0,     0,     0,     0,     0,
       0,    81,    81,     0,     0,     0,     0,    40,   105,     0,
      41,    42,     0,    13,    43,    44,     0,   118,   119,   100,
     100,    45,    46,    47,    48,     0,    34,    34,    34,    41,
      42,     0,     0,    43,    44,     0,     0,     0,     0,     0,
      45,    46,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105
};

static const yytype_int16 yycheck[] =
{
       7,    26,   102,    26,    27,    12,    19,     0,    21,    15,
      16,    17,    18,    19,    13,    19,    44,    21,     4,    25,
      28,    29,    45,     4,    31,     4,    32,    44,     0,     1,
      55,    44,    32,     5,     6,     7,     8,     9,    26,    27,
      45,    41,    44,    43,    20,    21,    46,    19,    46,    21,
      49,    24,    24,    25,    74,    75,    25,    56,    77,    78,
       0,     1,    69,   163,    44,     5,     6,     7,     8,     9,
      95,    96,    44,    95,    96,   113,   114,    47,    85,    19,
      87,    21,    48,    48,    24,     4,     4,    86,     4,     4,
      45,    48,    14,    15,    16,   101,   103,    19,    20,    21,
     106,   107,    48,   102,    44,    25,    45,    45,     4,   116,
      24,    24,     4,    25,    25,     4,    11,     7,    11,    13,
       7,   120,   121,   122,    24,     4,    25,   134,    45,   136,
       4,   176,    26,   140,   141,    44,    24,   143,   144,    25,
     104,    26,   105,    -1,    -1,    -1,    -1,    -1,    -1,   156,
     157,    -1,    -1,   160,   161,    49,   162,    -1,   165,    -1,
      -1,    55,    56,   170,   163,   172,    -1,   173,    -1,    -1,
       1,    -1,    -1,    -1,     5,     6,     7,     8,     9,    -1,
      74,    75,    -1,    77,    78,    -1,    -1,    -1,    19,    83,
      21,    -1,    86,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    -1,    -1,    -1,    -1,     4,   102,    -1,
      26,    27,    -1,    44,    30,    31,    -1,    33,    34,   113,
     114,    37,    38,    39,    40,    -1,   120,   121,   122,    26,
      27,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    51,     0,     1,     5,     6,     7,     8,     9,
      19,    21,    24,    44,    52,    53,    57,    60,    62,    71,
      75,    78,    81,    90,    93,     4,    44,     4,    89,    89,
      61,    58,    89,    75,    93,    52,    52,    52,    52,    52,
       4,    26,    27,    30,    31,    37,    38,    39,    40,    83,
      28,    29,    32,    41,    43,    46,    84,    52,    14,    15,
      16,    20,    86,    87,    90,    91,    92,    93,    54,    44,
       4,    89,    52,    45,    76,    77,    75,    79,    80,    82,
      90,    93,    75,    44,    45,    44,    89,    24,    25,    78,
      78,    72,    81,    81,    47,    48,    48,    73,    88,    92,
      93,     4,    89,    74,    75,    93,    89,     4,     4,    82,
      82,     4,    45,    48,    48,    52,    74,    89,    33,    34,
      83,    85,    84,    52,    52,    88,    88,    89,    45,    75,
      75,    75,    25,    45,    63,    59,    55,    89,     4,    89,
      24,    24,    64,    89,    89,    52,    52,    25,    25,     4,
      56,    65,     4,    11,    66,    67,    69,     7,    89,    89,
      24,    44,    89,    89,    52,    74,    25,    89,     4,    45,
      68,    89,    24,    89,    52,    25,     4,    66,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    51,    50,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    54,    55,    56,    53,    58,    59,    57,
      61,    60,    63,    62,    64,    65,    64,    67,    68,    66,
      69,    66,    70,    70,    72,    71,    73,    71,    71,    74,
      74,    74,    74,    76,    75,    77,    75,    75,    79,    78,
      80,    78,    78,    81,    81,    81,    81,    82,    82,    82,
      82,    83,    83,    83,    83,    83,    83,    84,    84,    84,
      85,    85,    86,    86,    86,    86,    86,    87,    88,    88,
      88,    89,    89,    90,    91,    91,    92,    93
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     6,
       6,     3,     0,     0,     0,     0,    16,     0,     0,     9,
       0,     3,     0,    11,     4,     0,     6,     0,     0,    17,
       0,     8,     1,     0,     0,     5,     0,     5,     2,     3,
       3,     3,     1,     0,     4,     0,     4,     1,     0,     4,
       0,     4,     1,     1,     1,     3,     4,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     3,
       0,     1,     0,     1,     1,     1,     1,     1
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
#line 88 "code.y" /* yacc.c:1646  */
    {printf("\n\nIntermediate code is:\n\n");}
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 102 "code.y" /* yacc.c:1646  */
    {while1();}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 102 "code.y" /* yacc.c:1646  */
    {while2();}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 102 "code.y" /* yacc.c:1646  */
    {while3();}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 105 "code.y" /* yacc.c:1646  */
    {repeat1();}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 105 "code.y" /* yacc.c:1646  */
    {repeat2();}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 108 "code.y" /* yacc.c:1646  */
    {repeat3();}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 112 "code.y" /* yacc.c:1646  */
    {ifelse1();}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 115 "code.y" /* yacc.c:1646  */
    {ifelse4();}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 116 "code.y" /* yacc.c:1646  */
    {IFS[++i_top]=lnum;lnum++;}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 116 "code.y" /* yacc.c:1646  */
    {ifelse3();}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 120 "code.y" /* yacc.c:1646  */
    {ifelse2();}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 120 "code.y" /* yacc.c:1646  */
    {ifelse1();}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 121 "code.y" /* yacc.c:1646  */
    {ifelse2();}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 125 "code.y" /* yacc.c:1646  */
    {ifelse4();}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 127 "code.y" /* yacc.c:1646  */
    {codegen();}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 128 "code.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 132 "code.y" /* yacc.c:1646  */
    {codegen();}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 133 "code.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 134 "code.y" /* yacc.c:1646  */
    {codegen();}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 138 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"+");push(pushvar);}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-3])+(yyvsp[-1]);codegen();}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 139 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"-");push(pushvar);}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 139 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-3])-(yyvsp[-1]);codegen();}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 140 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 143 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"*");push(pushvar);}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 143 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-3])*(yyvsp[-1]);codegen();}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 144 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"/");push(pushvar);}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 144 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-3])/(yyvsp[-1]);codegen();}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 145 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 150 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 161 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"<");push(pushvar);}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 162 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,">");push(pushvar);}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 163 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"==");push(pushvar);}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 164 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"<=");push(pushvar);}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 165 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,">=");push(pushvar);}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 166 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"!=");push(pushvar);}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 169 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"=");push(pushvar);}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 170 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"<-");push(pushvar);}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 171 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"->");push(pushvar);}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 174 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"&&");push(pushvar);}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 175 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,"||");push(pushvar);}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 199 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,yytext);push(pushvar);}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 210 "code.y" /* yacc.c:1646  */
    {strcpy(pushvar,yytext);push(pushvar);}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1732 "y.tab.c" /* yacc.c:1646  */
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
#line 213 "code.y" /* yacc.c:1906  */


#include <ctype.h>
int yyerror(const char *s)
{
    extern int yylineno;
    valid =0;
    //display();
    printf("\nLine no: %d \n The error is: %s\n\n",yylineno-1,s);
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
    printf("\n\nQuadraple Table\n\n");
    printf("\tResult:\t\t Op:\t\t Arg1:\t\t Arg2:\t\t \n");
    for(int i=0;i<quadnum;i++)
    {
        if(q[i].valid)
        {
            printf("%d.\t%s \t\t %s \t\t %s \t\t %s \t\t \n",(i+1),q[i].res,q[i].op,q[i].arg1,q[i].arg2);
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
    printf("\t%s = %s %s %s\n",temp,stk[tops-2],stk[tops-1],stk[tops]);
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
    printf("\t%s = %s\n", stk[tops-2], stk[tops]);
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
    printf("\t%s = not %s\n", temp, stk[tops]);
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

    printf("\tif %s goto L%d\n", temp, lnum);
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
    printf("\tgoto L%d\n",r);
    q[quadnum].op = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op, "goto");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char jug[10];
    sprintf(jug,"%d", r);
    char l[] = "L";
    strcpy(q[quadnum].res,strcat(l,jug));
    quadnum++;
    printf("L%d: \n",x);
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
    printf("L%d: \n",y);
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
        printf("L%d:\n",res);
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
    lnum++;
    printf("L%d: \n",lnum++);
    
    q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",lnum-1);
    char l[] = "L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
}

void repeat1()
{
    
    printf("L%d: \n",lnum);
    
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
    printf("\t%s = not %s\n",temp,stk[tops]);
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
    printf("\tif %s goto L%d\n",temp,lnum);
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

printf("\tgoto L%d \n",y);
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

printf("L%d :\n",p);
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
    

printf("\tgoto L%d \n",y);
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
    printf("\tgoto L%d \n",mera);
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
    printf("L%d: \n",mera+1);lnum++;
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
    printf("\tgoto L%d \n",lnum);
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

void optimize_code()
{
    char *targ1,*targ2,*tres,*topr,*res2;
    printf("\n\n");
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
    printf("\n\n");
    if(change==1)
    {
        printf("Optimized Intermediate Code after common subexpression elimination is:\n\n");
        intermediate_code();
    }
    else
    {
        printf("No common subexpression elimination\n\n\n");
    }



    printf("\n\n");
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
    printf("\n\n");
    if(change==1)
    {
        printf("Optimized Intermediate Code after Constant folding optimization:\n\n");
        intermediate_code();
    }
    else
    {
        printf("No constant folding optimization\n\n\n");
    }       


    printf("\n\n");
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
    printf("\n\n");
    if(change==1)
    {
        printf("Optimized Intermediate Code after Dead code optimization is:\n\n");
        intermediate_code();
    }
    else
    {
        printf("No dead code optimization\n\n\n");
    }       
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
        printf("\n\nParsing successful\n\n");
        
    }
    else
    {
        printf("\n\nParsing unsuccessful\n\n");
        
    }
    display();
    optimize_code();
    return 0;
}        
