#include "operandsmatrix.h"

#include <cstdlib>
#include <ctime>


<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 1f6a959e4363710bf4e322eb8115ae1c9b0355bf
OperandsMatrix :: OperandsMatrix (CExpression *expression)
{
    //Construction and initialization
    AdjacencyMatrix ();

    OperandsMatrix :: sourceExpression = expression;

    this->operands = expression->getOperandsArray ();

    this->setChance (calculateChance ());

    initializeField ();
<<<<<<< HEAD
=======
=======
OperandsMatrix::OperandsMatrix (TOperand &operands)
{
    //Construction and initialization
    AdjacencyMatrix();
    this->operands = &operands;
    this->setChance (calculateChance());
    initializeField();
>>>>>>> 60419dbe49e5674adf5b4a11c7815d27be15c0ce
>>>>>>> 1f6a959e4363710bf4e322eb8115ae1c9b0355bf
}

//Returns the part of operand's repeats among others in the operand's field.
unsigned int OperandsMatrix::calculateChance()
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 1f6a959e4363710bf4e322eb8115ae1c9b0355bf
    return ((OPERAND_FIELD_CAPACITY * OPERAND_FIELD_CAPACITY) % (this->sourceExpression->getExpressionArity() * 2 + 1));
}

//Initializes all cells of operand's field with random values.
void OperandsMatrix::initializeField ()
<<<<<<< HEAD
=======
=======
    return ((OPERAND_FIELD_CAPACITY * OPERAND_FIELD_CAPACITY) % (CExpression :: getExpressionArity() * 2 + 1));
}

//Initializes all cells of operand's field with random values.
void OperandsMatrix::initializeField()
>>>>>>> 60419dbe49e5674adf5b4a11c7815d27be15c0ce
>>>>>>> 1f6a959e4363710bf4e322eb8115ae1c9b0355bf
{
    srand(time(NULL));

    unsigned int i = 0, j = 0;
<<<<<<< HEAD
    unsigned int expressionArity = this->sourceExpression->getExpressionArity();
=======
<<<<<<< HEAD
    unsigned int expressionArity = this->sourceExpression->getExpressionArity();
=======
    unsigned int expressionArity = CExpression :: getExpressionArity();
>>>>>>> 60419dbe49e5674adf5b4a11c7815d27be15c0ce
>>>>>>> 1f6a959e4363710bf4e322eb8115ae1c9b0355bf
    bool inversionFlag = true;

    //Filling cells with random values
    for (unsigned int k = 0; k < expressionArity; k++)
        for (unsigned int n = 0; n < this->chance; n++)
        {
            //Getting random free position coordinates.
            getRandomPosition (i, j);
            this->field[i][j] = this->operands[k];

            //Inversing of the hulf part of values.
            if (inversionFlag)
            this->field[i][j] |= 128;

            inversionFlag = !inversionFlag;
        }
}

TOperand OperandsMatrix :: getOperandThrowPosition (TCell xCoord, TCell yCoord)
{
    return this->field[xCoord][yCoord];
}


unsigned int OperandsMatrix :: getOperandNumber (TOperand operand)
{
    unsigned int position = 0;
<<<<<<< HEAD
    unsigned int expressionArity = OperandsMatrix :: sourceExpression->getExpressionArity ();
=======
<<<<<<< HEAD
    unsigned int expressionArity = OperandsMatrix :: sourceExpression->getExpressionArity ();
=======
    unsigned int expressionArity = CExpression :: getExpressionArity();
>>>>>>> 60419dbe49e5674adf5b4a11c7815d27be15c0ce
>>>>>>> 1f6a959e4363710bf4e322eb8115ae1c9b0355bf

    while ((position < expressionArity) & (operand != this->operands[position]))
        position++;

    return position;
}
