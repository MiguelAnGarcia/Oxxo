#include "Prerequisitos.h"
#include "Cliente.h"

class Sistema
{
private:
	vector <Cliente> m_clientes;

	void setCliente(Cliente _cliente);
	void deleteCliente();

	void getClientes();

	void crearCliente();

public:
	Sistema();

};

