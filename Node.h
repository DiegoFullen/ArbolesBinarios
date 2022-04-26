#include <iostream>
#pragma once

class Node{
private:
	int dato = 0;
	Node* izq = nullptr;
	Node* der = nullptr;
	
public:
	Node() { }
	Node *crearNodo(int n) {
		Node* newNode = new Node();
		newNode->dato = n;
		return newNode;
	}
	void insert(Node *&root, int value) {
		if (root == NULL) {
			Node* newNode = crearNodo(value);
			root = newNode;
			std::cout << "Se crea arbol " << value << std::endl;
		}else {
			int rootValue = root->dato;
			if (value < rootValue) {
				insert(root->izq, value);
				std::cout << "Se inserta " << value << " izq" << std::endl;
			}else{
				insert(root->der, value);
				std::cout << "Se inserta " << value << " der" << std::endl;
			}
		}
	}
};