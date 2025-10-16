#ifndef TIENDA_H
#define TIENDA_H

#include <string>
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"
using namespace std;

class Tienda {
private:
    string nombre;
    Producto productos[50];
    Cliente clientes[50];
    Venta ventas[50];
    int numProductos;
    int numClientes;
    int numVentas;

public:
    Tienda();

    void agregarProducto(string c, string n, double p, int q);
    void mostrarProductos();
    double valorInventario();

    void agregarCliente(string i, string n, string e);
    void mostrarClientes();

    void realizarVenta(string idV, string idC, string codP, int cant);
    void mostrarVentas();

    void inicializarDatos();
};

#endif
