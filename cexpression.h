#ifndef CEXPRESSION_H
#define CEXPRESSION_H

#include <string>
//#include "operandsmatrix.h"
//#include "operatormatrix.h"

#include "global.h"
#include <climits>

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
    TOperand *operandsArray;

    //The total number of uniq operands.
    unsigned int expressionArity;

    //Length of function result equal to 2 ^ (number of uniq operands) ~ legnth of fitness function.
    unsigned int fitnessFunctionLength;

    //The result of source expression calculation.
    TFitnessFunction expressionResult;

    //Returns operand's name according to it's position in operansArray.
    TOperand getOperandThrowIndex (unsigned int index);

    //Expression validation check. Return "false" if invalid symbol have been founded. If expression valid, "true" result will be returned.
    bool invalidSymbolsExists();

    //Removes spaces from the expression.
    void removeSpaces();

    //Gives out memmory for operandsArray.
    void createOperandsArray();

    //Initializes operandsArray with all uniq values.
    void initializeOperandsArray (bool *checkArray);

    //Calculates the number of uniq operands in expression
    void calculateExpressionArity ();

    //Calculate function result length (2 ^ (number of uniq operands)).
    void calculateFunctionResultStringLength();

    void invertFitnessFuntion (TFitnessFunction sourcefitnessFunction, TFitnessFunction resultFitnessFunction);

    TFitnessFunction calculateFunctionResult (unsigned int left, unsigned int right);

    unsigned int getLowerPriorityPosition (unsigned int leftIndex, unsigned int righntIndex);

public:
    CExpression(TExpression expression);

    //Returns expressionArity.
    unsigned int getExpressionArity();

    //Returns the length of expression.
    unsigned int getExpressionLength();

    //Returns the functionResultSize value.
    unsigned int getFitnessFunctionLength();

    unsigned int getOperandNumber (TOperand operand);

    TFitnessFunction getSourceExpressionResult ();

    //Conjuct two fitness functions.
    static TFitnessFunction conjuction (TFitnessFunction fun1, TFitnessFunction fun2, unsigned int fitnessFunctionLength);

    //Disjunct two fitness functions.
    static TFitnessFunction disjunctive (TFitnessFunction fun1, TFitnessFunction fun2, unsigned int fitnessFunctionLength);

    static void initializeSimpleFunction (TFitnessFunction fitnessFunction, unsigned int operandNumber, unsigned int fitnessFunctionLength);

    TExpression *getExpression ();

    TOperand *getOperandsArray();
};

#endif // CEXPRESSION_H
