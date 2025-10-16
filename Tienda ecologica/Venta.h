#ifndef VENTA_H
#define VENTA_H
#include <string>
#include <iostream>
using namespace std;

class Venta {
private:
    string idVenta;
    string idCliente;
    string codProducto;
    int cantidad;
    double total;

public:
    Venta();
    Venta(string v, string c, string p, int q, double t);

    void mostrar();
};

#endif
