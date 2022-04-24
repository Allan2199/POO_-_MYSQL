#include<iostream>
#include<string>
#include<string.h>
#include "ConexionBD.h"
#include "Producto.h"
using namespace std;
int opcion;
int main()
{
    string proveedor, direccion;
    int telefono = 0;
    int nit = 0;
    do {
        system("CLS");
        cout << "Hola Amig@ Bienvenido a Nuestra Tabla del Proveedor" << endl;
        cout << "1. Mostrar la Tabla" << endl;
        cout << "2. Ingrese Nuevo Proveedor" << endl; 
        cout << "3. Modifique el Proveedor que ha seleccionado" << endl;
        cout << "4. Eliminar Proveedor que ha seleccionado" << endl;
        cout << "5. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        if (opcion == 1) {
            system("CLS");
            Proveedor c = Proveedor();
            c.leer();
            system("pause");
    
        if (opcion == 2) {
            system("CLS");
            cout << "Escriba el Nombre del Proveedor: ";
            cin.ignore();
            getline(cin, proveedor);
            cout << "Escriba el Nit del Proveedor: ";
            cin >> nit;
            cout << "Escriba la Direccion del Proveedor: ";
            cin.ignore();
            getline(cin,direccion);
            cout << "Escriba el Telefono del Proveedor: ";
            cin >> telefono;
            cout << proveedor << ", " << direccion << " , " << telefono << " , " << nit << endl;;
            Proveedor c = Proveedor(proveedor, direccion, telefono, nit);
            c.crear();
            system("Pause");
        }
        if (opcion == 3) {
            system("CLS");
            int id;
            cout << "Escriba el id que desea Modificar: ";
            cin >> id;
            cout << "Escriba el Nombre del Proveedor: ";
            cin.ignore();
            getline(cin, proveedor);
            cout << "Escriba el Nit del Proveedor: ";
            cin >> nit;
            cout << "Escriba la Direccion del Proveedor: ";
            cin.ignore();
            getline(cin, direccion);
            cout << "Escriba el Telefono del Proveedor: ";
            cin >> telefono;

            cout << proveedor << ", " << direccion << " , " << telefono << " , " << nit << endl;;
            Proveedor c = Proveedor(proveedor, direccion, telefono, nit);
            c.actualizar(id);
            system("Pause");
        }
        if (opcion == 4) {
            system("CLS");
            int id;
            cout << "Escriba el id que desea Eliminar: ";
            cin >> id;
            Proveedor c = Proveedor(proveedor, direccion, telefono, nit);
            c.Eliminar(id);
            system("Pause");
        }
            /*
            DELETE FROM `db_almacen`.`productos` WHERE (`idproductos` = '4');*/
    } while (opcion != 5);
}
