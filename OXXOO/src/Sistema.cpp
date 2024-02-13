#include "Sistema.h"

void Sistema::setCliente(Cliente _cliente)
{
	m_clientes.push_back(_cliente);
}

void Sistema::deleteCliente()
{
	int _ID;
	cout << "cual es el ID del cliente que quieres borrar? ";
	cin >> _ID;

	for (Cliente _cliente : m_clientes) {
		if (_cliente.getID() == _ID) {
			m_clientes.erase(m_clientes.begin() + (_ID - 1));

		}
	}
}

void Sistema::getClientes()
{
	for (Cliente _cliente : m_clientes) {
		cout << "********************************" << endl;

		_cliente.obtenerDatos();

		cout << "********************************" << endl;
	}
}

void Sistema::crearCliente()
{
	string nombreCliente;
	int numeroTelefono;
	string correoCliente;

	cout << "dame el nombre del cliente" << endl;
	cin >> nombreCliente;
	cin.ignore();
	cout << "dame el numero de telefono del cliente" << endl;
	cin >> numeroTelefono;
	cout << "dame el correo electronico del cliente " << endl;
	cin >> correoCliente;
	cin.ignore();
	Cliente cliente = Cliente(nombreCliente, 0, numeroTelefono, correoCliente, m_clientes.size() + 1);
	setCliente(cliente);
}

void Sistema::setProductos(Producto _producto)
{
	m_productos.push_back(_producto);
}

void Sistema::venderProducto()
{
	int _ID;
	cout << "cual es el ID del cliente que quieres Vender? ";
	cin >> _ID;

	for (Producto _producto : m_productos) {
		if (_producto.getID() == _ID) {
			m_productos.erase(m_productos.begin() + (_ID - 1));

		}
	}
}

void Sistema::getProductos()
{
	for (Producto _producto : m_productos) {
		cout << "********************************" << endl;
		
		_producto.mostrarDatosProducto();

		cout << "********************************" << endl;
	}
}

void Sistema::crearProducto()
{
	string nombreProducto;
	string cantidadProducto;

	cout << "nombre del producto a registrar: " << endl;
	cin >> nombreProducto;
	cin.ignore();

	cout << "cantidad del producto a registrar (agregar ml o Kg)"<< endl;
	cin >> cantidadProducto;
	cin.ignore();
	Producto producto = Producto(nombreProducto,  cantidadProducto, m_productos.size() + 1);
	setProductos(producto);
}

Sistema::Sistema()
{

	// Cargando sistema con porcentaje

	for (int i = 0; i <= 100; i++)
	{
		cout << "iniciando sistema OXXO " << i << " %" << endl;
		sleep_for(milliseconds(50));
		system("CLS");
	}
	int opcion = 0;
	//menu de opciones
	do {


		cout << "que accion quiere realizar?" << endl;

		cout << "1.- vender un producto" << endl;
		cout << "2.- registrar un Producto" << endl;
		cout << "3.- Registrar un cliente en nuestro sistema Oxxo" << endl;
		cout << "4.- Mostrar lista de clientes" << endl;
		cout << "5.- Registrar un proveedor" << endl;
		cout << "6.- Borrar un cliente" << endl;
		cout << "7.- Cerrrar el Oxxo" << endl;

		cin >> opcion;

		switch (opcion)
		{
		case 1:
			cout << "lista de productos que puedes vender: " << endl;
			getProductos();
			venderProducto();
			break;

		case 2:
			crearProducto();

			break;
		case 3:

			crearCliente();

			break;

		case 4:

			getClientes();
			break;
		case 5:


			break;
		case 6:
			deleteCliente();

			break;


		default:
			cout << "eso no es una opcion valida";
			break;

		}


	} while (opcion <= 7 && opcion >= 1);






}
