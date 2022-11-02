/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
