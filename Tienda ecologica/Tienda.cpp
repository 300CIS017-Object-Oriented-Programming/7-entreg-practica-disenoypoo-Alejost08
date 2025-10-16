#include "Tienda.h"
#include <iostream>
using namespace std;

Tienda::Tienda() {
    nombre = "Tienda Ecologica";
    numProductos = 0;
    numClientes = 0;
    numVentas = 0;
}

void Tienda::agregarProducto(string c, string n, double p, int q) {
    if (numProductos < 50) {
        productos[numProductos] = Producto(c, n, p, q);
        numProductos++;
    } else {
        cout << "Inventario lleno.\n";
    }
}

void Tienda::mostrarProductos() {
    cout << "\n--- PRODUCTOS ---\n";
    for (int i = 0; i < numProductos; i++) {
        productos[i].mostrar();
    }
}

double Tienda::valorInventario() {
    double total = 0;
    for (int i = 0; i < numProductos; i++) {
        total += productos[i].getPrecio() * productos[i].getCantidad();
    }
    return total;
}

void Tienda::agregarCliente(string i, string n, string e) {
    if (numClientes < 50) {
        clientes[numClientes] = Cliente(i, n, e);
        numClientes++;
    } else {
        cout << "No se pueden registrar más clientes.\n";
    }
}

void Tienda::mostrarClientes() {
    cout << "\n--- CLIENTES ---\n";
    for (int i = 0; i < numClientes; i++) {
        clientes[i].mostrar();
    }
}

void Tienda::realizarVenta(string idV, string idC, string codP, int cant) {
    Producto* prod = nullptr;
    for (int i = 0; i < numProductos; i++) {
        if (productos[i].getCodigo() == codP)
            prod = &productos[i];
    }

    if (prod == nullptr) {
        cout << "Producto no encontrado.\n";
        return;
    }

    if (prod->getCantidad() < cant) {
        cout << "Stock insuficiente.\n";
        return;
    }

    double total = prod->getPrecio() * cant;
    prod->reducirStock(cant);
    ventas[numVentas] = Venta(idV, idC, codP, cant, total);
    numVentas++;
    cout << "Venta registrada correctamente.\n";
}

void Tienda::mostrarVentas() {
    cout << "\n--- VENTAS ---\n";
    for (int i = 0; i < numVentas; i++) {
        ventas[i].mostrar();
    }
}

void Tienda::inicializarDatos() {
    agregarProducto("P001", "Manzanas", 2.5, 50);
    agregarProducto("P002", "Pan", 1.5, 30);
    agregarProducto("P003", "Leche vegetal", 3.0, 20);
    agregarCliente("C001", "Juan Perez", "juan@mail.com");
    agregarCliente("C002", "Ana Gomez", "ana@mail.com");
    cout << "Datos de prueba cargados.\n";
}
