#pragma 
#include "Prerequisitos.h"
#include "Producto.h"
class Proveedor
{
public:

	Proveedor(string _proveedor) :m_proveedor(_proveedor) {}

	void datosProducto() {
		cout << "nombre del proveedor: " << m_proveedor << endl;

	}


	string getNombreProveedor() {
		return m_proveedor;
	}

private:
	vector <Producto> m_productos;
	string m_proveedor;


};

