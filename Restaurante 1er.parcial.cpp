#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Mesero
class Mesero {
private:
    string nombre;
    int edad;
    float peso;
    float salario;

public:
    Mesero(string _nombre, int _edad, float _peso, float _salario) : nombre(_nombre), edad(_edad), peso(_peso), salario(_salario) {}

    void servir() {
        cout << "El mesero " << nombre << " esta sirviendo comida." << endl;
    }
};

// Definición de la clase Cocinero
class Cocinero {
private:
    string nombre;
    int edad;
    float peso;
    float salario;

public:
    Cocinero(string _nombre, int _edad, float _peso, float _salario) : nombre(_nombre), edad(_edad), peso(_peso), salario(_salario) {}

    void cocinar() {
        cout << "El cocinero " << nombre << " esta cocinando." << endl;
    }
};

// Definición de la clase Cliente
class Cliente {
private:
    string nombre;
    int edad;
    float peso;
    char sexo;

public:
    Cliente(string _nombre, int _edad, float _peso, char _sexo) : nombre(_nombre), edad(_edad), peso(_peso), sexo(_sexo) {}

    void comer() {
        cout << "El cliente " << nombre << " esta comiendo." << endl;
    }
};

// Definición de la clase Mesa
class Mesa {
private:
    string tamano; // Cambio de tamaño a tamano
    string espacio;
    string color;
    string material;

public:
    Mesa(string _tamano, string _espacio, string _color, string _material) : tamano(_tamano), espacio(_espacio), color(_color), material(_material) {}

    void colocarComida() {
        cout << "La comida esta colocada en la mesa de tamano " << tamano << ", con espacio " << espacio << ", de color " << color << " y material " << material << "." << endl;
    }
};

// Definición de la clase Comida
class Comida {
private:
    string sabor;
    int porciones;
    int calorias;
    float precio;

public:
    Comida(string _sabor, int _porciones, int _calorias, float _precio) : sabor(_sabor), porciones(_porciones), calorias(_calorias), precio(_precio) {}

    void describir() {
        cout << "La comida tiene sabor " << sabor << ", " << porciones << " porciones, " << calorias << " calorias y un precio de " << precio << " quetzales." << endl;
    }
};

int main() {
    Mesero juan("Juan", 25, 70.5, 1500.0);
    Cocinero pablo("Pablo", 30, 80.0, 2000.0);
    Cliente maria("Maria", 35, 60.0, 'F');
    Mesa mesa1("Grande", "Suficiente", "Marron", "Madera");
    Comida comida1("Picante", 2, 500, 10.5);

    juan.servir();
    pablo.cocinar();
    maria.comer();
    mesa1.colocarComida();
    comida1.describir();

    return 0;
}
