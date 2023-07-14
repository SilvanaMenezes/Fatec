#include "iostream"
#include "cstdlib"
#define t 5
using namespace std;

typedef struct lista tab;

struct lista {
	string nome[t];
	double salario[t];
	
};

tab tb1;

string getNome(){
	string nome;
	cout << "Digite o nome: ";
	cin >> nome;
	return nome;	
}

double getSalario(){
	double sal;
	cout << "Digite o salário: ";
	cin >> sal;
	return sal;
}

void newlinha(int linha, string nome, double salario ){
	tb1.nome[linha] = nome;
	tb1.salario[linha] = salario;
}

void exibirTb1(int ultlinha){
	system("cls");
	for(int pos=0; pos<=ultlinha; pos++){
		cout << tb1.nome[pos] << "|" << tb1.salario[pos] << endl;
	}
	 system("pause");
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	string nome; double salario; int linha =-1;
	
	linha++;
	newlinha(linha, "Eliseu", 10000);
	
	nome = getNome();
	salario = getSalario();
	
	linha++;
	newlinha(linha, nome, salario);
	
	exibirTb1(linha);
	
	return 0;
}