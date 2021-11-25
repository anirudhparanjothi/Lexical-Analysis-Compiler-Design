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

#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
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
    INT_LITERAL = 258,
    STR_LITERAL = 259,
    PROGRAM = 260,
    BEGINPROGRAM = 261,
    ENDPROGRAM = 262,
    INTEGER = 263,
    WHILE = 264,
    LOOP = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ELSE = 270,
    ENDIF = 271,
    WRITE = 272,
    READ = 273,
    OR = 274,
    NOT = 275,
    ENDLOOP = 276,
    AND = 277,
    SEMICOLON = 278,
    COMMA = 279,
    COLON = 280,
    TRUE = 281,
    FALSE = 282,
    SUB = 283,
    ADD = 284,
    MULT = 285,
    DIV = 286,
    MOD = 287,
    GT = 288,
    LT = 289,
    EQ = 290,
    GTE = 291,
    LTE = 292,
    NEQ = 293,
    LEFT_PAREN = 294,
    RIGHT_PAREN = 295,
    ASSIGN = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "grammar.y" /* yacc.c:1909  */


int int_value;
string *str_value;

#line 102 "grammar.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
