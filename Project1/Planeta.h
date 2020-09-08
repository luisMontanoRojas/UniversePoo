#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

template <class T>
class Planeta {
private:
	string nombre;
	bool poblado;
	int cantidadPoblacion;
	bool contaminacion;
	int edad;
	int radio;
public:
	Planeta();
	~Planeta();
	void setNombrePlaneta(string nombre);
	void setPoblado(bool state);
	void setCantidadPoblacion(int num);
	void setContaminacion(bool state);
	void setEdad(int edad);
	void setRadio(int r);
	string getNombre();
	bool getPoblado();
	int getCantidadPoblacion();
	bool getContaminacion();
	int getEdad();
	int getRadio();
};

template<class T>
inline Planeta<T>::Planeta()
{
}

template<class T>
inline Planeta<T>::~Planeta()
{
}

template<class T>
inline void Planeta<T>::
setNombrePlaneta(string nombre)
{
}

template<class T>
inline void Planeta<T>::setPoblado(bool state)
{
}

template<class T>
inline void Planeta<T>::setCantidadPoblacion(int num)
{
}

template<class T>
inline void Planeta<T>::setContaminacion(bool state)
{
}

template<class T>
inline void Planeta<T>::setEdad(int edad)
{
}

template<class T>
inline void Planeta<T>::setRadio(int r)
{
}

template<class T>
inline string Planeta<T>::getNombre()
{
	return string();
}

template<class T>
inline bool Planeta<T>::getPoblado()
{
	return false;
}

template<class T>
inline int Planeta<T>::getCantidadPoblacion()
{
	return 0;
}

template<class T>
inline bool Planeta<T>::getContaminacion()
{
	return false;
}

template<class T>
inline int Planeta<T>::getEdad()
{
	return 0;
}

template<class T>
inline int Planeta<T>::getRadio()
{
	return 0;
}
