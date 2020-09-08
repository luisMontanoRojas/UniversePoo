#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

template <class T>
class Universo {
private:
	string nombre;
	int cantPlanetas;
public:
	Universo();
	~Universo();
	void setNombreUniverso(string nombre);
	string getNombreUniverso();
	void setCantPlanetas(int cant);
	int getCantPlanetas();
};

template<class T>
inline Universo<T>::Universo()
{
	this->nombre = "";
	this->cantPlanetas = 0;
}

template<class T>
inline Universo<T>::~Universo()
{
}

template<class T>
inline void Universo<T>::setNombreUniverso(string nombre)
{
	this->nombre = nombre;
}

template<class T>
inline string Universo<T>::getNombreUniverso()
{
	return this->nombre;
}

template<class T>
inline void Universo<T>::setCantPlanetas(int cant)
{
	this->cantPlanetas = cant;
}

template<class T>
inline int Universo<T>::getCantPlanetas()
{
	return this->cantPlanetas;
}
