
#include "twoSum.h"
#include <iostream>

int main() {
    twoSum ts;
    std::vector <int> ejercicio{ 3, 2, 4 };
    std::vector <int> resultado;
    resultado = ts.twoSumFunct(ejercicio, 6);

    std::cout << "El resultado del ejercico sumTwo es: " << resultado[0] << resultado[1] << std::endl;
    return 0;
}