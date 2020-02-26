/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 5 "faustparser.y"


#include "global.hh"

#include "tree.hh"
#include "xtended.hh"
#include "boxes.hh"
#include "prim2.hh"
#include "signals.hh"
#include "errormsg.hh"
#include "sourcereader.hh"
#include "doc.hh"
#include "ppbox.hh"

#include <string>
#include <list>

#define YYDEBUG 1
#define YYERROR_VERBOSE 1
#define YYMAXDEPTH	100000
	
using namespace std;

extern char* 		yytext;
extern const char* 	yyfilename;
extern int 			yylineno;
extern int 			yyerr;

int yylex();

//----------------------------------------------------------
// unquote() : remove enclosing quotes and carriage return 
// characters from string. Returns a Tree 
//----------------------------------------------------------
inline char replaceCR(char c)
{
	return (c!='\n') ? c : ' ';
}

// A defintion is accepted if the prefixset is empty or if
// the current float precision is member of the prefix set
bool acceptdefinition(int prefixset)
{
	int precisions[] = {0, 1, 2, 4};
	return (prefixset==0) || (prefixset & precisions[gGlobal->gFloatSize]);
}

Tree unquote(char* str)
{
    size_t size = strlen(str) + 1;
    
    //-----------copy unquoted filename-------------
    char* buf = (char*)alloca(size);
    size_t j=0;

    if (str[0] == '"') {
        //it is a quoted string, we remove the quotes
        for (size_t i=1; j<size-1 && str[i];) {
            buf[j++] = replaceCR(str[i++]);
        }
        // remove last quote
        if (j>0) buf[j-1] = 0;
    } else {
        for (size_t i=0; j<size-1 && str[i];) {
            buf[j++] = replaceCR(str[i++]);
        }
    }
    buf[j] = 0;

    return tree(buf);
    //----------------------------------------------
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

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
/* Line 193 of yacc.c.  */
#line 443 "faustparser.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 456 "faustparser.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   742

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  133
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  224
/* YYNRULES -- Number of states.  */
#define YYNSTATES  489

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   387

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    15,    16,    19,
      21,    23,    25,    26,    29,    31,    35,    37,    39,    42,
      45,    48,    51,    57,    62,    68,    70,    74,    75,    78,
      80,    82,    84,    86,    88,    90,    91,    94,    98,   102,
     104,   108,   109,   112,   118,   124,   130,   132,   134,   138,
     146,   151,   154,   159,   162,   164,   167,   169,   173,   179,
     185,   189,   193,   197,   201,   205,   207,   211,   215,   219,
     223,   227,   231,   235,   238,   242,   246,   250,   254,   258,
     262,   266,   270,   274,   278,   282,   286,   291,   296,   298,
     300,   302,   305,   308,   311,   314,   316,   318,   320,   322,
     324,   326,   328,   330,   332,   334,   336,   338,   340,   342,
     344,   346,   348,   350,   352,   354,   356,   358,   360,   362,
     364,   366,   368,   370,   372,   374,   376,   378,   380,   382,
     384,   386,   388,   390,   392,   394,   396,   398,   400,   402,
     404,   406,   408,   410,   412,   414,   416,   418,   421,   425,
     434,   439,   441,   443,   445,   447,   452,   457,   462,   467,
     476,   478,   480,   482,   484,   486,   488,   490,   492,   494,
     496,   498,   500,   502,   504,   506,   508,   510,   512,   514,
     516,   520,   524,   528,   532,   536,   538,   540,   542,   544,
     546,   555,   564,   573,   582,   587,   592,   601,   609,   617,
     624,   629,   634,   647,   660,   673,   680,   687,   694,   703,
     712,   719,   725,   733,   743,   748,   755,   764,   766,   768,
     772,   774,   777,   784,   786
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     134,     0,    -1,   135,    -1,    -1,   135,   137,   142,    -1,
      -1,   136,   137,   154,    -1,    -1,   137,   138,    -1,   110,
      -1,   111,    -1,   112,    -1,    -1,   139,   155,    -1,   141,
      -1,   140,     8,   141,    -1,    75,    -1,    76,    -1,    18,
      75,    -1,    18,    76,    -1,    17,    75,    -1,    17,    76,
      -1,    89,    82,   167,    83,    80,    -1,   107,   163,   166,
      80,    -1,   107,   163,   163,   166,    80,    -1,   154,    -1,
     113,   143,   114,    -1,    -1,   143,   144,    -1,   145,    -1,
     146,    -1,   147,    -1,   148,    -1,   149,    -1,   153,    -1,
      -1,   145,   123,    -1,   115,   159,   116,    -1,   117,   159,
     118,    -1,   124,    -1,   119,   150,   120,    -1,    -1,   150,
     151,    -1,   128,   131,   132,   152,   132,    -1,   129,   131,
     132,   152,   132,    -1,   130,   131,   132,   152,   132,    -1,
     126,    -1,   127,    -1,   121,   163,   122,    -1,   156,    82,
     164,    83,    88,   159,    80,    -1,   156,    88,   159,    80,
      -1,     1,    80,    -1,   157,    88,   159,    80,    -1,     1,
      80,    -1,   162,    -1,    28,   162,    -1,   162,    -1,   158,
       8,   162,    -1,   159,     3,    84,   136,    85,    -1,   159,
       4,    84,   139,    85,    -1,   159,     8,   159,    -1,   159,
       7,   159,    -1,   159,     6,   159,    -1,   159,     5,   159,
      -1,   159,     9,   159,    -1,   160,    -1,   160,    18,   160,
      -1,   160,    17,   160,    -1,   160,    25,   160,    -1,   160,
      24,   160,    -1,   160,    23,   160,    -1,   160,    26,   160,
      -1,   160,    27,   160,    -1,   160,    28,    -1,   160,    29,
     162,    -1,   160,    22,   160,    -1,   160,    16,   160,    -1,
     160,    21,   160,    -1,   160,    20,   160,    -1,   160,    19,
     160,    -1,   160,    15,   160,    -1,   160,    14,   160,    -1,
     160,    12,   160,    -1,   160,    11,   160,    -1,   160,    13,
     160,    -1,   160,    10,   160,    -1,   160,    82,   164,    83,
      -1,   160,    86,   136,    87,    -1,   161,    -1,    75,    -1,
      76,    -1,    18,    75,    -1,    18,    76,    -1,    17,    75,
      -1,    17,    76,    -1,    78,    -1,    79,    -1,    31,    -1,
      32,    -1,    33,    -1,    34,    -1,    18,    -1,    17,    -1,
      25,    -1,    24,    -1,    23,    -1,    27,    -1,    22,    -1,
      16,    -1,    21,    -1,    20,    -1,    19,    -1,    15,    -1,
      14,    -1,    12,    -1,    11,    -1,    13,    -1,    10,    -1,
      50,    -1,    95,    -1,    96,    -1,    51,    -1,    52,    -1,
      53,    -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,
      58,    -1,    59,    -1,    60,    -1,    26,    -1,    61,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
      67,    -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,   162,    -1,    17,   162,
      -1,    82,   159,    83,    -1,    77,    82,   158,    83,    29,
      82,   159,    83,    -1,   108,    84,   193,    85,    -1,   175,
      -1,   176,    -1,   177,    -1,   178,    -1,    90,    82,   167,
      83,    -1,    91,    82,   167,    83,    -1,    92,    84,   135,
      85,    -1,    93,    84,   140,    85,    -1,    94,    82,   165,
       8,   165,     8,   159,    83,    -1,   179,    -1,   180,    -1,
     181,    -1,   182,    -1,   183,    -1,   184,    -1,   185,    -1,
     186,    -1,   187,    -1,   188,    -1,   189,    -1,   169,    -1,
     170,    -1,   171,    -1,   172,    -1,   173,    -1,   174,    -1,
     105,    -1,   105,    -1,   165,    -1,   164,     8,   165,    -1,
     165,     7,   165,    -1,   165,     6,   165,    -1,   165,     5,
     165,    -1,   165,     9,   165,    -1,   160,    -1,   103,    -1,
     103,    -1,   103,    -1,   104,    -1,    97,    82,   162,     8,
     165,     8,   159,    83,    -1,    98,    82,   162,     8,   165,
       8,   159,    83,    -1,    99,    82,   162,     8,   165,     8,
     159,    83,    -1,   100,    82,   162,     8,   165,     8,   159,
      83,    -1,   101,    82,   159,    83,    -1,   102,    82,   159,
      83,    -1,    36,    82,   190,     8,   168,     8,   166,    83,
      -1,    37,    82,   195,   163,     8,   168,    83,    -1,    38,
      82,   195,   163,     8,   168,    83,    -1,    35,    82,   167,
       8,   165,    83,    -1,    39,    82,   167,    83,    -1,    40,
      82,   167,    83,    -1,    41,    82,   167,     8,   165,     8,
     165,     8,   165,     8,   165,    83,    -1,    42,    82,   167,
       8,   165,     8,   165,     8,   165,     8,   165,    83,    -1,
      43,    82,   167,     8,   165,     8,   165,     8,   165,     8,
     165,    83,    -1,    44,    82,   167,     8,   159,    83,    -1,
      45,    82,   167,     8,   159,    83,    -1,    46,    82,   167,
       8,   159,    83,    -1,    48,    82,   167,     8,   165,     8,
     165,    83,    -1,    47,    82,   167,     8,   165,     8,   165,
      83,    -1,    49,    82,   167,     8,   165,    83,    -1,   195,
     191,    82,   192,    83,    -1,   195,   191,    16,   191,    82,
     192,    83,    -1,   195,   191,    16,   191,    16,   191,    82,
     192,    83,    -1,   195,   191,    82,    83,    -1,   195,   191,
      16,   191,    82,    83,    -1,   195,   191,    16,   191,    16,
     191,    82,    83,    -1,   105,    -1,   195,    -1,   192,     8,
     195,    -1,   194,    -1,   193,   194,    -1,    82,   164,    83,
     109,   159,    80,    -1,    33,    -1,    34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   339,   339,   342,   343,   346,   347,   350,   351,   354,
     355,   356,   360,   361,   368,   369,   372,   373,   374,   375,
     376,   377,   381,   382,   383,   384,   385,   388,   389,   392,
     393,   394,   395,   396,   397,   400,   401,   404,   407,   410,
     413,   416,   417,   420,   421,   422,   425,   426,   429,   432,
     433,   434,   437,   438,   441,   444,   447,   448,   451,   452,
     453,   454,   455,   456,   457,   458,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   471,   472,   473,   475,   476,
     478,   479,   480,   481,   482,   483,   485,   486,   488,   491,
     492,   494,   495,   497,   498,   500,   501,   503,   504,   506,
     507,   509,   510,   511,   512,   513,   514,   516,   517,   518,
     520,   521,   523,   524,   525,   526,   527,   528,   530,   531,
     532,   535,   536,   537,   538,   539,   540,   541,   543,   544,
     545,   546,   547,   548,   550,   551,   552,   554,   555,   557,
     558,   559,   562,   563,   565,   566,   568,   569,   571,   572,
     575,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
     596,   598,   599,   600,   601,   603,   604,   609,   612,   617,
     618,   621,   622,   623,   624,   625,   628,   631,   634,   635,
     640,   644,   648,   652,   657,   660,   667,   671,   674,   679,
     684,   687,   690,   693,   696,   699,   702,   705,   709,   712,
     715,   722,   723,   724,   726,   727,   728,   731,   734,   735,
     738,   739,   742,   746,   747
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WITH", "LETREC", "MIX", "SPLIT", "SEQ",
  "PAR", "REC", "NE", "GE", "GT", "EQ", "LE", "LT", "OR", "SUB", "ADD",
  "RSH", "LSH", "XOR", "AND", "MOD", "DIV", "MUL", "POWOP", "FDELAY",
  "DELAY1", "DOT", "APPL", "MEM", "PREFIX", "INTCAST", "FLOATCAST",
  "PARAMETER", "FFUNCTION", "FCONSTANT", "FVARIABLE", "BUTTON", "CHECKBOX",
  "VSLIDER", "HSLIDER", "NENTRY", "VGROUP", "HGROUP", "TGROUP",
  "HBARGRAPH", "VBARGRAPH", "SOUNDFILE", "ATTACH", "ACOS", "ASIN", "ATAN",
  "ATAN2", "COS", "SIN", "TAN", "EXP", "LOG", "LOG10", "POWFUN", "SQRT",
  "ABS", "MIN", "MAX", "FMOD", "REMAINDER", "FLOOR", "CEIL", "RINT",
  "RDTBL", "RWTBL", "SELECT2", "SELECT3", "INT", "FLOAT", "LAMBDA", "WIRE",
  "CUT", "ENDDEF", "VIRG", "LPAR", "RPAR", "LBRAQ", "RBRAQ", "LCROC",
  "RCROC", "DEF", "IMPORT", "COMPONENT", "LIBRARY", "ENVIRONMENT",
  "WAVEFORM", "ROUTE", "ENABLE", "CONTROL", "IPAR", "ISEQ", "ISUM",
  "IPROD", "INPUTS", "OUTPUTS", "STRING", "FSTRING", "IDENT", "EXTRA",
  "DECLARE", "CASE", "ARROW", "FLOATMODE", "DOUBLEMODE", "QUADMODE",
  "BDOC", "EDOC", "BEQN", "EEQN", "BDGM", "EDGM", "BLST", "ELST",
  "BMETADATA", "EMETADATA", "DOCCHAR", "NOTICE", "LISTING", "LSTTRUE",
  "LSTFALSE", "LSTDEPENDENCIES", "LSTMDOCTAGS", "LSTDISTRIBUTED", "LSTEQ",
  "LSTQ", "$accept", "program", "stmtlist", "deflist", "variantlist",
  "variant", "reclist", "vallist", "number", "statement", "doc", "docelem",
  "doctxt", "doceqn", "docdgm", "docntc", "doclst", "lstattrlist",
  "lstattrdef", "lstattrval", "docmtd", "definition", "recinition",
  "defname", "recname", "params", "expression", "infixexp", "primitive",
  "ident", "name", "arglist", "argument", "string", "uqstring", "fstring",
  "fpar", "fseq", "fsum", "fprod", "finputs", "foutputs", "ffunction",
  "fconst", "fvariable", "parameter", "button", "checkbox", "vslider",
  "hslider", "nentry", "vgroup", "hgroup", "tgroup", "vbargraph",
  "hbargraph", "soundfile", "signature", "fun", "typelist", "rulelist",
  "rule", "type", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   133,   134,   135,   135,   136,   136,   137,   137,   138,
     138,   138,   139,   139,   140,   140,   141,   141,   141,   141,
     141,   141,   142,   142,   142,   142,   142,   143,   143,   144,
     144,   144,   144,   144,   144,   145,   145,   146,   147,   148,
     149,   150,   150,   151,   151,   151,   152,   152,   153,   154,
     154,   154,   155,   155,   156,   157,   158,   158,   159,   159,
     159,   159,   159,   159,   159,   159,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   162,   163,   164,
     164,   165,   165,   165,   165,   165,   166,   167,   168,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   190,   190,   190,   190,   190,   191,   192,   192,
     193,   193,   194,   195,   195
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     3,     0,     2,     1,
       1,     1,     0,     2,     1,     3,     1,     1,     2,     2,
       2,     2,     5,     4,     5,     1,     3,     0,     2,     1,
       1,     1,     1,     1,     1,     0,     2,     3,     3,     1,
       3,     0,     2,     5,     5,     5,     1,     1,     3,     7,
       4,     2,     4,     2,     1,     2,     1,     3,     5,     5,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     8,
       4,     1,     1,     1,     1,     4,     4,     4,     4,     8,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       8,     8,     8,     8,     4,     4,     8,     7,     7,     6,
       4,     4,    12,    12,    12,     6,     6,     6,     8,     8,
       6,     5,     7,     9,     4,     6,     8,     1,     1,     3,
       1,     2,     6,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     7,     1,     0,     0,     0,   177,     0,     9,
      10,    11,    27,     8,     4,    25,     0,    54,    51,     0,
     178,     0,    35,     0,     0,   187,     0,   186,     0,     0,
      26,     0,     0,    41,     0,    39,    28,    29,    30,    31,
      32,    33,    34,   117,   115,   114,   116,   113,   112,   108,
     102,   101,   111,   110,   109,   107,   105,   104,   103,   131,
     106,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,    89,    90,     0,    95,    96,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,     0,     0,   185,    88,   146,     0,   179,
     171,   172,   173,   174,   175,   176,   151,   152,   153,   154,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,     0,    65,     0,     0,    23,     0,     0,     0,     0,
      36,    93,    94,   147,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    22,    24,    37,    38,    40,     0,     0,     0,    42,
      48,     0,   223,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,   148,     0,     0,     7,     0,     0,    16,    17,     0,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     220,    85,    83,    82,    84,    81,    80,    76,    67,    66,
      79,    78,    77,    75,    70,    69,    68,    71,    72,    74,
       0,     7,   180,     0,   183,   182,   181,   184,     5,    12,
      63,    62,    61,    60,    64,     0,     0,     0,     0,     0,
     217,     0,     0,     0,   200,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   155,   156,   157,
      20,    21,    18,    19,     0,   158,     0,     0,     0,     0,
       0,   194,   195,     0,   150,   221,    86,    87,     0,     0,
       7,     0,     0,     0,     0,     0,   188,   189,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,    15,     0,     0,     0,     0,     0,
       0,     6,    49,    58,     0,     0,    59,    13,     0,    46,
      47,     0,     0,     0,   199,     0,     0,   214,     0,   218,
       0,     0,     0,     0,     0,   205,   206,   207,     0,     0,
     210,     0,     0,     0,     0,     0,     0,     0,    53,    55,
       0,    43,    44,    45,     0,     0,     0,     0,   211,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   196,     0,   215,     0,   219,     0,
       0,     0,   209,   208,   149,   159,   190,   191,   192,   193,
     222,    52,     0,   212,     0,     0,     0,   216,     0,     0,
       0,     0,   213,     0,     0,     0,   202,   203,   204
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   301,     4,    13,   361,   269,   270,    14,
      22,    36,    37,    38,    39,    40,    41,   158,   239,   401,
      42,    15,   397,    16,   398,   259,   151,   125,   126,   127,
      21,   128,   129,    29,    26,   368,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   244,   321,   408,
     279,   280,   409
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -370
static const yytype_int16 yypact[] =
{
    -370,    69,   113,  -370,     5,   -55,   -33,  -370,   -41,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,   -61,  -370,  -370,    42,
    -370,     6,   249,   418,   418,  -370,    36,  -370,    57,    86,
    -370,   418,   418,  -370,   -41,  -370,  -370,    75,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
     254,    64,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,    88,   118,   135,   149,   186,
     190,   220,   229,   231,   243,   253,   262,   270,   274,   276,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,   280,  -370,  -370,
     418,   285,   290,   239,   257,   295,  -370,  -370,   323,   325,
     334,   335,   343,   344,   362,   539,  -370,  -370,     1,   129,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,   498,   539,   294,   329,  -370,    35,     8,   217,   148,
    -370,  -370,  -370,  -370,  -370,  -370,    42,   306,   306,   306,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,   342,    47,    42,    42,  -370,   202,   418,   342,   342,
     342,   342,   418,   418,   366,   418,   418,   418,   418,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,  -370,   342,   418,  -370,   418,   410,   418,
     418,   418,   418,   415,   437,   418,   418,   418,   418,   418,
    -370,  -370,  -370,  -370,  -370,  -370,   391,   393,   394,  -370,
    -370,   540,  -370,  -370,   566,   470,   -41,   -41,   493,   494,
     602,   609,   611,   612,   615,   616,   629,   630,   633,    16,
    -370,  -370,   559,   560,   561,   279,   318,  -370,  -370,    11,
    -370,   374,   636,   639,   640,   647,    54,    67,   418,   136,
    -370,   563,   563,   563,   563,   563,   563,   574,   574,   574,
     322,   322,   322,   322,   322,   322,   322,    73,   275,  -370,
      22,   570,   129,   418,   129,   129,   137,  -370,  -370,  -370,
     382,   382,   116,    89,  -370,   526,   527,   589,   418,   281,
    -370,    32,   714,   715,  -370,  -370,   418,   418,   418,   418,
     418,   418,   418,   418,   418,   342,   695,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,   202,  -370,   418,   418,   418,   418,
     418,  -370,  -370,    23,  -370,  -370,  -370,  -370,    17,   524,
     641,    19,   269,   269,   269,   147,  -370,  -370,   717,   470,
     259,   281,   281,   564,   600,   607,    74,    84,   188,   645,
     656,   260,  -370,   646,  -370,   661,   666,   671,   676,   681,
     618,  -370,  -370,  -370,   649,   342,  -370,  -370,   642,  -370,
    -370,   599,   601,   603,  -370,    57,    49,  -370,    25,  -370,
     651,   653,   418,   418,   418,  -370,  -370,  -370,   418,   418,
    -370,   418,   418,   418,   418,   418,   418,   418,  -370,  -370,
     418,  -370,  -370,  -370,   654,   470,   286,   306,  -370,  -370,
    -370,   686,   691,   696,   282,   292,   207,   234,   241,   248,
     255,   277,   531,   538,  -370,   650,  -370,    37,  -370,   418,
     418,   418,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,   288,  -370,   701,   706,   711,  -370,    38,   418,
     418,   418,  -370,   303,   309,   327,  -370,  -370,  -370
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -370,  -370,   553,   431,  -275,  -370,  -370,  -370,   396,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,    48,
    -370,   383,  -370,  -370,  -370,  -370,    -3,   -24,  -370,    18,
     -11,  -120,  -185,   -27,   456,    43,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -303,  -369,
    -370,   463,  -164
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
     152,   154,   271,   245,   246,   247,     5,   152,   152,   217,
      28,   223,   224,   225,   226,   227,   228,   229,     5,   344,
     394,    23,    17,   159,   335,    18,   358,    24,   156,   157,
     217,   217,   302,   437,   304,   305,   306,   307,   223,   224,
     225,   226,   227,   228,   229,   437,   437,   395,   369,    19,
     223,   224,   225,   226,   227,   228,   229,   223,   224,   225,
     226,   227,   228,   229,    20,   435,   406,   457,   163,     3,
     223,   224,   225,   226,   227,   228,   229,   223,   224,   225,
     226,   227,   228,   229,   218,   358,   152,   223,   224,   225,
     226,   227,   228,   229,     6,   300,   345,   228,   229,   336,
     212,   213,   214,   478,   396,   356,   390,   182,   438,    27,
       7,    20,     8,    -2,   370,     9,    10,    11,    12,   153,
     473,   482,     7,   227,   228,   229,   234,     9,    10,    11,
     261,   436,   455,   365,   219,   220,   221,   351,   222,   164,
     165,   373,   374,   375,   221,    25,   222,   379,   380,   381,
     352,   233,   219,   220,   221,   215,   222,   415,   353,   216,
      27,   385,   386,   387,   388,   389,   155,   416,   152,   152,
     166,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   276,
     277,   223,   224,   225,   226,   227,   228,   229,   160,   260,
     167,   152,   152,   152,   152,   152,   272,   273,   274,   275,
     223,   224,   225,   226,   227,   228,   229,   168,   278,   265,
     266,   354,   310,   311,   312,   313,   314,   441,   442,   443,
     404,   169,   299,   444,   445,   322,   323,   223,   224,   225,
     226,   227,   228,   229,   223,   224,   225,   226,   227,   228,
     229,   223,   224,   225,   226,   227,   228,   229,   223,   224,
     225,   226,   227,   228,   229,   219,   220,   221,   170,   222,
     240,   417,   171,   458,   474,   475,   476,   267,   268,   152,
     223,   224,   225,   226,   227,   228,   229,   219,   220,   221,
     464,   222,   242,   243,   483,   484,   485,   219,   220,   221,
     359,   222,   172,   213,   214,   152,   152,   152,   219,   220,
     221,   173,   222,   174,   219,   220,   221,   465,   222,   242,
     243,   242,   243,   185,   466,   175,   376,   377,   378,   161,
     162,   467,   219,   220,   221,   176,   222,   235,   468,   242,
     243,   186,   407,   420,   177,   236,   237,   238,   211,   212,
     213,   214,   178,   382,   340,   341,   179,   215,   180,     7,
     469,   216,   181,    30,    31,   462,    32,   183,    33,   456,
      34,   477,   184,    35,   231,   463,    17,   187,   434,   219,
     220,   221,   346,   222,   366,   367,   486,   225,   226,   227,
     228,   229,   487,   342,   343,   399,   400,   152,   152,   152,
     152,   152,   152,   152,   215,   188,   152,   189,   216,   232,
     488,   402,   403,   429,   410,   411,   190,   191,   446,   447,
     448,   449,   450,   451,   452,   192,   193,   453,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,   194,     7,   278,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   303,   308,
     110,   223,   224,   225,   226,   227,   228,   229,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   309,   315,     7,   316,   317,   124,   223,   224,   225,
     226,   227,   228,   229,   223,   224,   225,   226,   227,   228,
     229,   223,   224,   225,   226,   227,   228,   229,   318,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   219,
     220,   221,   412,   222,   319,   320,   324,   325,   230,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   392,   219,   220,   221,   413,   222,
     326,   470,   219,   220,   221,   414,   222,   327,   471,   328,
     329,   215,   241,   330,   331,   216,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   332,   333,   262,
     263,   334,   337,   338,   347,   215,   339,   348,   349,   216,
     219,   220,   221,   418,   222,   350,   215,   357,   362,   363,
     216,   219,   220,   221,   419,   222,   219,   220,   221,   422,
     222,   219,   220,   221,   423,   222,   219,   220,   221,   424,
     222,   219,   220,   221,   425,   222,   219,   220,   221,   426,
     222,   219,   220,   221,   459,   222,   219,   220,   221,   460,
     222,   219,   220,   221,   461,   222,   219,   220,   221,   479,
     222,   219,   220,   221,   480,   222,   219,   220,   221,   481,
     222,   364,   371,   372,   383,   405,   393,   427,   421,   428,
     430,   431,   472,   432,   439,   433,   440,   454,   264,   360,
     384,   391,   355
};

static const yytype_uint16 yycheck[] =
{
      24,    28,   187,   167,   168,   169,     1,    31,    32,     8,
      21,     3,     4,     5,     6,     7,     8,     9,     1,     8,
       1,    82,     4,    34,     8,    80,   301,    88,    31,    32,
       8,     8,   217,     8,   219,   220,   221,   222,     3,     4,
       5,     6,     7,     8,     9,     8,     8,    28,    16,    82,
       3,     4,     5,     6,     7,     8,     9,     3,     4,     5,
       6,     7,     8,     9,   105,    16,   369,   436,    50,     0,
       3,     4,     5,     6,     7,     8,     9,     3,     4,     5,
       6,     7,     8,     9,    83,   360,   110,     3,     4,     5,
       6,     7,     8,     9,    89,   215,    85,     8,     9,    83,
      27,    28,    29,   472,    85,    83,    83,   110,    83,   103,
     105,   105,   107,     0,    82,   110,   111,   112,   113,    83,
      83,    83,   105,     7,     8,     9,   118,   110,   111,   112,
      83,    82,   435,   318,     5,     6,     7,    83,     9,    75,
      76,   326,   327,   328,     7,   103,     9,   332,   333,   334,
      83,   116,     5,     6,     7,    82,     9,    83,   278,    86,
     103,   346,   347,   348,   349,   350,    80,    83,   192,   193,
      82,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   192,
     193,     3,     4,     5,     6,     7,     8,     9,   123,   181,
      82,   225,   226,   227,   228,   229,   188,   189,   190,   191,
       3,     4,     5,     6,     7,     8,     9,    82,    82,    17,
      18,    85,   225,   226,   227,   228,   229,   412,   413,   414,
      83,    82,   214,   418,   419,   246,   247,     3,     4,     5,
       6,     7,     8,     9,     3,     4,     5,     6,     7,     8,
       9,     3,     4,     5,     6,     7,     8,     9,     3,     4,
       5,     6,     7,     8,     9,     5,     6,     7,    82,     9,
     122,    83,    82,   437,   459,   460,   461,    75,    76,   303,
       3,     4,     5,     6,     7,     8,     9,     5,     6,     7,
      83,     9,    33,    34,   479,   480,   481,     5,     6,     7,
     303,     9,    82,    28,    29,   329,   330,   331,     5,     6,
       7,    82,     9,    82,     5,     6,     7,    83,     9,    33,
      34,    33,    34,    84,    83,    82,   329,   330,   331,    75,
      76,    83,     5,     6,     7,    82,     9,   120,    83,    33,
      34,    84,    83,    83,    82,   128,   129,   130,    26,    27,
      28,    29,    82,   335,    75,    76,    82,    82,    82,   105,
      83,    86,    82,   114,   115,    83,   117,    82,   119,    83,
     121,    83,    82,   124,    80,    83,   358,    82,   405,     5,
       6,     7,     8,     9,   103,   104,    83,     5,     6,     7,
       8,     9,    83,    75,    76,   126,   127,   421,   422,   423,
     424,   425,   426,   427,    82,    82,   430,    82,    86,    80,
      83,   363,   364,   395,   371,   372,    82,    82,   421,   422,
     423,   424,   425,   426,   427,    82,    82,   430,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    84,   105,    82,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    88,    84,
      82,     3,     4,     5,     6,     7,     8,     9,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    84,   131,   105,   131,   131,   108,     3,     4,     5,
       6,     7,     8,     9,     3,     4,     5,     6,     7,     8,
       9,     3,     4,     5,     6,     7,     8,     9,     8,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     5,
       6,     7,     8,     9,     8,   105,    83,    83,    80,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    80,     5,     6,     7,     8,     9,
       8,    80,     5,     6,     7,     8,     9,     8,    80,     8,
       8,    82,   166,     8,     8,    86,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,     8,     8,   183,
     184,     8,    83,    83,     8,    82,    85,     8,     8,    86,
       5,     6,     7,     8,     9,     8,    82,    87,   132,   132,
      86,     5,     6,     7,     8,     9,     5,     6,     7,     8,
       9,     5,     6,     7,     8,     9,     5,     6,     7,     8,
       9,     5,     6,     7,     8,     9,     5,     6,     7,     8,
       9,     5,     6,     7,     8,     9,     5,     6,     7,     8,
       9,     5,     6,     7,     8,     9,     5,     6,     7,     8,
       9,     5,     6,     7,     8,     9,     5,     6,     7,     8,
       9,   132,     8,     8,    29,     8,    85,   109,    82,    80,
      88,   132,    82,   132,    83,   132,    83,    83,   185,   308,
     344,   358,   279
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   134,   135,     0,   137,     1,    89,   105,   107,   110,
     111,   112,   113,   138,   142,   154,   156,   162,    80,    82,
     105,   163,   143,    82,    88,   103,   167,   103,   163,   166,
     114,   115,   117,   119,   121,   124,   144,   145,   146,   147,
     148,   149,   153,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      82,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   108,   160,   161,   162,   164,   165,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   159,   160,    83,   166,    80,   159,   159,   150,   163,
     123,    75,    76,   162,    75,    76,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,   159,    82,    82,    84,    84,    82,    82,    82,
      82,    82,    82,    82,    84,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    82,    86,     8,    83,     5,
       6,     7,     9,     3,     4,     5,     6,     7,     8,     9,
      80,    80,    80,   116,   118,   120,   128,   129,   130,   151,
     122,   167,    33,    34,   190,   195,   195,   195,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   158,
     162,    83,   167,   167,   135,    17,    18,    75,    76,   140,
     141,   165,   162,   162,   162,   162,   159,   159,    82,   193,
     194,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   162,
     164,   136,   165,    88,   165,   165,   165,   165,    84,    84,
     159,   159,   159,   159,   159,   131,   131,   131,     8,     8,
     105,   191,   163,   163,    83,    83,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,    83,    83,    83,    85,
      75,    76,    75,    76,     8,    85,     8,     8,     8,     8,
       8,    83,    83,   164,    85,   194,    83,    87,   137,   159,
     136,   139,   132,   132,   132,   165,   103,   104,   168,    16,
      82,     8,     8,   165,   165,   165,   159,   159,   159,   165,
     165,   165,   162,    29,   141,   165,   165,   165,   165,   165,
      83,   154,    80,    85,     1,    28,    85,   155,   157,   126,
     127,   152,   152,   152,    83,     8,   191,    83,   192,   195,
     168,   168,     8,     8,     8,    83,    83,    83,     8,     8,
      83,    82,     8,     8,     8,     8,     8,   109,    80,   162,
      88,   132,   132,   132,   166,    16,    82,     8,    83,    83,
      83,   165,   165,   165,   165,   165,   159,   159,   159,   159,
     159,   159,   159,   159,    83,   191,    83,   192,   195,     8,
       8,     8,    83,    83,    83,    83,    83,    83,    83,    83,
      80,    80,    82,    83,   165,   165,   165,    83,   192,     8,
       8,     8,    83,   165,   165,   165,    83,    83,    83
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 339 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); gGlobal->gResult = formatDefinitions((yyval.exp)); ;}
    break;

  case 3:
#line 342 "faustparser.y"
    { (yyval.exp) = gGlobal->nil; ;}
    break;

  case 4:
#line 343 "faustparser.y"
    { if (acceptdefinition((yyvsp[(2) - (3)].numvariant))) (yyval.exp) = cons ((yyvsp[(3) - (3)].exp),(yyvsp[(1) - (3)].exp)); else (yyval.exp)=(yyvsp[(1) - (3)].exp); ;}
    break;

  case 5:
#line 346 "faustparser.y"
    { (yyval.exp) = gGlobal->nil; ;}
    break;

  case 6:
#line 347 "faustparser.y"
    { if (acceptdefinition((yyvsp[(2) - (3)].numvariant))) (yyval.exp) = cons ((yyvsp[(3) - (3)].exp),(yyvsp[(1) - (3)].exp)); else (yyval.exp)=(yyvsp[(1) - (3)].exp);;}
    break;

  case 7:
#line 350 "faustparser.y"
    { (yyval.numvariant) = 0; ;}
    break;

  case 8:
#line 351 "faustparser.y"
    { (yyval.numvariant) = (yyvsp[(1) - (2)].numvariant) | (yyvsp[(2) - (2)].numvariant);;}
    break;

  case 9:
#line 354 "faustparser.y"
    { (yyval.numvariant) = 1;;}
    break;

  case 10:
#line 355 "faustparser.y"
    { (yyval.numvariant) = 2;;}
    break;

  case 11:
#line 356 "faustparser.y"
    { (yyval.numvariant) = 4;;}
    break;

  case 12:
#line 360 "faustparser.y"
    { (yyval.exp) = gGlobal->nil; ;}
    break;

  case 13:
#line 361 "faustparser.y"
    { (yyval.exp) = cons ((yyvsp[(2) - (2)].exp),(yyvsp[(1) - (2)].exp)); ;}
    break;

  case 14:
#line 368 "faustparser.y"
    { gGlobal->gWaveForm.push_back((yyvsp[(1) - (1)].exp)); ;}
    break;

  case 15:
#line 369 "faustparser.y"
    { gGlobal->gWaveForm.push_back((yyvsp[(3) - (3)].exp)); ;}
    break;

  case 16:
#line 372 "faustparser.y"
    { (yyval.exp) = boxInt(atoi(yytext)); ;}
    break;

  case 17:
#line 373 "faustparser.y"
    { (yyval.exp) = boxReal(atof(yytext)); ;}
    break;

  case 18:
#line 374 "faustparser.y"
    { (yyval.exp) = boxInt (atoi(yytext)); ;}
    break;

  case 19:
#line 375 "faustparser.y"
    { (yyval.exp) = boxReal(atof(yytext)); ;}
    break;

  case 20:
#line 376 "faustparser.y"
    { (yyval.exp) = boxInt ( -atoi(yytext) ); ;}
    break;

  case 21:
#line 377 "faustparser.y"
    { (yyval.exp) = boxReal( -atof(yytext) ); ;}
    break;

  case 22:
#line 381 "faustparser.y"
    { (yyval.exp) = importFile((yyvsp[(3) - (5)].exp)); ;}
    break;

  case 23:
#line 382 "faustparser.y"
    { declareMetadata((yyvsp[(2) - (4)].exp),(yyvsp[(3) - (4)].exp)); (yyval.exp) = gGlobal->nil; ;}
    break;

  case 24:
#line 383 "faustparser.y"
    { declareDefinitionMetadata((yyvsp[(2) - (5)].exp),(yyvsp[(3) - (5)].exp),(yyvsp[(4) - (5)].exp)); (yyval.exp) = gGlobal->nil; ;}
    break;

  case 25:
#line 384 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 26:
#line 385 "faustparser.y"
    { declareDoc((yyvsp[(2) - (3)].exp)); (yyval.exp) = gGlobal->nil; /* cerr << "Yacc : doc : " << *$2 << endl; */ ;}
    break;

  case 27:
#line 388 "faustparser.y"
    { (yyval.exp) = gGlobal->nil; ;}
    break;

  case 28:
#line 389 "faustparser.y"
    { (yyval.exp) = cons ((yyvsp[(2) - (2)].exp),(yyvsp[(1) - (2)].exp)); ;}
    break;

  case 29:
#line 392 "faustparser.y"
    { (yyval.exp) = docTxt((yyvsp[(1) - (1)].cppstr)->c_str()); delete (yyvsp[(1) - (1)].cppstr); ;}
    break;

  case 30:
#line 393 "faustparser.y"
    { (yyval.exp) = docEqn((yyvsp[(1) - (1)].exp)); ;}
    break;

  case 31:
#line 394 "faustparser.y"
    { (yyval.exp) = docDgm((yyvsp[(1) - (1)].exp)); ;}
    break;

  case 32:
#line 395 "faustparser.y"
    { (yyval.exp) = docNtc(); ;}
    break;

  case 33:
#line 396 "faustparser.y"
    { (yyval.exp) = docLst(); ;}
    break;

  case 34:
#line 397 "faustparser.y"
    { (yyval.exp) = docMtd((yyvsp[(1) - (1)].exp)); ;}
    break;

  case 35:
#line 400 "faustparser.y"
    { (yyval.cppstr) = new string(); ;}
    break;

  case 36:
#line 401 "faustparser.y"
    { (yyval.cppstr) = &((yyvsp[(1) - (2)].cppstr)->append(yytext)); ;}
    break;

  case 37:
#line 404 "faustparser.y"
    { (yyval.exp) = (yyvsp[(2) - (3)].exp); ;}
    break;

  case 38:
#line 407 "faustparser.y"
    { (yyval.exp) = (yyvsp[(2) - (3)].exp); ;}
    break;

  case 39:
#line 410 "faustparser.y"
    { ;}
    break;

  case 40:
#line 413 "faustparser.y"
    { ;}
    break;

  case 41:
#line 416 "faustparser.y"
    { ;}
    break;

  case 42:
#line 417 "faustparser.y"
    { ;}
    break;

  case 43:
#line 420 "faustparser.y"
    { gGlobal->gLstDependenciesSwitch = (yyvsp[(4) - (5)].b); ;}
    break;

  case 44:
#line 421 "faustparser.y"
    { gGlobal->gStripDocSwitch = (yyvsp[(4) - (5)].b); gGlobal->gStripDocSwitch==true ? gGlobal->gStripDocSwitch=false : gGlobal->gStripDocSwitch=true; ;}
    break;

  case 45:
#line 422 "faustparser.y"
    { gGlobal->gLstDistributedSwitch = (yyvsp[(4) - (5)].b); ;}
    break;

  case 46:
#line 425 "faustparser.y"
    { (yyval.b) = true; ;}
    break;

  case 47:
#line 426 "faustparser.y"
    { (yyval.b) = false; ;}
    break;

  case 48:
#line 429 "faustparser.y"
    { (yyval.exp) = (yyvsp[(2) - (3)].exp); ;}
    break;

  case 49:
#line 432 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (7)].exp),cons((yyvsp[(3) - (7)].exp),(yyvsp[(6) - (7)].exp))); setDefProp((yyvsp[(1) - (7)].exp), yyfilename, yylineno); ;}
    break;

  case 50:
#line 433 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (4)].exp),cons(gGlobal->nil,(yyvsp[(3) - (4)].exp)));  setDefProp((yyvsp[(1) - (4)].exp), yyfilename, yylineno); ;}
    break;

  case 51:
#line 434 "faustparser.y"
    { (yyval.exp) = gGlobal->nil; yyerr++; ;}
    break;

  case 52:
#line 437 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (4)].exp),cons(gGlobal->nil,(yyvsp[(3) - (4)].exp))); setDefProp((yyvsp[(1) - (4)].exp), yyfilename, yylineno); ;}
    break;

  case 53:
#line 438 "faustparser.y"
    { (yyval.exp) = gGlobal->nil; yyerr++; ;}
    break;

  case 54:
#line 441 "faustparser.y"
    { (yyval.exp)=(yyvsp[(1) - (1)].exp); ;}
    break;

  case 55:
#line 444 "faustparser.y"
    { (yyval.exp)=(yyvsp[(2) - (2)].exp); ;}
    break;

  case 56:
#line 447 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (1)].exp),gGlobal->nil); ;}
    break;

  case 57:
#line 448 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(3) - (3)].exp),(yyvsp[(1) - (3)].exp)); ;}
    break;

  case 58:
#line 451 "faustparser.y"
    { (yyval.exp) = boxWithLocalDef((yyvsp[(1) - (5)].exp),formatDefinitions((yyvsp[(4) - (5)].exp))); ;}
    break;

  case 59:
#line 452 "faustparser.y"
    { (yyval.exp) = boxWithRecDef  ((yyvsp[(1) - (5)].exp),formatDefinitions((yyvsp[(4) - (5)].exp))); ;}
    break;

  case 60:
#line 453 "faustparser.y"
    { (yyval.exp) = boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)); ;}
    break;

  case 61:
#line 454 "faustparser.y"
    { (yyval.exp) = boxSeq((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)); ;}
    break;

  case 62:
#line 455 "faustparser.y"
    { (yyval.exp) = boxSplit((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)); ;}
    break;

  case 63:
#line 456 "faustparser.y"
    { (yyval.exp) = boxMerge((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)); ;}
    break;

  case 64:
#line 457 "faustparser.y"
    { (yyval.exp) = boxRec((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)); ;}
    break;

  case 65:
#line 458 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 66:
#line 461 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigAdd)); ;}
    break;

  case 67:
#line 462 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigSub)); ;}
    break;

  case 68:
#line 463 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigMul)); ;}
    break;

  case 69:
#line 464 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigDiv)); ;}
    break;

  case 70:
#line 465 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigRem)); ;}
    break;

  case 71:
#line 466 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),gGlobal->gPowPrim->box()); ;}
    break;

  case 72:
#line 467 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigFixDelay)); ;}
    break;

  case 73:
#line 468 "faustparser.y"
    { (yyval.exp) = boxSeq((yyvsp[(1) - (2)].exp),boxPrim1(sigDelay1)); ;}
    break;

  case 74:
#line 469 "faustparser.y"
    { (yyval.exp) = boxAccess((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)); ;}
    break;

  case 75:
#line 471 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigAND)); ;}
    break;

  case 76:
#line 472 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigOR)); ;}
    break;

  case 77:
#line 473 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigXOR)); ;}
    break;

  case 78:
#line 475 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigLeftShift)); ;}
    break;

  case 79:
#line 476 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigRightShift)); ;}
    break;

  case 80:
#line 478 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigLT)); ;}
    break;

  case 81:
#line 479 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigLE)); ;}
    break;

  case 82:
#line 480 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigGT)); ;}
    break;

  case 83:
#line 481 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigGE)); ;}
    break;

  case 84:
#line 482 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigEQ)); ;}
    break;

  case 85:
#line 483 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)),boxPrim2(sigNE)); ;}
    break;

  case 86:
#line 485 "faustparser.y"
    { (yyval.exp) = buildBoxAppl((yyvsp[(1) - (4)].exp),(yyvsp[(3) - (4)].exp)); ;}
    break;

  case 87:
#line 486 "faustparser.y"
    { (yyval.exp) = boxModifLocalDef((yyvsp[(1) - (4)].exp),formatDefinitions((yyvsp[(3) - (4)].exp))); ;}
    break;

  case 88:
#line 488 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 89:
#line 491 "faustparser.y"
    { (yyval.exp) = boxInt(atoi(yytext)); ;}
    break;

  case 90:
#line 492 "faustparser.y"
    { (yyval.exp) = boxReal(atof(yytext)); ;}
    break;

  case 91:
#line 494 "faustparser.y"
    { (yyval.exp) = boxInt (atoi(yytext)); ;}
    break;

  case 92:
#line 495 "faustparser.y"
    { (yyval.exp) = boxReal(atof(yytext)); ;}
    break;

  case 93:
#line 497 "faustparser.y"
    { (yyval.exp) = boxInt ( -atoi(yytext) ); ;}
    break;

  case 94:
#line 498 "faustparser.y"
    { (yyval.exp) = boxReal( -atof(yytext) ); ;}
    break;

  case 95:
#line 500 "faustparser.y"
    { (yyval.exp) = boxWire(); ;}
    break;

  case 96:
#line 501 "faustparser.y"
    { (yyval.exp) = boxCut(); ;}
    break;

  case 97:
#line 503 "faustparser.y"
    { (yyval.exp) = boxPrim1(sigDelay1); ;}
    break;

  case 98:
#line 504 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigPrefix); ;}
    break;

  case 99:
#line 506 "faustparser.y"
    { (yyval.exp) = boxPrim1(sigIntCast); ;}
    break;

  case 100:
#line 507 "faustparser.y"
    { (yyval.exp) = boxPrim1(sigFloatCast); ;}
    break;

  case 101:
#line 509 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigAdd); ;}
    break;

  case 102:
#line 510 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigSub); ;}
    break;

  case 103:
#line 511 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigMul); ;}
    break;

  case 104:
#line 512 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigDiv); ;}
    break;

  case 105:
#line 513 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigRem); ;}
    break;

  case 106:
#line 514 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigFixDelay); ;}
    break;

  case 107:
#line 516 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigAND); ;}
    break;

  case 108:
#line 517 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigOR); ;}
    break;

  case 109:
#line 518 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigXOR); ;}
    break;

  case 110:
#line 520 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigLeftShift); ;}
    break;

  case 111:
#line 521 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigRightShift); ;}
    break;

  case 112:
#line 523 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigLT); ;}
    break;

  case 113:
#line 524 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigLE); ;}
    break;

  case 114:
#line 525 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigGT); ;}
    break;

  case 115:
#line 526 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigGE); ;}
    break;

  case 116:
#line 527 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigEQ); ;}
    break;

  case 117:
#line 528 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigNE); ;}
    break;

  case 118:
#line 530 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigAttach); ;}
    break;

  case 119:
#line 531 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigEnable); ;}
    break;

  case 120:
#line 532 "faustparser.y"
    { (yyval.exp) = boxPrim2(sigControl); ;}
    break;

  case 121:
#line 535 "faustparser.y"
    { (yyval.exp) = gGlobal->gAcosPrim->box(); ;}
    break;

  case 122:
#line 536 "faustparser.y"
    { (yyval.exp) = gGlobal->gAsinPrim->box(); ;}
    break;

  case 123:
#line 537 "faustparser.y"
    { (yyval.exp) = gGlobal->gAtanPrim->box(); ;}
    break;

  case 124:
#line 538 "faustparser.y"
    { (yyval.exp) = gGlobal->gAtan2Prim->box(); ;}
    break;

  case 125:
#line 539 "faustparser.y"
    { (yyval.exp) = gGlobal->gCosPrim->box(); ;}
    break;

  case 126:
#line 540 "faustparser.y"
    { (yyval.exp) = gGlobal->gSinPrim->box(); ;}
    break;

  case 127:
#line 541 "faustparser.y"
    { (yyval.exp) = gGlobal->gTanPrim->box(); ;}
    break;

  case 128:
#line 543 "faustparser.y"
    { (yyval.exp) = gGlobal->gExpPrim->box(); ;}
    break;

  case 129:
#line 544 "faustparser.y"
    { (yyval.exp) = gGlobal->gLogPrim->box(); ;}
    break;

  case 130:
#line 545 "faustparser.y"
    { (yyval.exp) = gGlobal->gLog10Prim->box(); ;}
    break;

  case 131:
#line 546 "faustparser.y"
    { (yyval.exp) = gGlobal->gPowPrim->box(); ;}
    break;

  case 132:
#line 547 "faustparser.y"
    { (yyval.exp) = gGlobal->gPowPrim->box(); ;}
    break;

  case 133:
#line 548 "faustparser.y"
    { (yyval.exp) = gGlobal->gSqrtPrim->box(); ;}
    break;

  case 134:
#line 550 "faustparser.y"
    { (yyval.exp) = gGlobal->gAbsPrim->box(); ;}
    break;

  case 135:
#line 551 "faustparser.y"
    { (yyval.exp) = gGlobal->gMinPrim->box(); ;}
    break;

  case 136:
#line 552 "faustparser.y"
    { (yyval.exp) = gGlobal->gMaxPrim->box(); ;}
    break;

  case 137:
#line 554 "faustparser.y"
    { (yyval.exp) = gGlobal->gFmodPrim->box(); ;}
    break;

  case 138:
#line 555 "faustparser.y"
    { (yyval.exp) = gGlobal->gRemainderPrim->box(); ;}
    break;

  case 139:
#line 557 "faustparser.y"
    { (yyval.exp) = gGlobal->gFloorPrim->box(); ;}
    break;

  case 140:
#line 558 "faustparser.y"
    { (yyval.exp) = gGlobal->gCeilPrim->box(); ;}
    break;

  case 141:
#line 559 "faustparser.y"
    { (yyval.exp) = gGlobal->gRintPrim->box(); ;}
    break;

  case 142:
#line 562 "faustparser.y"
    { (yyval.exp) = boxPrim3(sigReadOnlyTable); ;}
    break;

  case 143:
#line 563 "faustparser.y"
    { (yyval.exp) = boxPrim5(sigWriteReadTable); ;}
    break;

  case 144:
#line 565 "faustparser.y"
    { (yyval.exp) = boxPrim3(sigSelect2); ;}
    break;

  case 145:
#line 566 "faustparser.y"
    { (yyval.exp) = boxPrim4(sigSelect3); ;}
    break;

  case 146:
#line 568 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp);  setUseProp((yyvsp[(1) - (1)].exp), yyfilename, yylineno);;}
    break;

  case 147:
#line 569 "faustparser.y"
    { (yyval.exp) = boxSeq(boxPar(boxInt(0),(yyvsp[(2) - (2)].exp)),boxPrim2(sigSub)); ;}
    break;

  case 148:
#line 571 "faustparser.y"
    { (yyval.exp) = (yyvsp[(2) - (3)].exp); ;}
    break;

  case 149:
#line 573 "faustparser.y"
    { (yyval.exp) = buildBoxAbstr((yyvsp[(3) - (8)].exp),(yyvsp[(7) - (8)].exp)); ;}
    break;

  case 150:
#line 575 "faustparser.y"
    { (yyval.exp) = boxCase(checkRulelist((yyvsp[(3) - (4)].exp))); ;}
    break;

  case 151:
#line 577 "faustparser.y"
    { (yyval.exp) = boxFFun((yyvsp[(1) - (1)].exp)); ;}
    break;

  case 152:
#line 578 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 153:
#line 579 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 154:
#line 580 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 155:
#line 581 "faustparser.y"
    { (yyval.exp) = boxComponent((yyvsp[(3) - (4)].exp)); ;}
    break;

  case 156:
#line 582 "faustparser.y"
    { (yyval.exp) = boxLibrary((yyvsp[(3) - (4)].exp)); ;}
    break;

  case 157:
#line 583 "faustparser.y"
    { (yyval.exp) = boxWithLocalDef(boxEnvironment(),formatDefinitions((yyvsp[(3) - (4)].exp))); ;}
    break;

  case 158:
#line 584 "faustparser.y"
    { (yyval.exp) = boxWaveform(gGlobal->gWaveForm); gGlobal->gWaveForm.clear(); ;}
    break;

  case 159:
#line 585 "faustparser.y"
    { (yyval.exp) = boxRoute((yyvsp[(3) - (8)].exp), (yyvsp[(5) - (8)].exp), (yyvsp[(7) - (8)].exp)); ;}
    break;

  case 160:
#line 586 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 161:
#line 587 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 162:
#line 588 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 163:
#line 589 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 164:
#line 590 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 165:
#line 591 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 166:
#line 592 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 167:
#line 593 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 168:
#line 594 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 169:
#line 595 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 170:
#line 596 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 171:
#line 598 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 172:
#line 599 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 173:
#line 600 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 174:
#line 601 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 175:
#line 603 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 176:
#line 604 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 177:
#line 609 "faustparser.y"
    { (yyval.exp) = boxIdent(yytext); setUseProp((yyval.exp), yyfilename, yylineno);  ;}
    break;

  case 178:
#line 612 "faustparser.y"
    { (yyval.exp) = tree(yytext); setUseProp((yyval.exp), yyfilename, yylineno);  ;}
    break;

  case 179:
#line 617 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (1)].exp),gGlobal->nil); ;}
    break;

  case 180:
#line 618 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(3) - (3)].exp),(yyvsp[(1) - (3)].exp)); ;}
    break;

  case 181:
#line 621 "faustparser.y"
    { (yyval.exp) = boxSeq((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)); ;}
    break;

  case 182:
#line 622 "faustparser.y"
    { (yyval.exp) = boxSplit((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)); ;}
    break;

  case 183:
#line 623 "faustparser.y"
    { (yyval.exp) = boxMerge((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)); ;}
    break;

  case 184:
#line 624 "faustparser.y"
    { (yyval.exp) = boxRec((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)); ;}
    break;

  case 185:
#line 625 "faustparser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); ;}
    break;

  case 186:
#line 628 "faustparser.y"
    { (yyval.exp) = tree(yytext); ;}
    break;

  case 187:
#line 631 "faustparser.y"
    { (yyval.exp) = unquote(yytext); ;}
    break;

  case 188:
#line 634 "faustparser.y"
    { (yyval.exp) = tree(yytext); ;}
    break;

  case 189:
#line 635 "faustparser.y"
    { (yyval.exp) = tree(yytext); ;}
    break;

  case 190:
#line 641 "faustparser.y"
    { (yyval.exp) = boxIPar((yyvsp[(3) - (8)].exp),(yyvsp[(5) - (8)].exp),(yyvsp[(7) - (8)].exp)); ;}
    break;

  case 191:
#line 645 "faustparser.y"
    { (yyval.exp) = boxISeq((yyvsp[(3) - (8)].exp),(yyvsp[(5) - (8)].exp),(yyvsp[(7) - (8)].exp)); ;}
    break;

  case 192:
#line 649 "faustparser.y"
    { (yyval.exp) = boxISum((yyvsp[(3) - (8)].exp),(yyvsp[(5) - (8)].exp),(yyvsp[(7) - (8)].exp)); ;}
    break;

  case 193:
#line 653 "faustparser.y"
    { (yyval.exp) = boxIProd((yyvsp[(3) - (8)].exp),(yyvsp[(5) - (8)].exp),(yyvsp[(7) - (8)].exp)); ;}
    break;

  case 194:
#line 657 "faustparser.y"
    { (yyval.exp) = boxInputs((yyvsp[(3) - (4)].exp)); ;}
    break;

  case 195:
#line 660 "faustparser.y"
    { (yyval.exp) = boxOutputs((yyvsp[(3) - (4)].exp)); ;}
    break;

  case 196:
#line 668 "faustparser.y"
    { (yyval.exp) = ffunction((yyvsp[(3) - (8)].exp),(yyvsp[(5) - (8)].exp),(yyvsp[(7) - (8)].exp)); ;}
    break;

  case 197:
#line 672 "faustparser.y"
    { (yyval.exp) = boxFConst((yyvsp[(3) - (7)].exp),(yyvsp[(4) - (7)].exp),(yyvsp[(6) - (7)].exp)); ;}
    break;

  case 198:
#line 675 "faustparser.y"
    { (yyval.exp) = boxFVar((yyvsp[(3) - (7)].exp),(yyvsp[(4) - (7)].exp),(yyvsp[(6) - (7)].exp)); ;}
    break;

  case 199:
#line 680 "faustparser.y"
    { (yyval.exp) = boxParameter((yyvsp[(3) - (6)].exp),(yyvsp[(5) - (6)].exp)); ;}
    break;

  case 200:
#line 684 "faustparser.y"
    { (yyval.exp) = boxButton((yyvsp[(3) - (4)].exp)); ;}
    break;

  case 201:
#line 687 "faustparser.y"
    { (yyval.exp) = boxCheckbox((yyvsp[(3) - (4)].exp)); ;}
    break;

  case 202:
#line 691 "faustparser.y"
    { (yyval.exp) = boxVSlider((yyvsp[(3) - (12)].exp),(yyvsp[(5) - (12)].exp),(yyvsp[(7) - (12)].exp),(yyvsp[(9) - (12)].exp),(yyvsp[(11) - (12)].exp)); ;}
    break;

  case 203:
#line 694 "faustparser.y"
    { (yyval.exp) = boxHSlider((yyvsp[(3) - (12)].exp),(yyvsp[(5) - (12)].exp),(yyvsp[(7) - (12)].exp),(yyvsp[(9) - (12)].exp),(yyvsp[(11) - (12)].exp)); ;}
    break;

  case 204:
#line 697 "faustparser.y"
    { (yyval.exp) = boxNumEntry((yyvsp[(3) - (12)].exp),(yyvsp[(5) - (12)].exp),(yyvsp[(7) - (12)].exp),(yyvsp[(9) - (12)].exp),(yyvsp[(11) - (12)].exp)); ;}
    break;

  case 205:
#line 700 "faustparser.y"
    { (yyval.exp) = boxVGroup((yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp)); ;}
    break;

  case 206:
#line 703 "faustparser.y"
    { (yyval.exp) = boxHGroup((yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp)); ;}
    break;

  case 207:
#line 706 "faustparser.y"
    { (yyval.exp) = boxTGroup((yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp)); ;}
    break;

  case 208:
#line 710 "faustparser.y"
    { (yyval.exp) = boxVBargraph((yyvsp[(3) - (8)].exp),(yyvsp[(5) - (8)].exp),(yyvsp[(7) - (8)].exp)); ;}
    break;

  case 209:
#line 713 "faustparser.y"
    { (yyval.exp) = boxHBargraph((yyvsp[(3) - (8)].exp),(yyvsp[(5) - (8)].exp),(yyvsp[(7) - (8)].exp)); ;}
    break;

  case 210:
#line 716 "faustparser.y"
    { (yyval.exp) = boxSoundfile((yyvsp[(3) - (6)].exp),(yyvsp[(5) - (6)].exp)); ;}
    break;

  case 211:
#line 722 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (5)].exp), cons(cons((yyvsp[(2) - (5)].exp),cons((yyvsp[(2) - (5)].exp),cons((yyvsp[(2) - (5)].exp),gGlobal->nil))), (yyvsp[(4) - (5)].exp))); ;}
    break;

  case 212:
#line 723 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (7)].exp), cons(cons((yyvsp[(2) - (7)].exp),cons((yyvsp[(4) - (7)].exp),cons((yyvsp[(4) - (7)].exp),gGlobal->nil))), (yyvsp[(6) - (7)].exp))); ;}
    break;

  case 213:
#line 724 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (9)].exp), cons(cons((yyvsp[(2) - (9)].exp),cons((yyvsp[(4) - (9)].exp),cons((yyvsp[(6) - (9)].exp),gGlobal->nil))), (yyvsp[(8) - (9)].exp))); ;}
    break;

  case 214:
#line 726 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (4)].exp), cons(cons((yyvsp[(2) - (4)].exp),cons((yyvsp[(2) - (4)].exp),cons((yyvsp[(2) - (4)].exp),gGlobal->nil))), gGlobal->nil)); ;}
    break;

  case 215:
#line 727 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (6)].exp), cons(cons((yyvsp[(2) - (6)].exp),cons((yyvsp[(4) - (6)].exp),cons((yyvsp[(4) - (6)].exp),gGlobal->nil))), gGlobal->nil)); ;}
    break;

  case 216:
#line 728 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (8)].exp), cons(cons((yyvsp[(2) - (8)].exp),cons((yyvsp[(4) - (8)].exp),cons((yyvsp[(6) - (8)].exp),gGlobal->nil))), gGlobal->nil)); ;}
    break;

  case 217:
#line 731 "faustparser.y"
    { (yyval.exp) = tree(yytext); ;}
    break;

  case 218:
#line 734 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (1)].exp),gGlobal->nil); ;}
    break;

  case 219:
#line 735 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(3) - (3)].exp),(yyvsp[(1) - (3)].exp)); ;}
    break;

  case 220:
#line 738 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(1) - (1)].exp),gGlobal->nil); ;}
    break;

  case 221:
#line 739 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(2) - (2)].exp),(yyvsp[(1) - (2)].exp)); ;}
    break;

  case 222:
#line 743 "faustparser.y"
    { (yyval.exp) = cons((yyvsp[(2) - (6)].exp),(yyvsp[(5) - (6)].exp)); ;}
    break;

  case 223:
#line 746 "faustparser.y"
    { (yyval.exp) = tree(0); ;}
    break;

  case 224:
#line 747 "faustparser.y"
    { (yyval.exp) = tree(1); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3273 "faustparser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 750 "faustparser.y"



