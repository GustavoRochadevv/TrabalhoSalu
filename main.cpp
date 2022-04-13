#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    float   precoGasolina,
            tamanhoTanque,
            distanciaPercorrida,
            consumoMedio,
            qtdLitros,
            valorTotal;

    int qtdAbastecimento;

    cout <<"------------------------------------------------------" << endl;

    cout << "Informe o preco da gasolina (em R$): ";
    cin >> precoGasolina;
    cout << "Informe o tamanho do tanque (em litros): ";
    cin >> tamanhoTanque;
    cout << "Informe a kilometragem percorrida (em kilômetros): ";
    cin >> distanciaPercorrida;
    cout << "Informe o consumo(Km/litro): ";
    cin >> consumoMedio;

    qtdLitros = (distanciaPercorrida / consumoMedio);
    qtdAbastecimento = (distanciaPercorrida / tamanhoTanque);
    valorTotal = (qtdLitros * precoGasolina);

    cout << "\nA quantidade de litros necessários é: " << qtdLitros << endl;
    cout << "A quantidade de abastecimentos é: " << qtdAbastecimento << endl;
    cout << "O valor total: " << valorTotal << " R$" << endl;

    cout <<"------------------------------------------------------" << endl;

    return 0;
}
