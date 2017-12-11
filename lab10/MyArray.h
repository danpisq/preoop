#pragma once

//klasa przechowujaca tablice o rozmiarze size
class MyArray{ 
public:
	//zmienia wartosc elementu 'index' w tablicy
	int& at (int index) const;

	//wyswietla tablice
	void print();

	//zmienia wielkosc tablicy na new_size
	void resize(int new_size);

	//konstruktor
	MyArray(int new_size);

	//konstruktor kopiujacy majacy zmieniac wartosc size w klasie
	MyArray(const MyArray &object);

	//destuktor 
	~MyArray();

	//zmienna przechowujaca wielkosc tablicy
	const int size;
private:
	//wskaznik na tablice o rozmiarze size
	int* m_tab; 
	//wskaznik na size
	int *m_adres_size;
};
