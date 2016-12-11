#ifndef ADJACENCYMATRIX_H
#define ADJACENCYMATRIX_H

<<<<<<< HEAD
#include "cexpression.h"

=======
>>>>>>> 60419dbe49e5674adf5b4a11c7815d27be15c0ce
#define OPERAND_FIELD_CAPACITY 256

typedef unsigned char TCell;

unsigned int letterToInt (char letter);

class AdjacencyMatrix
{
protected:
    //Two-dimensional matrix, consisting of randomly spreaded operands of source expression.
    TCell **field;
    //The part of operand's repeats among others in the operand's field.
    unsigned int chance;

    void setChance (unsigned int chance);
    void getRandomPosition (unsigned int &i, unsigned int &j);
private:
    unsigned int getChance();

public:
<<<<<<< HEAD
    AdjacencyMatrix ();
=======
    AdjacencyMatrix();
>>>>>>> 60419dbe49e5674adf5b4a11c7815d27be15c0ce
};

#endif // ADJACENCYMATRIX_H
