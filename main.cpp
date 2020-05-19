#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Cabecalho
    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl << endl;

    //Variaveis
    int qCompras, qInadimplencia;
    double ticket;
    string formaPagamento;

    //Leitura de volume
    cout << "Quantas compras o cliente fez no ultimo ano? ";
    cin >> qCompras;
    cout << "Qual o ticket medio? ";
    cin >> ticket;

    //Leitura demais dados
    cout << endl << "Quantas vezes o cliente atrasou o pagamento? ";
    cin >> qInadimplencia;
    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B)? ";
    cin >> formaPagamento;

    return 0;
}
