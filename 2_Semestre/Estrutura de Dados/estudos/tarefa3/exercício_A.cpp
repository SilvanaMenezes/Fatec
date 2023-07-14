#include "iostream"
#include "cstdlib"
#include "conio.h"
#define t 7
using namespace std;

typedef struct letras tab;

struct letras {
	int valorA[t];
	int valorB[t];
	int valorC[t];
	int valorD[t];
	int resultP[t];
	int resultS[t];	
};

tab tb1;

int lerA(){
	int a;
	cout << "Digite um inteiro para a: ";
	cin >> a;
	return a;	
}

int lerB(){
	int b;
	cout << "Digite um inteiro para b: ";
	cin >> b;
	return b;	
}

int lerC(){
	int c;
	cout << "Digite um inteiro para c: ";
	cin >> c;
	return c;	
}

int lerD(){
	int d;
	cout << "Digite um inteiro para d: ";
	cin >> d;
	return d;	
}

int produto(int a, int c){
	int p;
	p = a * c;
	return p;
}

int soma(int b, int d){
	int s;
	s = b + d;
	return s;
}

void newLinha(int linha, int a, int b, int c, int d, int p, int s){
	tb1.valorA[linha] = a;
	tb1.valorB[linha] = b;
	tb1.valorC[linha] = c;
	tb1.valorD[linha] = d;
	tb1.resultP[linha] = p;
	tb1.resultS[linha] = s;	
}

void exibirTb1( int ultlinha){
	system("cls");
	for(int i=0; i <= ultlinha; i++){
		cout << tb1.valorA[i] << "|" << tb1.valorB[i] << "|" << tb1.valorC[i] << "|" << tb1.valorD[i] << "|" << tb1.resultP[i] << "|" << tb1.resultS[i] << endl; 	
	}
	system("pause");
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c, d, p, s, linha =-1;
	char tecla;

	while (tecla != 27){
		cout << "   1 - para Executar     |    2 - para Exibir     |    esc - para Sair    |\n";
		
		tecla = getch();
		switch (tecla)
		
		case '1':{
			system("cls");
			a = lerA();
			b = lerB();
			c = lerC();
			d = lerD();
			p = produto(a, c);
			s = soma(b,d);	
				
			linha++;
			newLinha(linha, a, b, c, d, p, s);
			system("cls");
			break;
		
		case '2':
			exibirTb1(linha);
			system("cls");
			break;
		}
	}

	
	
	
	
	return 0;
}