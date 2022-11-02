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
#define KRED  "\x1B[31m"
#define KWHT  "\x1B[37m"
int valid=1;
int yylex();	
extern char* yytext;
int yyerror(const char *s);
int st[100];
int top;
int count;
int symcount=-1;
void insertIntoSym(char *text,int nm,int scpl ,int check );
void func(char *text,int val,int scp);
void display();
int idval;
extern int yylineno;
extern char* yytext;
char varname[20];int cflag=0;
int flag=0;

#line 90 "y.tab.c" /* yacc.c:339  */

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
    T_BY = 265,
    T_BREAK = 266,
    T_REPEAT = 267,
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
#define T_BY 265
#define T_BREAK 266
#define T_REPEAT 267
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

#line 221 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  177

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
       0,    57,    57,    60,    61,    62,    62,    63,    64,    65,
      66,    66,    66,    67,    68,    71,    71,    71,    76,    76,
      79,    80,    83,    83,    83,    86,    89,    89,    89,    90,
      90,    90,    93,    94,    95,    98,    99,   100,   101,   104,
     105,   106,   109,   110,   111,   114,   115,   116,   119,   120,
     121,   122,   125,   126,   127,   128,   131,   132,   133,   134,
     135,   136,   139,   140,   141,   144,   145,   151,   152,   153,
     154,   155,   158,   162,   163,   164,   166,   167,   170,   173,
     174,   177,   180
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_LIBRARY", "T_NL", "T_PRINT",
  "T_WHILE", "T_IF", "T_IN", "T_ELSE", "T_BY", "T_BREAK", "T_REPEAT",
  "T_LENGTHOUT", "T_PASTEO", "T_TRUE", "T_FALSE", "T_MOD", "T_MMOD",
  "T_NUM", "T_STR", "T_ID", "T_COPEN", "T_SEQOPEN", "T_CO", "T_CC",
  "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_GT", "T_LT", "T_EQ", "T_AND",
  "T_OR", "'<'", "'>'", "T_LE", "T_GE", "T_EE", "T_NE", "T_RA", "'='",
  "T_LA", "'('", "')'", "'['", "']'", "','", "$accept", "Q", "S", "$@1",
  "$@2", "$@3", "WHILE", "$@4", "$@5", "IF", "$@6", "NIF", "REPEAT", "$@7",
  "$@8", "BREAK", "E", "$@9", "$@10", "$@11", "$@12", "EXP", "COND", "K",
  "L", "M", "O", "INDEX", "RELOP", "ASSIGNOP", "LOGICOP", "ITEM", "PASTE",
  "PASTEIN", "N", "NUM", "BOOL", "STR", "ID", YY_NULLPTR
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

#define YYPACT_NINF -76

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-76)))

#define YYTABLE_NINF -15

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     167,    15,   -11,    37,    37,    47,    37,   -76,    53,   -76,
     -13,    23,    23,    23,    23,    23,   161,   -76,    20,    22,
     -76,    31,    37,   -76,   -76,   -76,   -13,    23,   166,     8,
      41,   -76,   -76,    11,   -76,   -76,   -76,   -76,   -76,    32,
     -76,   -76,   -76,    33,   -76,   -76,   -76,   -76,   -76,    37,
      37,   -76,   121,    -5,    34,   -76,   -76,   -13,   -13,   -76,
     -76,   -76,   -76,   -76,   -76,   -13,   -13,   -13,   -13,   -13,
     -76,   -76,   -76,   -14,   -13,    40,    84,   -13,   -13,    37,
      64,   -76,     8,     8,     0,    41,    41,   -76,   -76,    43,
      44,    49,    12,    46,    50,    52,    23,    37,   182,    11,
      37,   121,   -76,   -76,   -76,   -14,   -14,   -76,   -76,    40,
      40,   -76,    56,   -76,   -76,   -13,   -13,   -13,    57,    70,
      99,   -76,   -76,   -76,   -76,    37,    36,    36,    36,    37,
     -76,    23,    87,    88,   111,   -76,   -76,   -76,   -76,    37,
      37,   121,   -76,   121,    91,    92,   -76,   114,   115,   122,
     -76,    37,   -76,    25,    37,   -76,    76,    37,    37,   121,
     -13,    98,    37,   -76,    79,   126,    37,   -76,   110,   -76,
      37,   121,   112,   -76,   134,   122,   -76
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    77,    77,     0,    77,    10,     0,     2,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
      25,     0,    77,     1,    78,    82,     0,     0,     0,    41,
      44,    47,    49,    48,     3,     4,     7,     8,    13,     0,
      79,    80,    81,     0,    70,    67,    68,    69,    71,    77,
      77,    22,     0,     0,    48,     6,    34,     0,     0,    57,
      56,    59,    60,    58,    61,     0,     0,     0,     0,     0,
      62,    64,    63,     0,     0,    75,     0,     0,     0,    77,
       0,    50,    39,    40,     0,    42,    43,    45,    46,     0,
      54,    55,     0,     0,     0,     0,     0,    77,    38,    48,
      77,     0,    11,    32,    51,     0,     0,    33,    72,    75,
      75,     9,     0,    65,    66,     0,     0,     0,     0,     0,
       0,    52,    53,    73,    74,    77,    35,    37,    36,    77,
      23,     0,     0,     0,     0,    12,    15,    18,    24,    77,
      77,     0,    19,     0,     0,     0,    16,     0,     0,    20,
      17,    77,    21,     0,    77,    29,     0,    77,    77,     0,
       0,     0,    77,    30,     0,     0,    77,    31,     0,    26,
      77,     0,     0,    27,     0,     0,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -76,   -76,    -2,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -32,   -76,   -76,   -76,
     -76,   -76,   -75,    -9,    13,     2,     5,   -22,    51,    45,
     -76,   -76,   -76,   -23,    -4,    -1,   -76,   132,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    22,   120,    11,   139,   148,    12,
     140,   142,    13,    79,   134,    14,   152,   170,   174,   157,
     165,    27,    97,    98,    29,    30,    31,    89,    65,    74,
     116,    43,    44,    93,    18,    32,    46,    94,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    28,    21,   100,   103,    24,    24,    25,    25,    34,
      35,    36,    37,    38,    33,    45,   107,    53,    52,    15,
      48,    57,    58,   -14,     1,    55,    57,    58,     2,     3,
       4,    26,   154,    16,     5,     6,    66,    67,    57,    58,
      81,    17,    -5,    70,    -5,    77,    78,     7,   -14,   155,
      80,    20,    71,    23,    72,    51,    84,    73,    68,    69,
      42,    25,    57,    58,    49,    92,    50,    -5,    85,    86,
      82,    83,    90,    87,    88,   101,    75,    91,    76,    95,
      73,    99,    99,   121,   122,   162,   123,   124,    96,   102,
     104,   108,   105,   112,   111,   130,   118,   106,   109,   119,
     110,   125,   129,   131,    90,    90,   126,   127,   128,    91,
      91,   136,   137,    95,    95,   138,   146,   147,   149,   150,
     158,   132,     1,   163,   166,   133,     2,     3,     4,   135,
     167,   151,     5,     6,   169,   141,   143,   173,   175,   144,
      -5,   145,    -5,   176,   117,     7,   -14,   153,    47,   115,
     156,     0,     0,   159,   160,     0,     0,   161,   164,     0,
       0,     0,   168,     0,    99,    -5,   171,   -14,     1,   172,
      56,     0,     2,     3,     4,    39,    40,    41,     5,     6,
      24,    42,    25,     0,     0,     0,    -5,     0,    -5,     0,
       0,     7,    57,    58,     0,     0,    59,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     0,    57,    58,
       0,    -5,    59,    60,     0,   113,   114,     0,     0,    61,
      62,    63,    64
};

static const yytype_int16 yycheck[] =
{
       4,    10,     6,    78,     4,    19,    19,    21,    21,    11,
      12,    13,    14,    15,    10,    16,     4,    26,    22,     4,
      16,    26,    27,     0,     1,    27,    26,    27,     5,     6,
       7,    44,     7,    44,    11,    12,    28,    29,    26,    27,
      45,     4,    19,    32,    21,    49,    50,    24,    25,    24,
      52,     4,    41,     0,    43,    24,    65,    46,    17,    18,
      20,    21,    26,    27,    44,    74,    44,    44,    66,    67,
      57,    58,    73,    68,    69,    79,    44,    73,    45,    75,
      46,    77,    78,   105,   106,   160,   109,   110,     4,    25,
      47,    45,    48,    97,    96,    25,   100,    48,    48,   101,
      48,    45,    45,     4,   105,   106,   115,   116,   117,   105,
     106,    24,    24,   109,   110,     4,    25,    25,     4,     4,
      44,   125,     1,    25,    45,   129,     5,     6,     7,   131,
       4,     9,    11,    12,    24,   139,   140,    25,     4,   141,
      19,   143,    21,   175,    99,    24,    25,   151,    16,    98,
     154,    -1,    -1,   157,   158,    -1,    -1,   159,   162,    -1,
      -1,    -1,   166,    -1,   160,    44,   170,     0,     1,   171,
       4,    -1,     5,     6,     7,    14,    15,    16,    11,    12,
      19,    20,    21,    -1,    -1,    -1,    19,    -1,    21,    -1,
      -1,    24,    26,    27,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    -1,    26,    27,
      -1,    44,    30,    31,    -1,    33,    34,    -1,    -1,    37,
      38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     6,     7,    11,    12,    24,    50,    51,
      52,    55,    58,    61,    64,     4,    44,     4,    83,    83,
       4,    83,    53,     0,    19,    21,    44,    70,    72,    73,
      74,    75,    84,    87,    51,    51,    51,    51,    51,    14,
      15,    16,    20,    80,    81,    84,    85,    86,    87,    44,
      44,    24,    83,    72,    87,    51,     4,    26,    27,    30,
      31,    37,    38,    39,    40,    77,    28,    29,    17,    18,
      32,    41,    43,    46,    78,    44,    45,    83,    83,    62,
      51,    45,    73,    73,    72,    74,    74,    75,    75,    76,
      84,    87,    72,    82,    86,    87,     4,    71,    72,    87,
      71,    83,    25,     4,    47,    48,    48,     4,    45,    48,
      48,    51,    83,    33,    34,    77,    79,    78,    83,    51,
      54,    76,    76,    82,    82,    45,    72,    72,    72,    45,
      25,     4,    83,    83,    63,    51,    24,    24,     4,    56,
      59,    83,    60,    83,    51,    51,    25,    25,    57,     4,
       4,     9,    65,    83,     7,    24,    83,    68,    44,    83,
      83,    51,    71,    25,    83,    69,    45,     4,    83,    24,
      66,    83,    51,    25,    67,     4,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    51,    51,    51,    51,
      53,    54,    51,    51,    51,    56,    57,    55,    59,    58,
      60,    60,    62,    63,    61,    64,    66,    67,    65,    68,
      69,    65,    70,    70,    70,    71,    71,    71,    71,    72,
      72,    72,    73,    73,    73,    74,    74,    74,    75,    75,
      75,    75,    76,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    78,    78,    78,    79,    79,    80,    80,    80,
      80,    80,    81,    82,    82,    82,    83,    83,    84,    85,
      85,    86,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     3,     2,     2,     6,
       0,     0,     8,     3,     0,     0,     0,    15,     0,    11,
       4,     5,     0,     0,     9,     2,     0,     0,    18,     0,
       0,     9,     4,     4,     2,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     1,     1,
       3,     4,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     0,     1,     0,     1,     1,
       1,     1,     1
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
        case 5:
#line 62 "code.y" /* yacc.c:1646  */
    {cflag=1;}
#line 1428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 66 "code.y" /* yacc.c:1646  */
    {count=count+1;top=top+1;st[top]=count;}
#line 1434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 66 "code.y" /* yacc.c:1646  */
    {top=top-1;}
#line 1440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 71 "code.y" /* yacc.c:1646  */
    {count=count+1;top=top+1;st[top]=count;}
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 71 "code.y" /* yacc.c:1646  */
    {top=top-1;}
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 76 "code.y" /* yacc.c:1646  */
    {count=count+1;top=top+1;st[top]=count;}
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 79 "code.y" /* yacc.c:1646  */
    {top=top-1;}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 80 "code.y" /* yacc.c:1646  */
    {top=top-1;}
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 83 "code.y" /* yacc.c:1646  */
    {count=count+1;top=top+1;st[top]=count;}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 83 "code.y" /* yacc.c:1646  */
    {top=top-1;}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 89 "code.y" /* yacc.c:1646  */
    {count=count+1;top=top+1;st[top]=count;}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 89 "code.y" /* yacc.c:1646  */
    {top=top-1;}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 90 "code.y" /* yacc.c:1646  */
    {count=count+1;top=top+1;st[top]=count;}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 90 "code.y" /* yacc.c:1646  */
    {top=top-1;}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 94 "code.y" /* yacc.c:1646  */
    {func(varname,(yyvsp[-1]),st[top]);}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 99 "code.y" /* yacc.c:1646  */
    {func(varname,(yyvsp[0]),st[top]);}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 104 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2])+(yyvsp[0]);}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 105 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2])-(yyvsp[0]);}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 106 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 109 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2])*(yyvsp[0]);}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 110 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2])/(yyvsp[0]);}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 111 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 116 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 119 "code.y" /* yacc.c:1646  */
    {(yyval)=0;func(varname,0,st[top]);}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 120 "code.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 180 "code.y" /* yacc.c:1646  */
    {insertIntoSym(yytext,yylineno,st[top],cflag);strcpy(varname,yytext);}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1582 "y.tab.c" /* yacc.c:1646  */
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
  	printf("\n%sERROR: %s on Line %d\n\n%s",KRED,s,yylineno-1,KWHT);
}

struct var
{
	int d;
	char c[20];
	char l[100];
	int scope;
	int val;
};

struct var symtab[100];


void insertIntoSym(char *text,int nm,int scp, int check)
{
	if(check==0)
	{
	int pre=0;
		for(int i=0;i<=symcount;i++)
		{
			if(strcmp(symtab[i].c,text)==0 )
			{
				pre=1;
			}
		}
		if(pre==0)
		{
			valid=0;
			printf("\n%sERROR: Undeclared variable %s on Line %d\n\n%s",KRED,text,nm,KWHT);
		}
	}
	else
	{
		cflag=0;
	}
	int present=0;
	for(int i=0;i<=symcount;i++)
	{
		if(strcmp(symtab[i].c,text)==0 && symtab[i].scope==scp)
		{
			char buffer[20];
			sprintf(buffer,"%d",nm);
			present=1;
			if(strstr(symtab[i].l,buffer)==NULL)
			{
				strcat(symtab[i].l,",");
				strcat(symtab[i].l,buffer);	
			}
			symtab[i].scope=scp;		
			break;
		}
	}
	if(present==0)
	{
		symcount++;
		char buffer[20];
		sprintf(buffer,"%d",nm);
		int p=symcount;
		symtab[p].d=p;
		strcpy(symtab[p].c,text);
		strcpy(symtab[p].l,"");
		strcat(symtab[p].l,buffer);
		symtab[p].scope=scp;
		symtab[p].val=0;
	}
}

void display()
{
	printf("\n\nSymbol Table\n");
	printf("| ID   | Symbol   | Value    | Scope    | Line number        |\n");
	printf("--------------------------------------------------------------\n");
	for(int i=0;i<=symcount;i++)
	{
		printf("| %5d|%10s|%10d|%10d|%20s|\n",symtab[i].d,symtab[i].c,symtab[i].val,symtab[i].scope,symtab[i].l);
	}
	printf("--------------------------------------------------------------\n");	
}

void func(char *text,int val,int scp)
{
	for(int i=0;i<=symcount;i++)
	{
		if((strcmp(symtab[i].c,text)==0) && symtab[i].scope==scp) 
		{
			if(val!=0)
			{
				symtab[i].val=val;		
				break;
			}
		}
	}
}

int main()
{
	st[0]=0;
	top=0;
	count=0;
	printf("The tokens generated are:\n\n");
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
	
	return 0;
}
