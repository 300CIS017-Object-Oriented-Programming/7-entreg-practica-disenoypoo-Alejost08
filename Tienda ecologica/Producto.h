#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <iostream>
using namespace std;

class Producto {
private:
    string codigo;
    string nombre;
    double precio;
    int cantidad;

public:
    Producto();
    Producto(string c, string n, double p, int q);

    string getCodigo();
    string getNombre();
    double getPrecio();
    int getCantidad();

    void agregarStock(int q);
    void reducirStock(int q);
    void mostrar();
};

#endif
