/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     WITH = 258,
     LETREC = 259,
     MIX = 260,
     SPLIT = 261,
     SEQ = 262,
     PAR = 263,
     REC = 264,
     NE = 265,
     GE = 266,
     GT = 267,
     EQ = 268,
     LE = 269,
     LT = 270,
     OR = 271,
     SUB = 272,
     ADD = 273,
     RSH = 274,
     LSH = 275,
     XOR = 276,
     AND = 277,
     MOD = 278,
     DIV = 279,
     MUL = 280,
     POWOP = 281,
     FDELAY = 282,
     DELAY1 = 283,
     DOT = 284,
     APPL = 285,
     MEM = 286,
     PREFIX = 287,
     INTCAST = 288,
     FLOATCAST = 289,
     PARAMETER = 290,
     FFUNCTION = 291,
     FCONSTANT = 292,
     FVARIABLE = 293,
     BUTTON = 294,
     CHECKBOX = 295,
     VSLIDER = 296,
     HSLIDER = 297,
     NENTRY = 298,
     VGROUP = 299,
     HGROUP = 300,
     TGROUP = 301,
     HBARGRAPH = 302,
     VBARGRAPH = 303,
     SOUNDFILE = 304,
     ATTACH = 305,
     ACOS = 306,
     ASIN = 307,
     ATAN = 308,
     ATAN2 = 309,
     COS = 310,
     SIN = 311,
     TAN = 312,
     EXP = 313,
     LOG = 314,
     LOG10 = 315,
     POWFUN = 316,
     SQRT = 317,
     ABS = 318,
     MIN = 319,
     MAX = 320,
     FMOD = 321,
     REMAINDER = 322,
     FLOOR = 323,
     CEIL = 324,
     RINT = 325,
     RDTBL = 326,
     RWTBL = 327,
     SELECT2 = 328,
     SELECT3 = 329,
     INT = 330,
     FLOAT = 331,
     LAMBDA = 332,
     WIRE = 333,
     CUT = 334,
     ENDDEF = 335,
     VIRG = 336,
     LPAR = 337,
     RPAR = 338,
     LBRAQ = 339,
     RBRAQ = 340,
     LCROC = 341,
     RCROC = 342,
     DEF = 343,
     IMPORT = 344,
     COMPONENT = 345,
     LIBRARY = 346,
     ENVIRONMENT = 347,
     WAVEFORM = 348,
     ROUTE = 349,
     ENABLE = 350,
     CONTROL = 351,
     IPAR = 352,
     ISEQ = 353,
     ISUM = 354,
     IPROD = 355,
     INPUTS = 356,
     OUTPUTS = 357,
     STRING = 358,
     FSTRING = 359,
     IDENT = 360,
     EXTRA = 361,
     DECLARE = 362,
     CASE = 363,
     ARROW = 364,
     FLOATMODE = 365,
     DOUBLEMODE = 366,
     QUADMODE = 367,
     BDOC = 368,
     EDOC = 369,
     BEQN = 370,
     EEQN = 371,
     BDGM = 372,
     EDGM = 373,
     BLST = 374,
     ELST = 375,
     BMETADATA = 376,
     EMETADATA = 377,
     DOCCHAR = 378,
     NOTICE = 379,
     LISTING = 380,
     LSTTRUE = 381,
     LSTFALSE = 382,
     LSTDEPENDENCIES = 383,
     LSTMDOCTAGS = 384,
     LSTDISTRIBUTED = 385,
     LSTEQ = 386,
     LSTQ = 387
   };
#endif
/* Tokens.  */
#define WITH 258
#define LETREC 259
#define MIX 260
#define SPLIT 261
#define SEQ 262
#define PAR 263
#define REC 264
#define NE 265
#define GE 266
#define GT 267
#define EQ 268
#define LE 269
#define LT 270
#define OR 271
#define SUB 272
#define ADD 273
#define RSH 274
#define LSH 275
#define XOR 276
#define AND 277
#define MOD 278
#define DIV 279
#define MUL 280
#define POWOP 281
#define FDELAY 282
#define DELAY1 283
#define DOT 284
#define APPL 285
#define MEM 286
#define PREFIX 287
#define INTCAST 288
#define FLOATCAST 289
#define PARAMETER 290
#define FFUNCTION 291
#define FCONSTANT 292
#define FVARIABLE 293
#define BUTTON 294
#define CHECKBOX 295
#define VSLIDER 296
#define HSLIDER 297
#define NENTRY 298
#define VGROUP 299
#define HGROUP 300
#define TGROUP 301
#define HBARGRAPH 302
#define VBARGRAPH 303
#define SOUNDFILE 304
#define ATTACH 305
#define ACOS 306
#define ASIN 307
#define ATAN 308
#define ATAN2 309
#define COS 310
#define SIN 311
#define TAN 312
#define EXP 313
#define LOG 314
#define LOG10 315
#define POWFUN 316
#define SQRT 317
#define ABS 318
#define MIN 319
#define MAX 320
#define FMOD 321
#define REMAINDER 322
#define FLOOR 323
#define CEIL 324
#define RINT 325
#define RDTBL 326
#define RWTBL 327
#define SELECT2 328
#define SELECT3 329
#define INT 330
#define FLOAT 331
#define LAMBDA 332
#define WIRE 333
#define CUT 334
#define ENDDEF 335
#define VIRG 336
#define LPAR 337
#define RPAR 338
#define LBRAQ 339
#define RBRAQ 340
#define LCROC 341
#define RCROC 342
#define DEF 343
#define IMPORT 344
#define COMPONENT 345
#define LIBRARY 346
#define ENVIRONMENT 347
#define WAVEFORM 348
#define ROUTE 349
#define ENABLE 350
#define CONTROL 351
#define IPAR 352
#define ISEQ 353
#define ISUM 354
#define IPROD 355
#define INPUTS 356
#define OUTPUTS 357
#define STRING 358
#define FSTRING 359
#define IDENT 360
#define EXTRA 361
#define DECLARE 362
#define CASE 363
#define ARROW 364
#define FLOATMODE 365
#define DOUBLEMODE 366
#define QUADMODE 367
#define BDOC 368
#define EDOC 369
#define BEQN 370
#define EEQN 371
#define BDGM 372
#define EDGM 373
#define BLST 374
#define ELST 375
#define BMETADATA 376
#define EMETADATA 377
#define DOCCHAR 378
#define NOTICE 379
#define LISTING 380
#define LSTTRUE 381
#define LSTFALSE 382
#define LSTDEPENDENCIES 383
#define LSTMDOCTAGS 384
#define LSTDISTRIBUTED 385
#define LSTEQ 386
#define LSTQ 387




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 81 "faustparser.y"
{
	CTree* 	exp;
	char* str;
	string* cppstr;
	bool b;
	int numvariant;
}
/* Line 1529 of yacc.c.  */
#line 321 "faustparser.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

