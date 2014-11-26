// This file is automatically generated. Do not edit!

#include "mp/problem-base.h"
#include "precedence.h"

const mp::expr::OpCodeInfo mp::expr::OpCodeInfo::INFO[] = {
  {expr::ADD, expr::FIRST_BINARY},
  {expr::SUB, expr::FIRST_BINARY},
  {expr::MUL, expr::FIRST_BINARY},
  {expr::DIV, expr::FIRST_BINARY},
  {expr::MOD, expr::FIRST_BINARY},
  {expr::POW, expr::FIRST_BINARY},
  {expr::LESS, expr::FIRST_BINARY},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::MIN, expr::FIRST_VARARG},
  {expr::MAX, expr::FIRST_VARARG},
  {expr::FLOOR, expr::FIRST_UNARY},
  {expr::CEIL, expr::FIRST_UNARY},
  {expr::ABS, expr::FIRST_UNARY},
  {expr::MINUS, expr::FIRST_UNARY},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::OR, expr::FIRST_BINARY_LOGICAL},
  {expr::AND, expr::FIRST_BINARY_LOGICAL},
  {expr::LT, expr::FIRST_RELATIONAL},
  {expr::LE, expr::FIRST_RELATIONAL},
  {expr::EQ, expr::FIRST_RELATIONAL},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::GE, expr::FIRST_RELATIONAL},
  {expr::GT, expr::FIRST_RELATIONAL},
  {expr::NE, expr::FIRST_RELATIONAL},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::NOT, expr::NOT},
  {expr::IF, expr::IF},
  {expr::UNKNOWN, expr::UNKNOWN},
  {expr::TANH, expr::FIRST_UNARY},
  {expr::TAN, expr::FIRST_UNARY},
  {expr::SQRT, expr::FIRST_UNARY},
  {expr::SINH, expr::FIRST_UNARY},
  {expr::SIN, expr::FIRST_UNARY},
  {expr::LOG10, expr::FIRST_UNARY},
  {expr::LOG, expr::FIRST_UNARY},
  {expr::EXP, expr::FIRST_UNARY},
  {expr::COSH, expr::FIRST_UNARY},
  {expr::COS, expr::FIRST_UNARY},
  {expr::ATANH, expr::FIRST_UNARY},
  {expr::ATAN2, expr::FIRST_BINARY},
  {expr::ATAN, expr::FIRST_UNARY},
  {expr::ASINH, expr::FIRST_UNARY},
  {expr::ASIN, expr::FIRST_UNARY},
  {expr::ACOSH, expr::FIRST_UNARY},
  {expr::ACOS, expr::FIRST_UNARY},
  {expr::SUM, expr::SUM},
  {expr::INT_DIV, expr::FIRST_BINARY},
  {expr::PRECISION, expr::FIRST_BINARY},
  {expr::ROUND, expr::FIRST_BINARY},
  {expr::TRUNC, expr::FIRST_BINARY},
  {expr::COUNT, expr::COUNT},
  {expr::NUMBEROF, expr::NUMBEROF},
  {expr::NUMBEROF_SYM, expr::NUMBEROF_SYM},
  {expr::ATLEAST, expr::FIRST_LOGICAL_COUNT},
  {expr::ATMOST, expr::FIRST_LOGICAL_COUNT},
  {expr::PLTERM, expr::PLTERM},
  {expr::IFSYM, expr::IFSYM},
  {expr::EXACTLY, expr::FIRST_LOGICAL_COUNT},
  {expr::NOT_ATLEAST, expr::FIRST_LOGICAL_COUNT},
  {expr::NOT_ATMOST, expr::FIRST_LOGICAL_COUNT},
  {expr::NOT_EXACTLY, expr::FIRST_LOGICAL_COUNT},
  {expr::FORALL, expr::FIRST_ITERATED_LOGICAL},
  {expr::EXISTS, expr::FIRST_ITERATED_LOGICAL},
  {expr::IMPLICATION, expr::IMPLICATION},
  {expr::IFF, expr::FIRST_BINARY_LOGICAL},
  {expr::ALLDIFF, expr::FIRST_PAIRWISE},
  {expr::NOT_ALLDIFF, expr::FIRST_PAIRWISE},
  {expr::POW_CONST_EXP, expr::FIRST_BINARY},
  {expr::POW2, expr::FIRST_UNARY},
  {expr::POW_CONST_BASE, expr::FIRST_BINARY},
  {expr::CALL, expr::CALL},
  {expr::CONSTANT, expr::CONSTANT},
  {expr::STRING, expr::STRING},
  {expr::VARIABLE, expr::VARIABLE}
};

const mp::internal::ExprInfo mp::internal::ExprInfo::INFO[] = {
  {-1, prec::UNKNOWN, "unknown"},
  {82, prec::PRIMARY, "variable"},
  {16, prec::UNARY, "unary -"},
  {15, prec::CALL, "abs"},
  {13, prec::CALL, "floor"},
  {14, prec::CALL, "ceil"},
  {39, prec::CALL, "sqrt"},
  {77, prec::EXPONENTIATION, "^2"},
  {44, prec::CALL, "exp"},
  {43, prec::CALL, "log"},
  {42, prec::CALL, "log10"},
  {41, prec::CALL, "sin"},
  {40, prec::CALL, "sinh"},
  {46, prec::CALL, "cos"},
  {45, prec::CALL, "cosh"},
  {38, prec::CALL, "tan"},
  {37, prec::CALL, "tanh"},
  {51, prec::CALL, "asin"},
  {50, prec::CALL, "asinh"},
  {53, prec::CALL, "acos"},
  {52, prec::CALL, "acosh"},
  {49, prec::CALL, "atan"},
  {47, prec::CALL, "atanh"},
  {0, prec::ADDITIVE, "+"},
  {1, prec::ADDITIVE, "-"},
  {6, prec::ADDITIVE, "less"},
  {2, prec::MULTIPLICATIVE, "*"},
  {3, prec::MULTIPLICATIVE, "/"},
  {55, prec::MULTIPLICATIVE, "div"},
  {4, prec::MULTIPLICATIVE, "mod"},
  {5, prec::EXPONENTIATION, "^"},
  {78, prec::EXPONENTIATION, "^"},
  {76, prec::EXPONENTIATION, "^"},
  {48, prec::CALL, "atan2"},
  {56, prec::CALL, "precision"},
  {57, prec::CALL, "round"},
  {58, prec::CALL, "trunc"},
  {35, prec::CONDITIONAL, "if"},
  {65, prec::CONDITIONAL, "symbolic if"},
  {64, prec::CALL, "piecewise-linear term"},
  {79, prec::CALL, "function call"},
  {11, prec::CALL, "min"},
  {12, prec::CALL, "max"},
  {54, prec::ITERATIVE, "sum"},
  {60, prec::CALL, "numberof"},
  {61, prec::CALL, "symbolic numberof"},
  {59, prec::CALL, "count"},
  {80, prec::PRIMARY, "constant"},
  {34, prec::NOT, "!"},
  {20, prec::LOGICAL_OR, "||"},
  {21, prec::LOGICAL_AND, "&&"},
  {73, prec::IFF, "<==>"},
  {22, prec::RELATIONAL, "<"},
  {23, prec::RELATIONAL, "<="},
  {24, prec::RELATIONAL, "="},
  {28, prec::RELATIONAL, ">="},
  {29, prec::RELATIONAL, ">"},
  {30, prec::RELATIONAL, "!="},
  {62, prec::CALL, "atleast"},
  {63, prec::CALL, "atmost"},
  {66, prec::CALL, "exactly"},
  {67, prec::CALL, "!atleast"},
  {68, prec::CALL, "!atmost"},
  {69, prec::CALL, "!exactly"},
  {72, prec::IMPLICATION, "==>"},
  {71, prec::CALL, "exists"},
  {70, prec::CALL, "forall"},
  {74, prec::CALL, "alldiff"},
  {75, prec::CALL, "!alldiff"},
  {81, prec::PRIMARY, "string"}
};
