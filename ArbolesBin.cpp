
#include <iostream>
#include "Node.h"

//<>

int main(){
    Node* n = nullptr;
    Node* root = nullptr;
    int opc = 0, value = 0;
    std::cout << "\nIngrese el valor del arbol";
    std::cin >> value;
    root->crearNodo(value);
    n->insert(root, value);
    while (opc != 2) {
        std::cout << "\n1- Agregar nodo \n2- Salir\n";
        std::cin >> opc;
        switch (opc) {
        case 1:
            std::cout << "\nIngrese el valor del nodo\n";
            std::cin >> value;
            root->crearNodo(value);
            n->insert(root, value);
            break;
        }
    }
}