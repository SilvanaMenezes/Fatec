#include "iostream"
#include "cstdlib"
#define t 5
using namespace std;

typedef struct lista tab;

struct lista {
	int pk[t];
	string nome[t];
	double salario[t];
	
};

tab tb1;

void newlinha(int linha, string nome, double salario, int codpk){
	tb1.pk[linha] = codpk;
	tb1.nome[linha] = nome;
	tb1.salario[linha] = salario;
}

void exibirTb1(int ultlinha){
	system("cls");
	for(int pos=0; pos<=ultlinha; pos++){
		cout << tb1.pk[pos] << "|" << tb1.nome[pos] << "|" << tb1.salario[pos] << endl;
	}
	 system("pause");
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int linha =-1;
	
	linha++;
	newlinha(linha, "Silvana", 5000, 001);
	linha++;
	newlinha(linha, "Larissa", 5000, 002);
	linha++;
	newlinha(linha, "Giuliana", 5000, 003);	
	exibirTb1(linha);
	
	return 0;
}