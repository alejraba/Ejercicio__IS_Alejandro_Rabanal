#include <iostream>
#include "INOUT.h"
#include "OPERATIONS.h"

int main() {
    mensajeInicio();

    while (true) {
        tDatos datos = lectura();
        std::string op = getOperator(datos);

        if (op == "Exit") {
            std::cout << "Saliendo..." << std::endl;
            break;
        }

        if (op == "Help") {
            help();
            continue;
        }

        try {
            double resultado = execute(datos);
            mostrarSolucion(resultado);
        }
        catch (std::runtime_error& e) {
            mostrarError(e.what());
        }
    }

    return 0;
}
