#pragma once
#include "Prerequisitos.h"
class Producto
{
public: 
	Producto( string _nombre, string _cantidad, int _ID):m_nombre(_nombre),m_cantidad(_cantidad),m_ID(_ID){}

	void mostrarDatosProducto() {
		cout << "nombre de producto: " << m_nombre << " cantidad: " << m_cantidad << " ID del producto: "<< m_ID << endl;

	}


	string getNombre() {
		return m_nombre;
	}
	string getCantidad() {
		return m_cantidad;
	}
	int getID() {
		return m_ID;
	}

private:
	string m_nombre;
	string m_cantidad;
	int m_ID;
};

