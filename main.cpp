#include <iostream>
#include "NeuronioReLU.hpp"
using namespace std;

int main(){
    NeuronioReLU neuronio1({0.2,0.4}, -1.5);
    cout << neuronio1.predict({0.3,2.0}) << endl;

    NeuronioReLU neuronio2({0.2,0.4}, -0.5);
    cout << neuronio2.predict({0.3,2.0}) << endl;

    return 0;
}