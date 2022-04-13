#include <iostream>

using namespace std;

int main()
{

    float precoGasolina, tanque , distancia , consumo;
    float resultadoLitros , resultadoTanque , resultadoValorTotal;

    cout << "informe o preco da gasolina em R$?" << endl;
    cin >> precoGasolina;
    cout << "informe o tamanho do tanque em litros?" << endl;
    cin >> tanque;
    cout << "informe a kilometragem percorrida?" << endl;
    cin >> distancia;
    cout << "informe o consumo( km / litro) " << endl;
    cin >> consumo;

    resultadoLitros = distancia / consumo;
    cout << "quantidade de litros necessarios e :" << resultadoLitros;

    resultadoTanque = resultadoLitros / tanque ;
    cout << "quantidades abastecidas e :" << resultadoTanque;

    resultadoValorTotal = resultadoLitros * precoGasolina;
    cout << "o valor total gasto e:" << resultadoTanque;








    return 0;
}
