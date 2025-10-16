#include <iostream>
#include "Tienda.h"
using namespace std;

int main() {
    Tienda tienda;
    int opcion = 0;

    do {
        cout << "\n===== TIENDA ECOLOGICA =====\n";
        cout << "1. Inicializar datos de prueba\n";
        cout << "2. Agregar producto\n";
        cout << "3. Mostrar productos\n";
        cout << "4. Ver valor total del inventario\n";
        cout << "5. Registrar cliente\n";
        cout << "6. Mostrar clientes\n";
        cout << "7. Registrar venta\n";
        cout << "8. Mostrar ventas\n";
        cout << "9. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 1) {
            tienda.inicializarDatos();
        } else if (opcion == 2) {
            string c, n; double p; int q;
            cout << "Código: "; cin >> c;
            cin.ignore();
            cout << "Nombre: "; getline(cin, n);
            cout << "Precio: "; cin >> p;
            cout << "Cantidad: "; cin >> q;
            tienda.agregarProducto(c, n, p, q);
        } else if (opcion == 3) {
            tienda.mostrarProductos();
        } else if (opcion == 4) {
            cout << "Valor total del inventario: $" << tienda.valorInventario() << endl;
        } else if (opcion == 5) {
            string i, n, e;
            cout << "ID cliente: "; cin >> i;
            cin.ignore();
            cout << "Nombre: "; getline(cin, n);
            cout << "Email: "; cin >> e;
            tienda.agregarCliente(i, n, e);
        } else if (opcion == 6) {
            tienda.mostrarClientes();
        } else if (opcion == 7) {
            string v, c, p; int cant;
            cout << "ID venta: "; cin >> v;
            cout << "ID cliente: "; cin >> c;
            cout << "Código producto: "; cin >> p;
            cout << "Cantidad: "; cin >> cant;
            tienda.realizarVenta(v, c, p, cant);
        } else if (opcion == 8) {
            tienda.mostrarVentas();
        }

    } while (opcion != 9);

    cout << "Saliendo del sistema...\n";
    return 0;
}
