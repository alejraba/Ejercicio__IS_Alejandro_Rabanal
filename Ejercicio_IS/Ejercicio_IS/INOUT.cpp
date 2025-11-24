#include "INOUT.h"

tDatos lectura() {
    tDatos datos;
    std::cout << "Introduce operador (+, -, *, /, ^) o Help/Exit: ";
    std::cin >> datos.operador;

    if (datos.operador != "Help" && datos.operador != "Exit") {
        std::cout << "Introduce el primer numero: ";
        std::cin >> datos.num1;
        std::cout << "Introduce el segundo numero: ";
        std::cin >> datos.num2;
    }
    return datos;
}

void mostrarSolucion(double sol) {
    std::cout << "Resultado: " << sol << std::endl;
}

void mostrarError(std::string error) {
    std::cout << "ERROR: " << error << std::endl;
}

void mensajeInicio() {
    std::cout << "=== CALCULADORA EN GITHUB ===" << std::endl;
    std::cout << "Escribe un operador o 'Help' para ver opciones." << std::endl;
}

void help() {
    std::cout << "Operaciones disponibles:\n";
    std::cout << "  +   Suma\n";
    std::cout << "  -   Resta\n";
    std::cout << "  *   Multiplicacion\n";
    std::cout << "  /   Division\n";
    std::cout << "  ^   Potencia\n";
    std::cout << "Comandos:\n";
    std::cout << "  Help   Muestra esta ayuda\n";
    std::cout << "  Exit   Salir del programa\n";
}

double getNum1(tDatos datos) { return datos.num1; }
double getNum2(tDatos datos) { return datos.num2; }
std::string getOperator(tDatos datos) { return datos.operador; }
