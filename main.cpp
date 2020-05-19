#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Cabecalho
    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl << endl;

    //Variaveis
    int qCompras, qInadimplencia, sCompras = 0, sInadimplencia = 0, sPagamento = 0;
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

    //Score volume de compras
    if(qCompras == 0) sCompras = 0;
    else if(ticket <= 3000.0 && qCompras <= 2) sCompras = 20;
    else if(ticket <= 3000.0 && qCompras > 2) sCompras = 40;
    else sCompras = 60;

    cout << endl << "Score de volume de compras = " << sCompras << " pontos" << endl;

    //Scores inadimplencia e pagamento
    if(qInadimplencia > 1 || qCompras == 0) sInadimplencia = 0;
    else if(qInadimplencia == 1) sInadimplencia = 15;
    else sInadimplencia = 30;

    if(qCompras == 0) sPagamento = 0;
    else if(formaPagamento == "D") sPagamento = 5;
    else if(formaPagamento == "C" || formaPagamento == "B") sPagamento = 10;

    cout << endl << "Score de inadimplencia = " << sInadimplencia << " pontos" << endl;
    cout << "Score de forma de pagamento = " << sPagamento << " pontos" << endl;

    return 0;
}
