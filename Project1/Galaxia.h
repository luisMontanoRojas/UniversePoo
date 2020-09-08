#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

template <class T>
class Galaxia {
private:
	string nombre;
public:
	Galaxia();
	~Galaxia();
	void setNombreGalaxia(string nombre);
	string getNombreGalaxia();
};

template<class T>
inline Galaxia<T>::Galaxia()
{
	this->nombre = "";
}

template<class T>
inline Galaxia<T>::~Galaxia()
{
}

template<class T>
inline void Galaxia<T>::setNombreGalaxia(string nombre)
{
	this->nombre = nombre;
}

template<class T>
inline string Galaxia<T>::getNombreGalaxia()
{
	return this->nombre;
}
