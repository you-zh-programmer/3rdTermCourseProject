#ifndef CEXPRESSION_H
#define CEXPRESSION_H

#include <string>
<<<<<<< HEAD
//#include "operandsmatrix.h"
//#include "operatormatrix.h"
=======
<<<<<<< HEAD
//#include "operandsmatrix.h"
//#include "operatormatrix.h"
=======
#include "operandsmatrix.h"
#include "operatormatrix.h"
>>>>>>> 60419dbe49e5674adf5b4a11c7815d27be15c0ce
>>>>>>> 1f6a959e4363710bf4e322eb8115ae1c9b0355bf

#define BLOCK_SIZE 1

typedef std::string TExpression;
typedef bool* TFitnessFunction;
<<<<<<< HEAD
typedef unsigned char TOperand;
=======
<<<<<<< HEAD
typedef unsigned char TOperand;
=======
>>>>>>> 60419dbe49e5674adf5b4a11c7815d27be15c0ce
>>>>>>> 1f6a959e4363710bf4e322eb8115ae1c9b0355bf


class CExpression
{
private:
    TExpression expression;

    //The total number of operands and operators.
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 1f6a959e4363710bf4e322eb8115ae1c9b0355bf
    unsigned int expressionLength;

    //Array of all uniq operands used in native string expression.
    TOperand *operandsArray;

    //The total number of uniq operands.
    unsigned int expressionArity;

    //Length of function result equal to 2 ^ (number of uniq operands) ~ legnth of fitness function.
    unsigned int functionResultSize;

    //Returns operand's name according to it's position in operansArray.
    TOperand getOperandThrowIndex (unsigned int index);
<<<<<<< HEAD
=======
=======
    static unsigned int expressionLength;

    //Array of all uniq operands used in native string expression.
    static char *operandsArray;

    //The total number of uniq operands.
    static unsigned int expressionArity;

    //Length of function result equal to 2 ^ (number of uniq operands) ~ legnth of fitness function.
    static unsigned int functionResultSize;

    //Returns operand's name according to it's position in operansArray.
    char getOperandThrowIndex (unsigned int index);
>>>>>>> 60419dbe49e5674adf5b4a11c7815d27be15c0ce
>>>>>>> 1f6a959e4363710bf4e322eb8115ae1c9b0355bf

    //Expression validation check. Return "false" if invalid symbol have been founded. If expression valid, "true" result will be returned.
    bool invalidSymbolsExists();

    //Removes spaces from the expression.
    void removeSpaces();

    //Gives out memmory for operandsArray.
    void createOperandsArray();

    //Initializes operandsArray with all uniq values.
    void initializeOperandsArray();

    //Calculates the number of uniq operands in expression
    void calculateExpressionArity (TExpression& expression);

    //Calculate function result length (2 ^ (number of uniq operands)).
    void calculateFunctionResultStringLength();

public:
    CExpression(TExpression& expression);

    //Returns expressionArity.
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 1f6a959e4363710bf4e322eb8115ae1c9b0355bf
    unsigned int getExpressionArity();

    //Returns the length of expression.
    unsigned int getExpressionLength();

    //Returns the functionResultSize value.
    unsigned int getFitnessFunctionLength();

    TOperand *getOperandsArray();
<<<<<<< HEAD
=======
=======
    static unsigned int getExpressionArity();

    //Returns the length of expression.
    static unsigned int getExpressionLength();

    //Returns the functionResultSize value.
    static unsigned int getFitnessFunctionLength();
>>>>>>> 60419dbe49e5674adf5b4a11c7815d27be15c0ce
>>>>>>> 1f6a959e4363710bf4e322eb8115ae1c9b0355bf
};

#endif // CEXPRESSION_H
