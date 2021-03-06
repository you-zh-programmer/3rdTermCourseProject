#ifndef OPERANDSMATRIX_H
#define OPERANDSMATRIX_H

#include "adjacencymatrix.h"
#include "cexpression.h"

#define ALPHABET_SIZE 26

//Two-dimensional matrix, consisting of randomly spreaded operands of source expression.
class OperandsMatrix : AdjacencyMatrix
{
private:
    //Array of all uniq different operands.
    TOperand *operands;

    CExpression *sourceExpression;

    //Returns the part or operand's repeats among others in the operand's field.
    unsigned int calculateChance();

    //Initializes all cells of operand's field with random values.
    void initializeField();

public:
    OperandsMatrix (CExpression *expression);

    TOperand getOperandThrowPosition (TCell xCoord, TCell yCoord);

    TCell getXCoordThrowValue (TCell value);

    TCell getYCoordThrowValue (TCell value);
};

//extern OperandsMatrix *_operandsMatrix;

#endif // OPERANDSMATRIX_H
