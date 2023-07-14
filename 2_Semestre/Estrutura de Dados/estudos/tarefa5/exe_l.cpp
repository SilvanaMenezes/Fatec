#include "iostream"
#include "math.h"
#include "cstdlib"
#include "iomanip"
using namespace std;

//constantes para cálculo de multa e juros
float const txMulta = 0.02;
float const txJuros = 0.03333;

//vetores para serem preenchidos e exibidos
double valorPrincipal[3];
int diasAtraso[3];
double valorMulta[3];
double valorJuros[3];
double valorPagar[5];

//inicializando linha da tabela
int linha = -1;

//funções de entrada - ler prestação e dias de atraso
double valorPrestacao()
{
	double valor;
	cout << "\nDigite o valor da prestação: ";
	cin >> valor;
	return valor; 
}

int quantDiasAtraso()
{
	int atraso;
	cout << "\nDigite a quantidade de dias em atraso: ";
	cin >> atraso;
	return atraso;
}

//funções de processamento - calculo de multa e juros e valor a pagar
double calcValorMulta(double valor, float txMulta)
{
	double multa;
	multa = valor * txMulta;
	return multa;	
}

double calcValorJuros(double valor, int atraso,float txJuros)
{
	double juros;
	juros = valor * atraso * txJuros;
	return juros;
}

double calcValorPagar(double valor, double multa, double juros)
{
	double pagar;
	pagar = valor + multa + juros;
	return pagar;
}

//voids de saída - exibir os valores da prestação, multa, juros e total a pagar
void novaLinha(double vlPrestacao,int dAtraso, double vlMulta, double vlJuros, double vlPagar)
{
	linha++;
	valorPrincipal[linha] = vlPrestacao;
	diasAtraso[linha] = dAtraso;
	valorMulta[linha] = vlMulta;
	valorJuros[linha] = vlJuros;
	valorPagar[linha] = vlPagar;
}

void mostrar()
{
	system("cls");
	for(int i = 0; i <= linha; i++)
	{
		cout << setprecision(2) << fixed;		
		cout <<"\nPrestação"<<" | "<<"Dias Atraso"<<" | "<<"Valor Multa"<<" | "<<"Valor Juros"<<" | "<<"Total Pagar\n"<< endl;
		cout <<valorPrincipal[i]<<" | "<<diasAtraso[i]<<" | "<<valorMulta[i]<<" | "<<valorJuros[i]<<" | "<<valorPagar[i]<< endl;
	}
	system("pause");
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double vlPrestacao, vlMulta, vlJuros, vlPagar;
	int dAtraso, tecla;
	
	MENU:
	system("cls");
	cout << "* Menu *\n1 ler\n2 mostrar\n3 sair\nitem: ";
	cin >> tecla;
	
	switch(tecla)
	{
		case 1:
				system("cls");
				vlPrestacao = valorPrestacao();
				dAtraso = quantDiasAtraso();
				vlMulta = calcValorMulta(vlPrestacao,txMulta);
				vlJuros = calcValorJuros(vlPrestacao,dAtraso,txJuros);
				vlPagar = calcValorPagar(vlPrestacao,vlMulta,vlJuros);
				break;
		
		case 2:
				novaLinha(vlPrestacao,dAtraso,vlMulta,vlJuros,vlPagar);
				mostrar();
				break;
			
		case 3:
				exit(0);
				break; 
	}
	goto MENU;
	
	return 0;
} 
