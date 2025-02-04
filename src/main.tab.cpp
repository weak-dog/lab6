/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/main.y"

    #include "common.h"
    #define YYSTYPE TreeNode *
    TreeNode* root;
    symbolTable sb;
    chrTable ct;
    strTable st;
    extern int lineno;
    int yylex();
    int yyerror( char const * );

#line 82 "src/main.tab.cpp"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SRC_MAIN_TAB_H_INCLUDED
# define YY_YY_SRC_MAIN_TAB_H_INCLUDED
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
    T_CHAR = 258,
    T_INT = 259,
    T_BOOL = 260,
    ADDR = 261,
    SEMICOLON = 262,
    COMMA = 263,
    IF = 264,
    ELSE = 265,
    WHILE = 266,
    FOR = 267,
    RETURN = 268,
    CONTINUE = 269,
    BREAK = 270,
    SCANF = 271,
    PRINTF = 272,
    MAIN = 273,
    LP = 274,
    RP = 275,
    LB = 276,
    RB = 277,
    IDENTIFIER = 278,
    INTEGER = 279,
    CHAR = 280,
    BOOL = 281,
    STRING = 282,
    TRUE = 283,
    FALSE = 284,
    ASSIGN = 285,
    ADDASSIGN = 286,
    SUBASSIGN = 287,
    MULASSIGN = 288,
    DIVASSIGN = 289,
    OR = 290,
    AND = 291,
    LT = 292,
    GT = 293,
    LE = 294,
    GE = 295,
    EQ = 296,
    NEQ = 297,
    ADD = 298,
    SUB = 299,
    MUL = 300,
    DIV = 301,
    MOD = 302,
    NOT = 303,
    INC = 304,
    DEC = 305,
    MINUS = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MAIN_TAB_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   826

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

#define YYUNDEFTOK  2
#define YYMAXUTOK   306


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    33,    33,    34,    35,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    50,    52,    55,    59,    64,
      72,    81,    91,    97,   103,   109,   115,   121,   130,   137,
     143,   153,   161,   170,   179,   188,   198,   208,   218,   232,
     241,   242,   243,   247,   252,   258,   264,   269,   274,   280,
     286,   294,   295,   302,   309,   316,   323,   330,   336,   342,
     348,   354,   360,   367,   374,   380,   387,   394,   401,   408,
     415,   422,   423,   424,   425,   426,   430,   431,   432
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_CHAR", "T_INT", "T_BOOL", "ADDR",
  "SEMICOLON", "COMMA", "IF", "ELSE", "WHILE", "FOR", "RETURN", "CONTINUE",
  "BREAK", "SCANF", "PRINTF", "MAIN", "LP", "RP", "LB", "RB", "IDENTIFIER",
  "INTEGER", "CHAR", "BOOL", "STRING", "TRUE", "FALSE", "ASSIGN",
  "ADDASSIGN", "SUBASSIGN", "MULASSIGN", "DIVASSIGN", "OR", "AND", "LT",
  "GT", "LE", "GE", "EQ", "NEQ", "ADD", "SUB", "MUL", "DIV", "MOD", "NOT",
  "INC", "DEC", "MINUS", "$accept", "statements", "statement", "semi_stmt",
  "block", "decl_stmt", "decl_assign_stmt", "assign_stmt", "if_stmt",
  "for_stmt", "while_stmt", "jump_stmt", "io_stmt", "expr", "T", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF (-37)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     187,   -37,   -37,   -37,   -37,   -18,    -1,     1,   592,   -37,
     -37,     7,    10,    34,   592,   187,   -22,   -37,   -37,   -37,
     -37,   592,   592,    14,    45,   139,   -37,   -37,   -37,    59,
     -37,   -37,   -37,   -37,   -37,   -37,   182,    46,   592,   592,
      18,   -11,   182,   557,   564,    -5,   615,   235,   599,   592,
     592,   592,   592,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,    47,   592,   592,   592,   592,   592,   592,   592,   592,
     592,   592,   592,   592,   592,    42,   -37,   643,   656,   522,
      44,    -4,   684,    -3,   697,    65,   -37,   -37,   -37,   182,
     182,   182,   182,   182,    42,   -37,   229,   276,     3,     3,
       3,     3,     3,     3,   -13,   -13,   -37,   -37,   -37,   592,
      66,    66,   283,    38,   550,   487,   -37,   -37,   515,   -37,
     -37,   187,   182,    78,   -37,    66,    70,   331,   379,   134,
     592,   725,   592,   738,   427,    -2,   -37,    66,    66,    71,
      66,    72,   475,   766,   -37,   779,   -37,   -37,   -37,   -37,
     -37,   -37,    66,   -37,    66,    66,    75,   -37,   -37,   -37,
     -37,   -37,    66,   -37
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    77,    76,    78,    15,     0,     0,     0,     0,    41,
      40,     0,     0,     0,     0,     0,    73,    75,    74,    71,
      72,     0,     0,     0,     0,     0,     4,    13,     5,     6,
       7,     8,     9,    10,    11,    12,    14,     0,     0,     0,
       0,    73,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    61,    57,    64,    58,    60,     1,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    16,    22,    23,
      24,    25,    26,    27,    18,    17,    63,    62,    65,    66,
      67,    68,    69,    70,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    50,    47,     0,    46,
      43,     0,    21,    29,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,    48,     0,    44,     2,    28,    30,
      37,    36,     0,    35,     0,     0,     0,    49,    45,    32,
      33,    34,     0,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -37,   -12,   -23,   -37,   -17,    56,    36,    50,   -36,   -37,
     -37,   -37,   -37,    -8,   -37
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    25,    26,    27,    28,    29,    76,    30,    31,    32,
      33,    34,    35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      42,    38,    60,    47,   115,   118,    46,     5,    48,    49,
      50,    51,    52,    55,    56,    85,   116,   119,    39,    15,
      40,     1,     2,     3,    60,    79,    43,    53,    54,    44,
      77,    78,    72,    73,    74,    82,    84,    57,    53,    54,
      89,    90,    91,    92,    93,   127,    70,    71,    72,    73,
      74,   114,    61,    45,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    61,    58,    75,
      94,   113,   109,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,   121,    15,   135,   126,
     137,   152,   154,   123,   124,   162,    80,    95,    88,   149,
       0,   122,     0,     0,   139,   141,   129,   131,   136,   134,
     133,    60,     0,     0,     0,     0,     0,     0,   148,   156,
     150,   151,   143,   153,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   159,     0,   160,   161,    59,
       0,   142,     1,     2,     3,   163,     4,     0,     5,     0,
       6,     7,     8,     9,    10,    11,    12,     0,    14,     0,
      15,     0,    16,    17,    18,     0,     0,    19,    20,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     0,    21,     0,     0,     0,    22,    23,    24,
       1,     2,     3,     0,     4,     0,     5,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,    15,     0,
      16,    17,    18,     0,     0,    19,    20,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
       0,    21,     0,     0,     0,    22,    23,    24,     1,     2,
       3,     0,     4,     0,     5,     0,     6,     7,     8,     9,
      10,    11,    12,     0,    14,     0,    15,    87,    16,    17,
      18,     0,     0,    19,    20,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     0,     0,    21,
       0,     0,     0,    22,    23,    24,     1,     2,     3,     0,
       4,     0,     5,     0,     6,     7,     8,     9,    10,    11,
      12,     0,    14,   125,    15,     0,    16,    17,    18,     0,
       0,    19,    20,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     0,     0,     0,    21,     0,     0,
       0,    22,    23,    24,     1,     2,     3,     0,     4,     0,
       5,     0,     6,     7,     8,     9,    10,    11,    12,     0,
      14,   138,    15,     0,    16,    17,    18,     0,     0,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,    22,
      23,    24,     1,     2,     3,     0,     4,     0,     5,     0,
       6,     7,     8,     9,    10,    11,    12,     0,    14,   140,
      15,     0,    16,    17,    18,     0,     0,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,    22,    23,    24,
       1,     2,     3,     0,     4,     0,     5,     0,     6,     7,
       8,     9,    10,    11,    12,     0,    14,     0,    15,   147,
      16,    17,    18,     0,     0,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,    22,    23,    24,     1,     2,
       3,     0,     4,     0,     5,     0,     6,     7,     8,     9,
      10,    11,    12,   130,    14,   155,    15,     0,    16,    17,
      18,     0,     0,    19,    20,     0,    14,     0,     0,     0,
      41,    17,    18,     0,     0,    19,    20,     0,     0,    21,
       0,   132,     0,    22,    23,    24,     0,     0,     0,   112,
       0,    21,     0,     0,    14,    22,    23,    24,    41,    17,
      18,    14,     0,    19,    20,    41,    17,    18,     0,     0,
      19,    20,     0,     0,     0,     0,     0,   128,     0,    21,
       0,     0,     0,    22,    23,    24,    21,     0,     0,    14,
      22,    23,    24,    41,    17,    18,    14,     0,    19,    20,
      41,    17,    18,    14,    81,    19,    20,    41,    17,    18,
       0,    83,    19,    20,    21,     0,     0,     0,    22,    23,
      24,    21,     0,     0,     0,    22,    23,    24,    21,     0,
       0,    14,    22,    23,    24,    41,    17,    18,    14,     0,
      19,    20,    16,    17,    18,     0,     0,    19,    20,     0,
       0,     0,     0,     0,     0,    86,    21,     0,     0,     0,
      22,    23,    24,    21,     0,     0,     0,    22,    23,    24,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   146,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   158,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74
};

static const yytype_int16 yycheck[] =
{
       8,    19,    25,    15,     8,     8,    14,     9,    30,    31,
      32,    33,    34,    21,    22,    20,    20,    20,    19,    21,
      19,     3,     4,     5,    47,     7,    19,    49,    50,    19,
      38,    39,    45,    46,    47,    43,    44,    23,    49,    50,
      48,    49,    50,    51,    52,     7,    43,    44,    45,    46,
      47,     7,     8,    19,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     8,    23,    23,
      23,    79,    30,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    21,    21,    10,   112,
      20,    20,    20,   110,   111,    20,    40,    61,    48,   135,
      -1,   109,    -1,    -1,   127,   128,   114,   115,   125,   121,
     118,   134,    -1,    -1,    -1,    -1,    -1,    -1,   135,   142,
     137,   138,   130,   140,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,   154,   155,     0,
      -1,     7,     3,     4,     5,   162,     7,    -1,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    -1,    28,    29,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    44,    -1,    -1,    -1,    48,    49,    50,
       3,     4,     5,    -1,     7,    -1,     9,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    -1,    28,    29,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    44,    -1,    -1,    -1,    48,    49,    50,     3,     4,
       5,    -1,     7,    -1,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    29,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    44,
      -1,    -1,    -1,    48,    49,    50,     3,     4,     5,    -1,
       7,    -1,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    23,    24,    25,    -1,
      -1,    28,    29,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    48,    49,    50,     3,     4,     5,    -1,     7,    -1,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    23,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,
      49,    50,     3,     4,     5,    -1,     7,    -1,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,    50,
       3,     4,     5,    -1,     7,    -1,     9,    -1,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    49,    50,     3,     4,
       5,    -1,     7,    -1,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,     6,    19,    20,    21,    -1,    23,    24,
      25,    -1,    -1,    28,    29,    -1,    19,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    44,
      -1,     6,    -1,    48,    49,    50,    -1,    -1,    -1,     7,
      -1,    44,    -1,    -1,    19,    48,    49,    50,    23,    24,
      25,    19,    -1,    28,    29,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,     7,    -1,    44,
      -1,    -1,    -1,    48,    49,    50,    44,    -1,    -1,    19,
      48,    49,    50,    23,    24,    25,    19,    -1,    28,    29,
      23,    24,    25,    19,    27,    28,    29,    23,    24,    25,
      -1,    27,    28,    29,    44,    -1,    -1,    -1,    48,    49,
      50,    44,    -1,    -1,    -1,    48,    49,    50,    44,    -1,
      -1,    19,    48,    49,    50,    23,    24,    25,    19,    -1,
      28,    29,    23,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    44,    -1,    -1,    -1,
      48,    49,    50,    44,    -1,    -1,    -1,    48,    49,    50,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     9,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    21,    23,    24,    25,    28,
      29,    44,    48,    49,    50,    53,    54,    55,    56,    57,
      59,    60,    61,    62,    63,    64,    65,    66,    19,    19,
      19,    23,    65,    19,    19,    19,    65,    53,    30,    31,
      32,    33,    34,    49,    50,    65,    65,    23,    23,     0,
      54,     8,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    23,    58,    65,    65,     7,
      57,    27,    65,    27,    65,    20,    20,    22,    59,    65,
      65,    65,    65,    65,    23,    58,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    30,
      20,    20,     7,    65,     7,     8,    20,    20,     8,    20,
      20,    21,    65,    56,    56,    20,    54,     7,     7,    65,
       6,    65,     6,    65,    53,    10,    56,    20,    20,    54,
      20,    54,     7,    65,    20,    65,    20,    22,    56,    60,
      56,    56,    20,    56,    20,    20,    54,    20,    20,    56,
      56,    56,    20,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    56,    57,    57,    57,
      57,    58,    59,    59,    59,    59,    59,    59,    60,    60,
      60,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      63,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     7,     5,
       7,     9,     8,     8,     8,     7,     7,     7,     6,     5,
       1,     1,     2,     4,     6,     7,     4,     4,     6,     7,
       4,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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
  case 2:
#line 33 "src/main.y"
                              {yyval=new TreeNode(1,NODE_COMP);yyval->child[0]=yyvsp[-1];root=yyval;}
#line 1595 "src/main.tab.cpp"
    break;

  case 3:
#line 34 "src/main.y"
                       {yyval=yyvsp[-1];yyval->addSibling(yyvsp[0]);}
#line 1601 "src/main.tab.cpp"
    break;

  case 4:
#line 35 "src/main.y"
            {yyval=yyvsp[0];}
#line 1607 "src/main.tab.cpp"
    break;

  case 5:
#line 38 "src/main.y"
        {yyval=yyvsp[0];}
#line 1613 "src/main.tab.cpp"
    break;

  case 6:
#line 39 "src/main.y"
            {yyval=yyvsp[0];}
#line 1619 "src/main.tab.cpp"
    break;

  case 7:
#line 40 "src/main.y"
              {yyval=yyvsp[0];}
#line 1625 "src/main.tab.cpp"
    break;

  case 8:
#line 41 "src/main.y"
          {yyval=yyvsp[0];}
#line 1631 "src/main.tab.cpp"
    break;

  case 9:
#line 42 "src/main.y"
           {yyval=yyvsp[0];}
#line 1637 "src/main.tab.cpp"
    break;

  case 10:
#line 43 "src/main.y"
             {yyval=yyvsp[0];}
#line 1643 "src/main.tab.cpp"
    break;

  case 11:
#line 44 "src/main.y"
            {yyval=yyvsp[0];}
#line 1649 "src/main.tab.cpp"
    break;

  case 12:
#line 45 "src/main.y"
          {yyval=yyvsp[0];}
#line 1655 "src/main.tab.cpp"
    break;

  case 13:
#line 46 "src/main.y"
            {yyval=NULL;}
#line 1661 "src/main.tab.cpp"
    break;

  case 14:
#line 47 "src/main.y"
       {yyval=yyvsp[0];}
#line 1667 "src/main.tab.cpp"
    break;

  case 16:
#line 52 "src/main.y"
                        {yyval=new TreeNode(yyvsp[-1]->lineno,NODE_COMP);yyval->child[0]=yyvsp[-1];}
#line 1673 "src/main.tab.cpp"
    break;

  case 17:
#line 55 "src/main.y"
                                   {
      yyval=yyvsp[-2];
      yyval->addSibling(yyvsp[0]);
}
#line 1682 "src/main.tab.cpp"
    break;

  case 18:
#line 59 "src/main.y"
                             {
    yyval=yyvsp[-2];
    yyval->addSibling(yyvsp[0]);
    sb.insert(yyvsp[0]->varName);
}
#line 1692 "src/main.tab.cpp"
    break;

  case 19:
#line 64 "src/main.y"
               {
    yyval=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
    yyval->child[0]=yyvsp[-1];
    yyval->child[1]=yyvsp[0];
    yyval->sType=STMT_DECL;
    yyvsp[0]->valType=yyvsp[-1]->valType;
    sb.insert(yyvsp[0]->varName);
}
#line 1705 "src/main.tab.cpp"
    break;

  case 20:
#line 72 "src/main.y"
                     {
    yyval=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
    yyval->child[0]=yyvsp[-1];
    yyval->child[1]=yyvsp[0];
    yyval->sType=STMT_DECL;
}
#line 1716 "src/main.tab.cpp"
    break;

  case 21:
#line 81 "src/main.y"
                         {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    yyval->sType=STMT_ASSIGN;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
    yyvsp[-2]->valType=VALUE_INT;
    sb.insert(yyvsp[-2]->varName);
}
#line 1729 "src/main.tab.cpp"
    break;

  case 22:
#line 91 "src/main.y"
                              {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    yyval->sType=STMT_ASSIGN;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 1740 "src/main.tab.cpp"
    break;

  case 23:
#line 97 "src/main.y"
                         {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    yyval->sType=STMT_ASSIGN;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 1751 "src/main.tab.cpp"
    break;

  case 24:
#line 103 "src/main.y"
                            {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    yyval->sType=STMT_ADD_ASSIGN;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 1762 "src/main.tab.cpp"
    break;

  case 25:
#line 109 "src/main.y"
                            {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    yyval->sType=STMT_SUB_ASSIGN;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 1773 "src/main.tab.cpp"
    break;

  case 26:
#line 115 "src/main.y"
                            {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    yyval->sType=STMT_MUL_ASSIGN;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 1784 "src/main.tab.cpp"
    break;

  case 27:
#line 121 "src/main.y"
                            {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    yyval->sType=STMT_DIV_ASSIGN;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 1795 "src/main.tab.cpp"
    break;

  case 28:
#line 130 "src/main.y"
                                 {
    yyval=new TreeNode(yyvsp[-4]->lineno,NODE_STMT);
    yyval->sType=STMT_IFELSE;
    yyval->child[0]=yyvsp[-4];
    yyval->child[1]=yyvsp[-2];
    yyval->child[2]=yyvsp[0];
}
#line 1807 "src/main.tab.cpp"
    break;

  case 29:
#line 137 "src/main.y"
                      {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    yyval->sType=STMT_IFELSE;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 1818 "src/main.tab.cpp"
    break;

  case 30:
#line 143 "src/main.y"
                                   {
    yyval=new TreeNode(yyvsp[-4]->lineno,NODE_STMT);
    yyval->sType=STMT_IFELSE;
    yyval->child[0]=yyvsp[-4];
    yyval->child[1]=yyvsp[-2];
    yyval->child[2]=yyvsp[0];
}
#line 1830 "src/main.tab.cpp"
    break;

  case 31:
#line 153 "src/main.y"
                                                               {
    yyval=new TreeNode(yyvsp[-6]->lineno,NODE_STMT);
    yyval->sType=STMT_FOR;
    yyval->child[0]=yyvsp[-6];
    yyval->child[1]=yyvsp[-4];
    yyval->child[2]=yyvsp[-2];
    yyval->child[3]=yyvsp[0];
}
#line 1843 "src/main.tab.cpp"
    break;

  case 32:
#line 161 "src/main.y"
                                                     {
    yyval=new TreeNode(yyvsp[-4]->lineno,NODE_STMT);
    yyval->sType=STMT_FOR;
    TreeNode* node=new TreeNode(yyvsp[-4]->lineno,NODE_NULL);
    yyval->child[0]=node;
    yyval->child[1]=yyvsp[-4];
    yyval->child[2]=yyvsp[-2];
    yyval->child[3]=yyvsp[0];
}
#line 1857 "src/main.tab.cpp"
    break;

  case 33:
#line 170 "src/main.y"
                                                          {
    yyval=new TreeNode(yyvsp[-5]->lineno,NODE_STMT);
    yyval->sType=STMT_FOR;
    TreeNode* node=new TreeNode(yyvsp[-5]->lineno,NODE_NULL);
    yyval->child[0]=yyvsp[-5];
    yyval->child[1]=node;
    yyval->child[2]=yyvsp[-2];
    yyval->child[3]=yyvsp[0];
}
#line 1871 "src/main.tab.cpp"
    break;

  case 34:
#line 179 "src/main.y"
                                                     {
    yyval=new TreeNode(yyvsp[-5]->lineno,NODE_STMT);
    yyval->sType=STMT_FOR;
    TreeNode* node=new TreeNode(yyvsp[-5]->lineno,NODE_NULL);
    yyval->child[0]=yyvsp[-5];
    yyval->child[1]=yyvsp[-3];
    yyval->child[2]=node;
    yyval->child[3]=yyvsp[0];
}
#line 1885 "src/main.tab.cpp"
    break;

  case 35:
#line 188 "src/main.y"
                                                {
    yyval=new TreeNode(yyvsp[-4]->lineno,NODE_STMT);
    yyval->sType=STMT_FOR;
    TreeNode* node1=new TreeNode(yyvsp[-4]->lineno,NODE_NULL);
    TreeNode* node2=new TreeNode(yyvsp[-4]->lineno,NODE_NULL);
    yyval->child[0]=yyvsp[-4];
    yyval->child[1]=node1;
    yyval->child[2]=node2;
    yyval->child[3]=yyvsp[0];
}
#line 1900 "src/main.tab.cpp"
    break;

  case 36:
#line 198 "src/main.y"
                                           {
    yyval=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
    yyval->sType=STMT_FOR;
    TreeNode* node1=new TreeNode(yyvsp[-3]->lineno,NODE_NULL);
    TreeNode* node2=new TreeNode(yyvsp[-3]->lineno,NODE_NULL);
    yyval->child[0]=node1;
    yyval->child[1]=yyvsp[-3];
    yyval->child[2]=node2;
    yyval->child[3]=yyvsp[0];
}
#line 1915 "src/main.tab.cpp"
    break;

  case 37:
#line 208 "src/main.y"
                                                {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    yyval->sType=STMT_FOR;
    TreeNode* node1=new TreeNode(yyvsp[-2]->lineno,NODE_NULL);
    TreeNode* node2=new TreeNode(yyvsp[-2]->lineno,NODE_NULL);
    yyval->child[0]=node1;
    yyval->child[1]=node2;
    yyval->child[2]=yyvsp[-2];
    yyval->child[3]=yyvsp[0];
}
#line 1930 "src/main.tab.cpp"
    break;

  case 38:
#line 218 "src/main.y"
                                      {
    yyval=new TreeNode(lineno,NODE_STMT);
    yyval->sType=STMT_FOR;
    TreeNode* node1=new TreeNode(lineno,NODE_NULL);
    TreeNode* node2=new TreeNode(lineno,NODE_NULL);
    TreeNode* node3=new TreeNode(lineno,NODE_NULL);
    yyval->child[0]=node1;
    yyval->child[1]=node2;
    yyval->child[2]=node3;
    yyval->child[3]=yyvsp[0];
}
#line 1946 "src/main.tab.cpp"
    break;

  case 39:
#line 232 "src/main.y"
                         {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    yyval->sType=STMT_WHILE;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 1957 "src/main.tab.cpp"
    break;

  case 40:
#line 241 "src/main.y"
        {yyval=yyvsp[0];}
#line 1963 "src/main.tab.cpp"
    break;

  case 41:
#line 242 "src/main.y"
           {yyval=yyvsp[0];}
#line 1969 "src/main.tab.cpp"
    break;

  case 42:
#line 243 "src/main.y"
              {yyval=yyvsp[-1];yyval->child[0]=yyvsp[0];}
#line 1975 "src/main.tab.cpp"
    break;

  case 43:
#line 247 "src/main.y"
                    {
    yyval=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
    yyval->sType=STMT_PRINTF;
    yyval->child[0]=yyvsp[-1];
}
#line 1985 "src/main.tab.cpp"
    break;

  case 44:
#line 252 "src/main.y"
                                 {
    yyval=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
    yyval->sType=STMT_PRINTF;
    yyval->child[0]=yyvsp[-3];
    yyval->child[1]=yyvsp[-1];
}
#line 1996 "src/main.tab.cpp"
    break;

  case 45:
#line 258 "src/main.y"
                                      {
    yyval=new TreeNode(yyvsp[-4]->lineno,NODE_STMT);
    yyval->sType=STMT_PRINTF;
    yyval->child[0]=yyvsp[-4];
    yyval->child[1]=yyvsp[-1];
}
#line 2007 "src/main.tab.cpp"
    break;

  case 46:
#line 264 "src/main.y"
                      {
    yyval=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
    yyval->sType=STMT_PRINTF;
    yyval->child[0]=yyvsp[-1];
}
#line 2017 "src/main.tab.cpp"
    break;

  case 47:
#line 269 "src/main.y"
                   {
    yyval=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
    yyval->sType=STMT_SCANF;
    yyval->child[0]=yyvsp[-1];
}
#line 2027 "src/main.tab.cpp"
    break;

  case 48:
#line 274 "src/main.y"
                                {
    yyval=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
    yyval->sType=STMT_SCANF;
    yyval->child[0]=yyvsp[-3];
    yyval->child[1]=yyvsp[-1];
}
#line 2038 "src/main.tab.cpp"
    break;

  case 49:
#line 280 "src/main.y"
                                     {
    yyval=new TreeNode(yyvsp[-4]->lineno,NODE_STMT);
    yyval->sType=STMT_SCANF;
    yyval->child[0]=yyvsp[-4];
    yyval->child[1]=yyvsp[-1];
}
#line 2049 "src/main.tab.cpp"
    break;

  case 50:
#line 286 "src/main.y"
                     {
    yyval=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
    yyval->sType=STMT_SCANF;
    yyval->child[0]=yyvsp[-1];
}
#line 2059 "src/main.tab.cpp"
    break;

  case 51:
#line 294 "src/main.y"
             {yyval=yyvsp[-1];yyval->valType=yyvsp[-1]->valType;}
#line 2065 "src/main.tab.cpp"
    break;

  case 52:
#line 295 "src/main.y"
                {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
    yyval->opType=OP_ADD;
    yyval->valType=VALUE_INT;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2077 "src/main.tab.cpp"
    break;

  case 53:
#line 302 "src/main.y"
                {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
    yyval->opType=OP_SUB;
    yyval->valType=VALUE_INT;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2089 "src/main.tab.cpp"
    break;

  case 54:
#line 309 "src/main.y"
                {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
    yyval->opType=OP_MUL;
    yyval->valType=VALUE_INT;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2101 "src/main.tab.cpp"
    break;

  case 55:
#line 316 "src/main.y"
                {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
    yyval->opType=OP_DIV;
    yyval->valType=VALUE_INT;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2113 "src/main.tab.cpp"
    break;

  case 56:
#line 323 "src/main.y"
                {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
    yyval->opType=OP_MOD;
    yyval->valType=VALUE_INT;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2125 "src/main.tab.cpp"
    break;

  case 57:
#line 330 "src/main.y"
                       {
    yyval=new TreeNode(yyvsp[0]->lineno,NODE_EXPR);
    yyval->opType=OP_MINUS;
    yyval->valType=VALUE_INT;
    yyval->child[0]=yyvsp[0];
}
#line 2136 "src/main.tab.cpp"
    break;

  case 58:
#line 336 "src/main.y"
                 {
    yyval=new TreeNode(yyvsp[0]->lineno,NODE_EXPR);
    yyval->opType=OP_INC;
    yyval->valType=VALUE_INT;
    yyval->child[0]=yyvsp[0];
}
#line 2147 "src/main.tab.cpp"
    break;

  case 59:
#line 342 "src/main.y"
                 {
    yyval=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
    yyval->opType=OP_INC;
    yyval->valType=VALUE_INT;
    yyval->child[0]=yyvsp[-1];
}
#line 2158 "src/main.tab.cpp"
    break;

  case 60:
#line 348 "src/main.y"
                 {
    yyval=new TreeNode(yyvsp[0]->lineno,NODE_EXPR);
    yyval->opType=OP_DEC;
    yyval->valType=VALUE_INT;
    yyval->child[0]=yyvsp[0];
}
#line 2169 "src/main.tab.cpp"
    break;

  case 61:
#line 354 "src/main.y"
                 {
    yyval=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
    yyval->opType=OP_INC;
    yyval->valType=VALUE_INT;
    yyval->child[0]=yyvsp[-1];
}
#line 2180 "src/main.tab.cpp"
    break;

  case 62:
#line 360 "src/main.y"
                {
    yyval=new TreeNode(yyvsp[0]->lineno,NODE_EXPR);
    yyval->opType=OP_AND;
    yyval->valType=VALUE_BOOL;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2192 "src/main.tab.cpp"
    break;

  case 63:
#line 367 "src/main.y"
               {
    yyval=new TreeNode(yyvsp[0]->lineno,NODE_EXPR);
    yyval->opType=OP_OR;
    yyval->valType=VALUE_BOOL;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2204 "src/main.tab.cpp"
    break;

  case 64:
#line 374 "src/main.y"
           {
    yyval=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
    yyval->opType=OP_NOT;
    yyval->valType=VALUE_BOOL;
    yyval->child[0]=yyvsp[0];
}
#line 2215 "src/main.tab.cpp"
    break;

  case 65:
#line 380 "src/main.y"
               {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
    yyval->opType=OP_LT;
    yyval->valType=VALUE_BOOL;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2227 "src/main.tab.cpp"
    break;

  case 66:
#line 387 "src/main.y"
               {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
    yyval->opType=OP_GT;
    yyval->valType=VALUE_BOOL;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2239 "src/main.tab.cpp"
    break;

  case 67:
#line 394 "src/main.y"
               {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
    yyval->opType=OP_LE;
    yyval->valType=VALUE_BOOL;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2251 "src/main.tab.cpp"
    break;

  case 68:
#line 401 "src/main.y"
               {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
    yyval->opType=OP_GE;
    yyval->valType=VALUE_BOOL;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2263 "src/main.tab.cpp"
    break;

  case 69:
#line 408 "src/main.y"
               {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
    yyval->opType=OP_EQ;
    yyval->valType=VALUE_BOOL;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2275 "src/main.tab.cpp"
    break;

  case 70:
#line 415 "src/main.y"
                {
    yyval=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
    yyval->opType=OP_NEQ;
    yyval->valType=VALUE_BOOL;
    yyval->child[0]=yyvsp[-2];
    yyval->child[1]=yyvsp[0];
}
#line 2287 "src/main.tab.cpp"
    break;

  case 71:
#line 422 "src/main.y"
        {yyval=yyvsp[0];}
#line 2293 "src/main.tab.cpp"
    break;

  case 72:
#line 423 "src/main.y"
        {yyval=yyvsp[0];}
#line 2299 "src/main.tab.cpp"
    break;

  case 73:
#line 424 "src/main.y"
             {yyval=yyvsp[0];}
#line 2305 "src/main.tab.cpp"
    break;

  case 74:
#line 425 "src/main.y"
       {yyval=yyvsp[0];}
#line 2311 "src/main.tab.cpp"
    break;

  case 75:
#line 426 "src/main.y"
          {yyval=yyvsp[0];}
#line 2317 "src/main.tab.cpp"
    break;

  case 76:
#line 430 "src/main.y"
        {yyval = new TreeNode(lineno, NODE_TYPE); yyval->valType = VALUE_INT;}
#line 2323 "src/main.tab.cpp"
    break;

  case 77:
#line 431 "src/main.y"
         {yyval = new TreeNode(lineno, NODE_TYPE); yyval->valType = VALUE_CHAR;}
#line 2329 "src/main.tab.cpp"
    break;

  case 78:
#line 432 "src/main.y"
         {yyval = new TreeNode(lineno, NODE_TYPE); yyval->valType = VALUE_BOOL;}
#line 2335 "src/main.tab.cpp"
    break;


#line 2339 "src/main.tab.cpp"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 435 "src/main.y"


int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}


