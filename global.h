#ifndef GLOBAL_H
#define GLOBAL_H

#define CONJ 0xFF00
#define DISJ 0x00FF
#define BOOL_CONJ true
#define BOOL_DISJ false
#define OPERAND_FIELD_CAPACITY 256

typedef unsigned char TOperand;
typedef enum {conjuct = BOOL_CONJ, disjunct = BOOL_DISJ} TOperation;

//#include "operandsmatrix.h"
//#include "operatormatrix.h"
//#include "cexpression.h"

//OperandsMatrix *_operandsMatrix = new OperandsMatrix ();

//OperatorMatrix *_operatorMatrix = new OperatorMatrix ();

#endif // GLOBAL_H
