#include "Producto.h"

Producto::Producto() {
    codigo = "";
    nombre = "";
    precio = 0;
    cantidad = 0;
}

Producto::Producto(string c, string n, double p, int q) {
    codigo = c;
    nombre = n;
    precio = p;
    cantidad = q;
}

string Producto::getCodigo() { return codigo; }
string Producto::getNombre() { return nombre; }
double Producto::getPrecio() { return precio; }
int Producto::getCantidad() { return cantidad; }

void Producto::agregarStock(int q) { cantidad += q; }

void Producto::reducirStock(int q) {
    if (cantidad >= q) cantidad -= q;
}

void Producto::mostrar() {
    cout << codigo << " - " << nombre << " - $" << precio
         << " - Stock: " << cantidad << endl;
}
