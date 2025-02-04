#include "neuronio.hpp"

class NeuronioReLU : public Neuronio {
public:
    NeuronioReLU(const vector<double>& pesos, double bias) : Neuronio(pesos, bias){}
    double predict(const vector<double> entradas) const override{
        double soma = 0;
        for (int i = 0; i < pesos.size(); i++){
            soma += pesos[i] * entradas[i];
        }
        return max(0.0, soma + bias);
    }
};