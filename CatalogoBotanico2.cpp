// CatalogoBotanico2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// GUARDAR COMO: catalogobotanico2.cpp
#include <iostream>
#include <string>
#include "estructuras.h" 
#include "funciones.cpp" // Incluir definiciones para evitar errores de enlace si el archivo no está en el proyecto

using namespace std;

// Prototipos (avisan que las funciones están en funciones.cpp)
void altaPlanta(ProductoPlanta catalogo[], int& totalPlantas);
void bajaPlanta(ProductoPlanta catalogo[], int& totalPlantas);
void buscarPlanta(const ProductoPlanta catalogo[], int totalPlantas);
void modificarPlanta(ProductoPlanta catalogo[], int totalPlantas);
void mostrarCatalogo(const ProductoPlanta catalogo[], int totalPlantas);
int leerEntero();

// La función principal SIEMPRE debe llamarse 'main' en C++, 
// aunque el archivo se llame 'catalogobotanico2.cpp'.
int main() {
    ProductoPlanta catalogo[100];
    int totalPlantas = 0;
    int opcion = 0;

    do {
        cout << "\n=== CATALOGO BOTANICO v3.0 ===\n";
        cout << "1. Alta\n2. Baja\n3. Modificar\n4. Mostrar\n5. Buscar\n6. Salir\n";
        cout << "Opcion: ";

        opcion = leerEntero();

        switch (opcion) {
        case 1: altaPlanta(catalogo, totalPlantas); break;
        case 2: bajaPlanta(catalogo, totalPlantas); break;
        case 3:
            if (totalPlantas > 0) modificarPlanta(catalogo, totalPlantas);
            else cout << "Vacio.\n";
            break;
        case 4: mostrarCatalogo(catalogo, totalPlantas); break;
        case 5:
            if (totalPlantas > 0) buscarPlanta(catalogo, totalPlantas);
            else cout << "Vacio.\n";
            break;
        case 6: cout << "Saliendo...\n"; break;
        default: cout << "Opcion no valida.\n";
        }

        if (opcion != 6) {
            cout << "Presione <ENTER> para continuar...";
            string dummy; getline(cin, dummy);
        }

    } while (opcion != 6);

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
