#pragma once
#include "Prerequisitos.h"
class Cliente
{
public:
	Cliente(string _nombre, int _puntos, int _telefono, string _correo, int _ID) : m_nombre(_nombre), m_puntos(_puntos), m_telefono(_telefono), m_correo(_correo), m_ID(_ID) {}


	void obtenerDatos() {
		cout << "Nombre: " << m_nombre << " Puntos: " << m_puntos << " Telefono: " << m_telefono<< " correo: "<< m_correo << " ID: "<<m_ID<< endl;
	}



	string getCorreo() {
		return m_correo;
	}

	string getNombre() {
		return m_nombre;
	}

	int getTelefono() {
		return m_telefono;
	}
	int getID() {
		return m_ID;
	}

	int getPuntos() {
		return m_puntos;
	}

private:
	string m_nombre;
	int m_puntos;
	int m_telefono;
	string m_correo;
	int m_ID;


};

