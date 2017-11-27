#pragma once
#include "Structs.h"

//function that creates new 2D array
void CreateArray(Array* &array, const int* sizes, int tSize);
//functions sets element of given coordinations with value
void SetElement(int fIndex, int sIndex, Array** array, int value);
//fun that prints arrat elements
void Print(Array &array);
//Function that prints maxs
void PrintMax(Array* array);
//function that fills array with given value
void FillWith(Array* &array, int value);
//clearing memory
void Clear(Array** array);

