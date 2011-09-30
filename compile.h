#ifndef _compile_h_
#define _compile_h_

#include <stdlib.h>
#include <stdio.h>

#include "type.h"
#include "expr.h"
#include "expr1.h"
#include "expr2.h"
#include "expr3.h"
#include "program.h"
#include "bytecode.h"
#include "env.h"
#include "id.h"

BDExpr1 *bd_typing(BDExpr1 *e);
BDExpr2 *bd_knormalize(BDExpr1 *e);
BDExpr2 *bd_alpha_convert(BDExpr2 *e);
BDExpr2 *bd_alpha(Env *env, BDExpr2 *e);
BDExpr2 *bd_beta_reduce(BDExpr2 *e);
BDExpr2 *bd_flatten(BDExpr2 *e);
BDExpr2 *bd_inline_expand(int threashold, BDExpr2 *e);
BDExpr2 *bd_const_fold(BDExpr2 *e);
BDExpr2 *bd_elim(BDExpr2 *e);
BDProgram1 *bd_closure_transform(BDExpr2 *e);
BDProgram2 *bd_generate_bytecode(BDProgram1 *prog);

#endif
