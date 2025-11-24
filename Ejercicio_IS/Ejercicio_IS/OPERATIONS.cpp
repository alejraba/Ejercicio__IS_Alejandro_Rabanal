#include "OPERATIONS.h"

double add(double num1, double num2) { return num1 + num2; }
double sub(double num1, double num2) { return num1 - num2; }
double mul(double num1, double num2) { return num1 * num2; }

double div(double num1, double num2) {
    if (num2 == 0) throw std::runtime_error("No se puede dividir por cero");
    return num1 / num2;
}

double exp(double num1, double num2) {
    return std::pow(num1, num2);
}

double execute(tDatos datos) {
    std::string op = datos.operador;

    if (op == "+") return add(datos.num1, datos.num2);
    else if (op == "-") return sub(datos.num1, datos.num2);
    else if (op == "*") return mul(datos.num1, datos.num2);
    else if (op == "/") return div(datos.num1, datos.num2);
    else if (op == "^") return exp(datos.num1, datos.num2);
    else throw std::runtime_error("Operacion no valida");
}
