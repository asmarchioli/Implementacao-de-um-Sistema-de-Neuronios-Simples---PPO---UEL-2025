# Projeto de Implementação de um Sistema de Neurônios Simples (NeuronioReLU) - Programação Orientada a Objetos
### Alexandre da Silva Marchioli - Universidade Estadual de Londrina, 2025

## Proposta de Trabalho

Este projeto visa implementar uma classe abstrata que representa um neurônio genérico. A partir dela, criamos uma classe derivada para um tipo específico de neurônio: **NeuronioReLU**. O sistema deve calcular a saída de cada neurônio instanciado, dado um conjunto de entradas, pesos e bias.

### Tarefa do Aluno

1. **Implementar o método `predict()` na classe derivada `NeuronioReLU`:**
   - Este método deve receber as entradas e usar os pesos e o bias já inseridos na instanciação dos objetos para calcular a saída.
   - O cálculo de saída deve ser o somatório ponderado das entradas e pesos, somado ao bias e aplicar a função **ReLU (Rectified Linear Unit)**:
     - Se maior que zero, retorna a saída calculada;
     - Caso contrário, retorna zero.

2. **Criar uma função principal (`main`) para testar as classes derivadas implementadas:**
   - Criar objetos da classe `NeuronioReLU` com diferentes pesos e bias.
   - Passar um conjunto de entradas a cada neurônio e exibir as respectivas saídas.

### Requisitos

- Utilizar um método abstrato para implementar uma classe concreta.
- Trabalhar com polimorfismo para calcular a saída.
- Manipular objetos das classes derivadas através de ponteiros para a classe base.
- Usar vetores ou arrays para representar entradas e pesos.
- Implementar a `main` com mais variações de casos do que os apresentados nos exemplos.

### Estrutura do Código

- **neuronio.hpp**: Arquivo contendo a definição da classe abstrata `Neuronio`.
- **NeuronioReLU.hpp**: Arquivo contendo a implementação da classe derivada `NeuronioReLU`.
- **main.cpp**: Arquivo contendo a função principal para testar as classes implementadas.

### Exemplo da Função main

A função `main` cria ponteiros para instâncias da classe `NeuronioReLU` e manipula esses objetos através de ponteiros para a classe base `Neuronio`. Em seguida, passa um conjunto de entradas a cada neurônio e exibe a saída resultante. Isso permite verificar se a implementação da função `predict` está correta e se o cálculo da saída está sendo feito conforme o esperado.

No código `main`, três ponteiros `Neuronio` são criados e inicializados com objetos `NeuronioReLU` com diferentes pesos e bias:
- Neuronio 1: Pesos `{0.3, 0.7}` e bias `0.5`. As entradas `{0.4, 0.5}` são passadas, garantindo que o resultado seja positivo e exibido no console.
- Neuronio 2: Pesos `{0.1, 0.1}` e bias `-0.2`. As entradas `{1.0, 1.0}` são passadas, garantindo que a soma ponderada mais o bias seja `0`, exibindo `0` no console.
- Neuronio 3: Pesos `{-0.2, -0.4}` e bias `-0.5`. As entradas `{1.0, 1.0}` são passadas, garantindo que a soma ponderada mais o bias seja negativa, exibindo `0` no console devido à aplicação da função ReLU.

Finalmente, os objetos são deletados para liberar a memória alocada.
