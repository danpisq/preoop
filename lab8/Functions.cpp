
#include "Functions.h"
#include <iostream>


void CreateArray(Array* &array, const int* sizes, int tSize)
{
  array = new Array;
  array->tSize = tSize;
  array->sizes = new int [tSize];

  for(int i = 0; i < tSize; i++)
    (array->sizes)[i] = sizes[i];
  
  array->tab = new int* [tSize];

  for(int i = 0; i < tSize; i++)
    (array->tab)[i] = new int [sizes[i]];
}


void SetElement(int fIndex, int sIndex, Array** array, int value)
{
  if((fIndex < (*array)->tSize) && (sIndex < ((*array)->sizes)[fIndex]))
    ((*array)->tab)[fIndex][sIndex] = value;
}


void Print(Array &array)
{
  for(int i = 0; i < array.tSize; i++)
  {
    for(int j = 0; j < (array.sizes)[i]; j++)
    {
      std::cout<<((array.tab)[i][j])<<" ";
    }
    std::cout<<std::endl;
  }
}


void PrintMax(Array* array)
{
  int* maxRow = new int [array->tSize];
  
  for(int i = 0; i < array->tSize; i++)
  {
    maxRow[i] = (array->tab)[i][0];
  }
  int maxTab = maxRow[0];
  
  for(int i = 0; i < array->tSize; i++ )
  {
    for(int j = 0; j < (array->sizes)[i]; j++)
    {
      if((array->tab)[i][j] > maxRow[i] )
	maxRow[i] = (array->tab)[i][j];
    }
    if(maxRow[i] > maxTab)
      maxTab = maxRow[i];
  }
  for(int i = 0; i < array->tSize; i++)
    std::cout<<"Max in row "<<i<<": "<<maxRow[i]<<std::endl;

  std::cout<<"Global max: "<<maxTab<<std::endl;
  delete [] maxRow;
}


void FillWith(Array* &array, int value)
{
  for(int i = 0; i < array->tSize; i++)
  {
    for(int j = 0; j < (array->sizes)[i]; j++)
      (array->tab)[i][j] = value;
  }
}


void Clear(Array** array)
{
  for(int i = 0; i < (*array)->tSize; i++)
    delete []  ((*array)->tab)[i];
  
  delete [] (*array)->tab;
  delete [] (*array)->sizes;
  delete *array;
}
