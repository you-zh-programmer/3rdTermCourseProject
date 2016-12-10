#ifndef CEXPRESSION_H
#define CEXPRESSION_H

#include <string>
#include "operandsmatrix.h"
#include "operatormatrix.h"

#define BLOCK_SIZE 1

typedef std::string TExpression;
typedef bool* TFitnessFunction;


class CExpression
{
private:
    TExpression expression;
    //The total number of operands and operators.
    unsigned int expressionLength;
    //Array of all uniq operands used in native string expression.
    static char *operandsArray;
    //The total number of uniq operands.
    static unsigned int expressionArity;
    //Length of function result equal to 2 ^ (number of uniq operands) ~ legnth of fitness function.
    static unsigned int functionResultSize;

    //Returns operand's name according to it's position in operansArray.
    char getOperandThrowIndex (unsigned int index);
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

public:
    CExpression(TExpression& expression);
    //Returns expressionArity.
    unsigned int getExpressionArity();
    //Returns the length of expression.
    unsigned int getExpressionLength();
    //Returns the functionResultSize value.
    unsigned int getFitnessFunctionLength();
};

#endif // CEXPRESSION_H
