#include "Cliente.h"

Cliente::Cliente() {
    id = "";
    nombre = "";
    email = "";
}

Cliente::Cliente(string i, string n, string e) {
    id = i;
    nombre = n;
    email = e;
}

string Cliente::getId() { return id; }

void Cliente::mostrar() {
    cout << id << " - " << nombre << " - " << email << endl;
}
