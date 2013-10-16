/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "bison.y"

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

#include "runtime.h"
#include  "analizator.h"
#include <typeinfo>

void yyerror(const char *str)
{
        fprintf(stderr,"Parse error\tline: %d, %s in %s\n", yylineno, str, yytext);
}
 

/* Line 371 of yacc.c  */
#line 85 "bison.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison.tab.h".  */
#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FUNCTION = 258,
     VAR_BEGIN = 259,
     ARRAY_DECLARATION = 260,
     IDENTIFIER = 261,
     NUMBER = 262,
     STRING_DEFINITION = 263,
     END_INSTRUCTION = 264,
     ARG_SPLITTER = 265,
     PLUS = 266,
     MINUS = 267,
     DIVIDE = 268,
     MULTIPLY = 269,
     DIVIDE_MOD = 270,
     ASSIGN = 271,
     MORE = 272,
     LESS = 273,
     MORE_OR_EQUAL = 274,
     LESS_OR_EQUAL = 275,
     EQUAL = 276,
     NOT_EQUAL = 277,
     OPEN_BLOCK = 278,
     CLOSE_BLOCK = 279,
     OPEN_BRACKET = 280,
     CLOSE_BRACKET = 281,
     STRING_CONCETATE = 282,
     RETURN = 283,
     INCLUDE = 284,
     REQUIRE = 285,
     OPEN_SQUARE_BRACKET = 286,
     CLOSE_SQUARE_BRACKET = 287,
     IF = 288,
     ELSE = 289,
     TRUE = 290,
     FALSE = 291,
     INC = 292,
     DEC = 293,
     WHILE = 294,
     FOR = 295,
     BREAK = 296,
     UNSET = 297,
     DEVIDE = 298
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 193 "bison.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   234

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNRULES -- Number of states.  */
#define YYNSTATES  134

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    15,    18,    20,
      23,    25,    28,    30,    32,    34,    36,    38,    40,    42,
      44,    46,    48,    50,    54,    61,    64,    65,    69,    71,
      72,    76,    78,    80,    82,    84,    86,    88,    90,    92,
      94,    97,   100,   103,   106,   108,   111,   117,   120,   125,
     129,   133,   136,   146,   152,   159,   160,   163,   165,   169,
     173,   177,   181,   185,   189,   193,   195,   197,   201,   205,
     207,   211,   215,   219,   221,   225,   228
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    -1,    47,    -1,    46,    47,    -1,
      53,    -1,    74,     9,    -1,    75,     9,    -1,    48,    -1,
      48,    49,    -1,    49,    -1,    50,     9,    -1,    51,    -1,
      59,    -1,    63,    -1,    64,    -1,    65,    -1,    62,    -1,
      58,    -1,     1,    -1,    66,    -1,    67,    -1,    68,    -1,
      23,    48,    24,    -1,     3,     6,    25,    54,    26,    52,
      -1,     1,    52,    -1,    -1,    61,    10,    54,    -1,    61,
      -1,    -1,    56,    10,    55,    -1,    56,    -1,    70,    -1,
      35,    -1,    36,    -1,     7,    -1,     8,    -1,    61,    -1,
      63,    -1,    41,    -1,    61,    37,    -1,    61,    38,    -1,
      38,    61,    -1,    37,    61,    -1,     5,    -1,     4,     6,
      -1,     4,     6,    31,    56,    32,    -1,    42,    61,    -1,
       6,    25,    55,    26,    -1,    61,    16,    56,    -1,    61,
      16,    60,    -1,    28,    56,    -1,    40,    25,    50,     9,
      70,     9,    50,    26,    52,    -1,    39,    25,    56,    26,
      52,    -1,    33,    25,    56,    26,    52,    69,    -1,    -1,
      34,    52,    -1,    71,    -1,    70,    18,    71,    -1,    70,
      17,    71,    -1,    70,    21,    71,    -1,    70,    19,    71,
      -1,    70,    20,    71,    -1,    70,    22,    71,    -1,    25,
      70,    26,    -1,     1,    -1,    72,    -1,    71,    11,    72,
      -1,    71,    12,    72,    -1,    73,    -1,    72,    14,    73,
      -1,    72,    13,    73,    -1,    72,    15,    73,    -1,    57,
      -1,    73,    27,    57,    -1,    29,    56,    -1,    30,    56,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,    99,   101,   108,   110,   112,   114,   118,
     120,   124,   126,   130,   134,   139,   141,   143,   145,   147,
     151,   153,   155,   159,   162,   169,   175,   177,   182,   188,
     190,   194,   202,   207,   209,   211,   213,   215,   217,   221,
     225,   227,   229,   231,   234,   238,   240,   245,   248,   253,
     255,   259,   262,   268,   273,   277,   279,   282,   284,   286,
     288,   290,   292,   294,   296,   298,   303,   305,   307,   311,
     313,   315,   317,   321,   323,   327,   330
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "VAR_BEGIN",
  "ARRAY_DECLARATION", "IDENTIFIER", "NUMBER", "STRING_DEFINITION",
  "END_INSTRUCTION", "ARG_SPLITTER", "PLUS", "MINUS", "DIVIDE", "MULTIPLY",
  "DIVIDE_MOD", "ASSIGN", "MORE", "LESS", "MORE_OR_EQUAL", "LESS_OR_EQUAL",
  "EQUAL", "NOT_EQUAL", "OPEN_BLOCK", "CLOSE_BLOCK", "OPEN_BRACKET",
  "CLOSE_BRACKET", "STRING_CONCETATE", "RETURN", "INCLUDE", "REQUIRE",
  "OPEN_SQUARE_BRACKET", "CLOSE_SQUARE_BRACKET", "IF", "ELSE", "TRUE",
  "FALSE", "INC", "DEC", "WHILE", "FOR", "BREAK", "UNSET", "DEVIDE",
  "$accept", "program", "body", "top_level_cmd", "instructions",
  "instruction", "command", "condition_statement", "block",
  "function_declaration", "function_declaration_arguments",
  "function_call_arguments", "value", "explicit_value", "break", "unar_op",
  "array", "var", "unset", "function_call", "assign_value", "return_value",
  "loop_for", "loop_while", "if_stmt", "else_stmt", "expresion",
  "math_expr", "math_hight_expr", "string_expr", "include", "require", YY_NULL
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
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    47,    48,
      48,    49,    49,    50,    50,    50,    50,    50,    50,    50,
      51,    51,    51,    52,    53,    53,    54,    54,    54,    55,
      55,    55,    56,    57,    57,    57,    57,    57,    57,    58,
      59,    59,    59,    59,    60,    61,    61,    62,    63,    64,
      64,    65,    66,    67,    68,    69,    69,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    71,    71,    71,    72,
      72,    72,    72,    73,    73,    74,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     6,     2,     0,     3,     1,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     2,     5,     2,     4,     3,
       3,     2,     9,     5,     6,     0,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     3,     0,    10,
       0,    12,     5,    18,    13,     0,    17,    14,    15,    16,
      20,    21,    22,     0,     0,     0,    25,     0,    45,     0,
      65,    35,    36,     0,    33,    34,    51,    73,    37,    38,
      32,    57,    66,    69,    75,    76,     0,    43,    42,     0,
       0,    47,     1,     4,    19,     9,    11,     0,    40,    41,
       6,     7,     0,    26,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    49,    50,    23,     0,    28,     0,
      48,     0,    64,    59,    58,    61,    62,    60,    63,    67,
      68,    71,    70,    72,    74,     0,     0,     0,     0,    26,
      46,    30,    55,    53,     0,    24,    27,     0,    54,     0,
      56,     0,     0,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    20,    21,    36,    22,
      97,    75,    76,    47,    23,    24,    95,    48,    26,    49,
      28,    29,    30,    31,    32,   128,    50,    51,    52,    53,
      33,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -87
static const yytype_int16 yypact[] =
{
     120,   -12,     7,    14,    -3,   178,   178,   178,     6,    24,
      24,    15,    32,   -87,    24,    43,    61,   -87,   105,   -87,
      50,   -87,   -87,   -87,   -87,   -11,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,    57,    59,    11,   -87,    46,    49,   169,
     -87,   -87,   -87,   178,   -87,   -87,   -87,   -87,   -87,   -87,
     201,    22,    -7,    54,   -87,   -87,   178,   -87,   -87,   178,
      41,   -87,   -87,   -87,   -87,   -87,   -87,   192,   -87,   -87,
     -87,   -87,   150,    24,   178,    67,    85,   189,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      70,    71,    95,   -87,   -87,   -87,   -87,    81,   100,    82,
     -87,   169,   -87,    22,    22,    22,    22,    22,    22,    -7,
      -7,    54,    54,    54,   -87,   -12,   -12,   178,   -12,    24,
     -87,   -87,    78,   -87,   146,   -87,   -87,   -12,   -87,    41,
     -87,    87,   -12,   -87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   -87,   -87,   101,    83,   -14,   -59,   -87,   -86,   -87,
       1,    21,    18,    36,   -87,   -87,   -87,     0,   -87,     3,
     -87,   -87,   -87,   -87,   -87,   -87,   -41,   151,   -48,   -32,
     -87,   -87
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -30
static const yytype_int16 yytable[] =
{
      25,    92,    77,    27,    65,    67,    86,    87,    88,    57,
      58,    35,    64,    37,    61,     3,    25,     4,    25,    27,
      38,    27,    39,    46,    54,    55,    68,    69,     3,   122,
     123,    56,   125,    84,    85,    25,   109,   110,    27,     5,
      59,   130,    64,    62,     8,     3,   133,     4,     9,    10,
      11,    12,    13,    14,   111,   112,   113,    60,    65,    66,
      25,    -2,     1,    27,     2,     3,    70,     4,    71,     5,
     131,    73,    25,    98,    90,    27,   124,    91,     9,    10,
      74,    89,    13,    14,     3,    94,     4,    41,    42,     5,
       6,     7,    99,   100,     8,   101,   115,   116,     9,    10,
      11,    12,    13,    14,   117,    -8,    64,   118,    -8,     3,
     119,     4,   127,   132,   120,    44,    45,    63,    72,    98,
     126,     1,   121,     2,     3,   114,     4,     0,     0,    25,
       0,     0,    27,     5,    -8,    -8,     0,     0,     8,     0,
       0,     0,     9,    10,    11,    12,    13,    14,     5,     6,
       7,    64,     0,     8,     3,   129,     4,     9,    10,    11,
      12,    13,    14,    78,    79,    80,    81,    82,    83,     0,
      40,     0,     0,     3,    96,     4,    41,    42,     5,    40,
       0,     0,     3,     8,     4,    41,    42,     9,    10,    11,
      12,    13,    14,    40,    43,   -29,     3,    93,     4,    41,
      42,     0,     0,    43,    44,    45,    78,    79,    80,    81,
      82,    83,     0,    44,    45,   102,     0,    43,    78,    79,
      80,    81,    82,    83,     0,     0,     0,    44,    45,   103,
     104,   105,   106,   107,   108
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-87)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    60,    43,     0,    18,    16,    13,    14,    15,     9,
      10,    23,     1,     6,    14,     4,    16,     6,    18,    16,
       6,    18,    25,     5,     6,     7,    37,    38,     4,   115,
     116,    25,   118,    11,    12,    35,    84,    85,    35,    28,
      25,   127,     1,     0,    33,     4,   132,     6,    37,    38,
      39,    40,    41,    42,    86,    87,    88,    25,    72,     9,
      60,     0,     1,    60,     3,     4,     9,     6,     9,    28,
     129,    25,    72,    73,    56,    72,   117,    59,    37,    38,
      31,    27,    41,    42,     4,    67,     6,     7,     8,    28,
      29,    30,    74,    26,    33,    10,    26,    26,    37,    38,
      39,    40,    41,    42,     9,     0,     1,    26,     3,     4,
      10,     6,    34,    26,    32,    35,    36,    16,    35,   119,
     119,     1,   101,     3,     4,    89,     6,    -1,    -1,   129,
      -1,    -1,   129,    28,    29,    30,    -1,    -1,    33,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    28,    29,
      30,     1,    -1,    33,     4,     9,     6,    37,    38,    39,
      40,    41,    42,    17,    18,    19,    20,    21,    22,    -1,
       1,    -1,    -1,     4,    24,     6,     7,     8,    28,     1,
      -1,    -1,     4,    33,     6,     7,     8,    37,    38,    39,
      40,    41,    42,     1,    25,    26,     4,     5,     6,     7,
       8,    -1,    -1,    25,    35,    36,    17,    18,    19,    20,
      21,    22,    -1,    35,    36,    26,    -1,    25,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    35,    36,    78,
      79,    80,    81,    82,    83
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     6,    28,    29,    30,    33,    37,
      38,    39,    40,    41,    42,    45,    46,    47,    48,    49,
      50,    51,    53,    58,    59,    61,    62,    63,    64,    65,
      66,    67,    68,    74,    75,    23,    52,     6,     6,    25,
       1,     7,     8,    25,    35,    36,    56,    57,    61,    63,
      70,    71,    72,    73,    56,    56,    25,    61,    61,    25,
      25,    61,     0,    47,     1,    49,     9,    16,    37,    38,
       9,     9,    48,    25,    31,    55,    56,    70,    17,    18,
      19,    20,    21,    22,    11,    12,    13,    14,    15,    27,
      56,    56,    50,     5,    56,    60,    24,    54,    61,    56,
      26,    10,    26,    71,    71,    71,    71,    71,    71,    72,
      72,    73,    73,    73,    57,    26,    26,     9,    26,    10,
      32,    55,    52,    52,    70,    52,    54,    34,    69,     9,
      52,    50,    26,    52
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
/* Line 1792 of yacc.c  */
#line 91 "bison.y"
    {
   runtime_t::get_instance()->set_main_block((block_t*) (yyvsp[(1) - (1)].oper));
   runtime_t::get_instance()->semantic_analys();
   runtime_t::get_instance()->interpretate();
  }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 101 "bison.y"
    {    
      (yyval.oper) = new block_t((yyvsp[(1) - (2)].oper), (yyvsp[(2) - (2)].oper));
  }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 114 "bison.y"
    { (yyval.oper) = (yyvsp[(1) - (1)].oper); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 118 "bison.y"
    { (yyval.oper) = new block_t((yyvsp[(1) - (2)].oper), (yyvsp[(2) - (2)].oper)); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 120 "bison.y"
    { }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 124 "bison.y"
    { (yyval.oper) = (yyvsp[(1) - (2)].oper); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 126 "bison.y"
    { (yyval.oper) = (yyvsp[(1) - (1)].oper); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 130 "bison.y"
    {
    (yyval.oper) =  (oper_t*)((yyvsp[(1) - (1)].expr)); 
  }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 134 "bison.y"
    {
    /* Function call is expr_t and oper_t child */
      (yyval.oper) =  (oper_t*)((yyvsp[(1) - (1)].expr)); 
    }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 147 "bison.y"
    { yyerrok; yyclearin;  std::cerr <<"Error in command running statement\n"; }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 159 "bison.y"
    { (yyval.oper) = new block_t((yyvsp[(2) - (3)].oper)); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 163 "bison.y"
    {
    function_declaration_t* fd = new function_declaration_t((yyvsp[(2) - (6)].str), (yyvsp[(4) - (6)].args), (yyvsp[(6) - (6)].oper));
    (yyval.oper) = fd;
    runtime_t::get_instance()->add_function_declaration(fd);
  }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 169 "bison.y"
    {
    yyerrok;
    yyclearin;
    std::cerr << "Function declaration error!\n";
  }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 177 "bison.y"
    {
    (yyval.args) = std::list<expr_t*>((yyvsp[(3) - (3)].args));
    (yyval.args).push_back((yyvsp[(1) - (3)].expr));
  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 182 "bison.y"
    {  
     (yyval.args) = std::list<expr_t*>();
     (yyval.args).push_back((yyvsp[(1) - (1)].expr));
  }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 190 "bison.y"
    {
    (yyval.args) = std::list<expr_t*>((yyvsp[(3) - (3)].args));
    (yyval.args).push_back((yyvsp[(1) - (3)].expr));
  }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 195 "bison.y"
    {  
     (yyval.args) = std::list<expr_t*>();
     (yyval.args).push_back((yyvsp[(1) - (1)].expr));
  }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 202 "bison.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 207 "bison.y"
    { (yyval.expr) = new value_t((yyvsp[(1) - (1)].str)); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 209 "bison.y"
    { (yyval.expr) = new value_t((yyvsp[(1) - (1)].str)); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 211 "bison.y"
    { (yyval.expr) = new value_t((yyvsp[(1) - (1)].str)); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 213 "bison.y"
    { (yyval.expr) = new value_t((yyvsp[(1) - (1)].str)); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 221 "bison.y"
    { (yyval.oper) = new break_op_t(); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 225 "bison.y"
    { (yyval.expr) = new unary_t("++", (yyvsp[(1) - (2)].expr)); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 227 "bison.y"
    { (yyval.expr) = new unary_t("--", (yyvsp[(1) - (2)].expr)); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 229 "bison.y"
    { (yyval.expr) = new unary_t("--", (yyvsp[(2) - (2)].expr)); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 231 "bison.y"
    { (yyval.expr) = new unary_t("++", (yyvsp[(2) - (2)].expr)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 234 "bison.y"
    { (yyval.expr) = new array_init_t(); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 238 "bison.y"
    { (yyval.expr) = new var_t((yyvsp[(2) - (2)].str)); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 240 "bison.y"
    { 
    (yyval.expr) = new array_t((yyvsp[(2) - (5)].str), (yyvsp[(4) - (5)].expr)); 
  }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 245 "bison.y"
    { (yyval.oper) = new unset_t((yyvsp[(2) - (2)].expr)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 248 "bison.y"
    {
    (yyval.expr) = new function_call_t((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].args));
  }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 253 "bison.y"
    { (yyval.oper) = new assign_t((yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 255 "bison.y"
    { (yyval.oper) = new assign_t((yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 259 "bison.y"
    { (yyval.oper) = new return_op_t((yyvsp[(2) - (2)].expr)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 263 "bison.y"
    {
    (yyval.oper) = new for_op_t((yyvsp[(3) - (9)].oper), (yyvsp[(5) - (9)].expr), (yyvsp[(7) - (9)].oper), (yyvsp[(9) - (9)].oper));
  }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 268 "bison.y"
    {
    (yyval.oper) = new while_op_t((yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].oper)); 
  }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 273 "bison.y"
    { (yyval.oper) = new if_op_t((yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].oper), (yyvsp[(6) - (6)].oper)); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 277 "bison.y"
    { (yyval.oper) = 0x0; }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 279 "bison.y"
    { (yyval.oper) = new block_t((yyvsp[(2) - (2)].oper)); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 282 "bison.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 284 "bison.y"
    { (yyval.expr) = new binary_t("<", (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 286 "bison.y"
    { (yyval.expr) = new binary_t(">", (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 288 "bison.y"
    { (yyval.expr) = new binary_t("==", (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 290 "bison.y"
    { (yyval.expr) = new binary_t(">=", (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 292 "bison.y"
    { (yyval.expr) = new binary_t("<=", (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 294 "bison.y"
    { (yyval.expr) = new binary_t("!=", (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 296 "bison.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 298 "bison.y"
    { std::cerr << "Expresion error\n"; }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 305 "bison.y"
    { (yyval.expr) = new binary_t("+", (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 307 "bison.y"
    { (yyval.expr) = new binary_t("-", (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 313 "bison.y"
    { (yyval.expr) = new binary_t("*", (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 315 "bison.y"
    { (yyval.expr) = new binary_t("/", (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 317 "bison.y"
    { (yyval.expr) = new binary_t("%", (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 323 "bison.y"
    { (yyval.expr) = new binary_t(".", (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 327 "bison.y"
    { (yyval.oper) = new include_t((yyvsp[(2) - (2)].expr)); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 330 "bison.y"
    { (yyval.oper) = new require_t((yyvsp[(2) - (2)].expr)); }
    break;


/* Line 1792 of yacc.c  */
#line 1912 "bison.tab.c"
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


