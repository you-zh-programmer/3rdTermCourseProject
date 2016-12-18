#ifndef LIFECYCLE_H
#define LIFECYCLE_H

#include <ctime>
#include "adjacencymatrix.h"
#include "cexpression.h"
#include "chromosome.h"
#include "operandsmatrix.h"
#include "operatormatrix.h"
#include "population.h"
#include "global.h"

TExpression *getInputExpression();

class LifeCycle
{
private:
    CExpression *_expression;

    //OperandsMatrix *_operandsMatrix;

    //OperatorMatrix *_operatorMatrix;

    //PopulationList *_populationList;

public:
    LifeCycle (CExpression *expression);

    void cycle ();

};

#endif // LIFECYCLE_H
