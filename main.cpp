#include <iostream>
#include "NeuronioReLU.hpp"
using namespace std;

int main() {
    Neuronio* neuronio1 = new NeuronioReLU({0.3, 0.7}, 0.5);
    Neuronio* neuronio2 = new NeuronioReLU({0.1, 0.1}, -0.2);
    Neuronio* neuronio3 = new NeuronioReLU({-0.2, -0.4}, -0.5);

    cout << neuronio1->predict({0.4, 0.5}) << endl; //Resultado positivo, logo, imprime o valor
    cout << neuronio2->predict({1.0, 1.0}) << endl; //Resultado nulo, logo, imprime 0
    cout << neuronio3->predict({1.0, 1.0}) << endl; //Resultado negativo (-1.1), logo, imprime 0

    delete neuronio1;
    delete neuronio2;
    delete neuronio3;

    return 0;
}
