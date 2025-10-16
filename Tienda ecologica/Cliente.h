#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

#define CLIENTE_H
#include <string>
#include <iostream>
using namespace std;

class Cliente {
private:
    string id;
    string nombre;
    string email;

public:
    Cliente();
    Cliente(string i, string n, string e);

    string getId();
    void mostrar();
};

#endif
