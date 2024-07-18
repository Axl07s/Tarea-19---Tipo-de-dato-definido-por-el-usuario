// Autor: Axel Molineros
// Fecha: 17/07/2024
// 1) En C++ defina que es un tipo de dato estructurado (tipo definido por el usuario).
// Luego escriba el código que se muestra a continuación:

#include <iostream>
#include <string>
using namespace std;

// Tipo struct definido por el usuario
struct Libro {
    string codigo;
    string titulo;
    string autor;
    int precio;
};

// 2) La siguiente función permite asignar varios items en un arreglo de Libros:
void AsignarLibros(Libro libros[], int total) {
    libros[0].codigo = "001";
    libros[0].titulo = "Spiderman: La última cacería de Kraven";
    libros[0].autor = " Jean Marc DeMatteis y Mike Zeck";
    libros[0].precio = 14;

    libros[1].codigo = "002";
    libros[1].titulo = "Civil War";
    libros[1].autor = "Mark Millar";
    libros[1].precio = 17;

    libros[2].codigo = "003";
    libros[2].titulo = "Old Man Logan";
    libros[2].autor = "Steve McNiven, Mark Millar";
    libros[2].precio = 20;

    libros[3].codigo = "004";
    libros[3].titulo = "Daredevil: Born Again";
    libros[3].autor = "Frank Miller";
    libros[3].precio = 43;

    libros[4].codigo = "005";
    libros[4].titulo = "Infinity Gauntlet Omnibus";
    libros[4].autor = "Jim Starlin";
    libros[4].precio = 15;

    libros[5].codigo = "006";
    libros[5].titulo = "Marvel Zombies";
    libros[5].autor = "Robert Kirkman";
    libros[5].precio = 149;

    libros[6].codigo = "007";
    libros[6].titulo = "Marvel Ruins";
    libros[6].autor = "Warren Ellis";
    libros[6].precio = 32;
}
// 5) Diseñe la función que ordene los libros por el título:
void OrdenarxTitulo(Libro libros[], int total) {
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (libros[i].titulo > libros[j].titulo) {
                Libro temp = libros[i];
                libros[i] = libros[j];
                libros[j] = temp;
            }
        }
    }
}

// 6) Diseñe la función que ordene los libros por el precio de mayor a menor:
void OrdenarxPrecio(Libro libros[], int total) {
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (libros[i].precio < libros[j].precio) {
                Libro temp = libros[i];
                libros[i] = libros[j];
                libros[j] = temp;
            }
        }
    }
}

// 3) Esta función imprime los libros del arreglo.
// Complete la función para que imprima todos los atributos de un libro:
void ImprimirLibros(Libro libros[], int total) {
    for(int k = 0; k < total; k++) {
        cout << "Código: " << libros[k].codigo << endl;
        cout << "Título: " << libros[k].titulo << endl;
        cout << "Autor: " << libros[k].autor << endl;
        cout << "Precio: $" << libros[k].precio << endl;
        cout << "---------------------------" << endl;
    }
}

// 7) Diseñe la función que permite ingresar los libros por teclado:
void LeerLibro(Libro libros[], int total) {
    for (int i = 0; i < total; i++) {
        cout << "Ingrese el código del libro: ";
        cin >> libros[i].codigo;
        cout << "Ingrese el título del libro: ";
        cin.ignore();
        getline(cin, libros[i].titulo);
        cout << "Ingrese el autor del libro: ";
        getline(cin, libros[i].autor);
        cout << "Ingrese el precio del libro: ";
        cin >> libros[i].precio;
    }
}

// 4) Esta es la función principal (main):
int main() {
    const int MAX = 7;
    Libro libros[MAX];

    AsignarLibros(libros, MAX);
    cout << "Libros asignados:" << endl;
    ImprimirLibros(libros, MAX);

    // Leer libros desde el teclado
    LeerLibro(libros, MAX);
    cout << endl << "Libros ingresados:" << endl;
    ImprimirLibros(libros, MAX);

    // Ordenar libros por título
    OrdenarxTitulo(libros, MAX);
    cout << endl << "Libros ordenados por título:" << endl;
    ImprimirLibros(libros, MAX);

    // Ordenar libros por precio de mayor a menor
    OrdenarxPrecio(libros, MAX);
    cout << endl << "Libros ordenados por precio de mayor a menor:" << endl;
    ImprimirLibros(libros, MAX);
    cout << endl << "Tipo estructurado" << endl;

    return 0;
}
