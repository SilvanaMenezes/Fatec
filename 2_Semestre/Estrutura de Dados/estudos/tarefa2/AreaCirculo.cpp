#include "iostream"
#include "math.h"
#include "cstdlib"
#include "conio.h"
#include "iomanip"
using namespace std;

//função e variável de entrada

double const pi = 3.14;

double ler_comprimento(){
	double comp;
	cout << "\nDigite o valor do comprimento: ";
	cin >> comp;
	return comp;
}

//função de cálculo

double calc_diametro(double comp, double pi){ 
	double diam;
	diam = comp / pi;
	return diam;
}
double calc_raio(double comp, double pi){
	double raio;
	raio = comp / (2 * pi);
	return raio;
}
double calc_area(double raio, double pi){
	double area;
	area = pi * pow(raio,2);
	return area;
}

//void de saída

void exibir(double comp, double diam, double raio, double area){
	system("cls");		
	cout << "\nValor de Comprimento: " << comp << "cm";
	cout << setprecision(2) << fixed  ;	
	cout << "\nValor de Diametro: " << diam << "cm";
	cout << "\nValor do Raio: " << raio << "cm";
	cout << "\nValor da Área: " << area << "cm";
	getch();
}

//menu de interação

int main(void){
	
	double vcomp, vdiam, vraio, varea;
	char tecla;
	
	while (tecla != 27){
		cout << "\nMenu:\n1 - Executar\nEsc - Sair\nitem:";
		tecla = getch();
		switch(tecla)
			case '1':{
				vcomp = ler_comprimento();
	  			vdiam = calc_diametro(vcomp, pi);
				vraio = calc_raio(vcomp, pi);
				varea = calc_area(vraio, pi);		
				exibir(vcomp, vdiam, vraio, varea);
			break;}
	}
			
	return 0;		
}