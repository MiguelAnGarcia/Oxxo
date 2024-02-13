#include "Prerequisitos.h"
#include "Cliente.h"
#include "Producto.h"

class Sistema
{
private:
	vector <Cliente> m_clientes;

	void setCliente(Cliente _cliente);
	void deleteCliente();

	void getClientes();

	void crearCliente();


	vector <Producto> m_productos;

	void setProductos(Producto _producto);
	void venderProducto();

	void getProductos();

	void crearProducto();


public:
	Sistema();

};

