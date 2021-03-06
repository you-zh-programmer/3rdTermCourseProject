#include "adjacencymatrix.h"

AdjacencyMatrix::AdjacencyMatrix()
{
    //выделение памяти под поле операндов
    field = (TCell**) calloc (OPERAND_FIELD_CAPACITY, sizeof (TCell*));

    //выделение памяти под столбцы
    for (unsigned int i = 0; i < OPERAND_FIELD_CAPACITY; i++)
        field[i] = (TCell*) calloc (OPERAND_FIELD_CAPACITY, sizeof (TCell));
}


void AdjacencyMatrix::setChance (unsigned int chance)
{
    this->chance = chance;
}


unsigned int AdjacencyMatrix::getChance()
{
    return this->chance;
}


void AdjacencyMatrix::getRandomPosition (unsigned int &i, unsigned int &j)
{
    while (0 == letterToInt (this->field[i][j]))
    {
        i = rand() % OPERAND_FIELD_CAPACITY;
        j = rand() % OPERAND_FIELD_CAPACITY;
    }
}


unsigned int letterToInt (char letter)
{
    return (unsigned int) letter - 97;
}
