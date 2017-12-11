#include "MyArray.h"

#include <iostream>

using namespace std;

int& MyArray::at (int index)const
{	

	return m_tab[index];
}


void MyArray::print()
{
	cout<<"Array Content"<<endl;
	for(int i = 0; i < size; i++)
	{
		cout<<"array["<<i<<"] = "<<m_tab[i]<<endl;
	}
}


void MyArray::resize(int new_size)
{
	int *tmp = new int [this->size];
	for (int i = 0; i<this->size; i++)
		tmp[i]=m_tab[i];
	delete [] m_tab;
	m_tab = new int [new_size];
	for (int i = 0; i<this->size; i++)
		m_tab[i]=tmp[i];
	delete [] tmp;

	m_adres_size = (int*)(&size);
	*m_adres_size = new_size;


}


MyArray::MyArray(int new_size) : size(new_size), m_adres_size((int*)&size)
{
	m_tab = new int [this->size];
	
}


MyArray::~MyArray()
{
	delete [] m_tab;
}


MyArray::MyArray(const MyArray &object) : size(object.size)
{
	m_tab = new int[size];
}