#include <iostream>
#include <cstdlib>
#include <string.h>
#define n 2
using namespace std;

typedef struct pessoa p1;
struct pessoa{
	string nome[n];
	string sexo[n];
	int idade[n];
	double salario[n];
	double salarioNovo[n];
};

p1 tb; 
p1 *ptb = &tb;

int linha = -1;

string ler_nome()
{
	string nome;
	cout << "Nome: ";
	cin >> nome;
	return nome;
}

string ler_sexo()
{
	string sexo;
	cin.ignore();
	cout << "Sexo: ";
	getline(cin,sexo);
	return sexo;	
}

int ler_idade()
{
	int idade;
	cout << "Idade: ";
	cin >> idade;
	return idade;
}

double ler_salario()
{
	double salario;
	cout << "Salario: ";
	cin >> salario;	
	return salario;				
}

double getAumento(double *salario)
{
	double novoSalario;
	novoSalario = ((*salario * 10)/100);
	return novoSalario + *salario;
}

void novaLinhaStruct()
{
	string nome = ler_nome();
	string sexo = ler_sexo();
	int idade = ler_idade();
	double salario = ler_salario();
		
	if(linha == n-1) return;	
    linha++;

	ptb -> nome[linha] = nome;
	ptb-> sexo[linha] = sexo;	
	ptb -> idade[linha] = idade;
	ptb -> salario[linha] = salario;
	ptb -> salarioNovo[linha] = getAumento(&salario);	
}

void listarLinhaStruct()
{
	system("cls");
	cout << "------Exibição de Dados------\n";
	for(int i = 0; i <= linha; i++){
    	cout << ptb->nome[i] << ", " << ptb->sexo[i] << "," << ptb->idade[i] << ", " << ptb->salario[i] << ", " << ptb->salarioNovo[i] << endl;
    }
	system("pause");
}

void controle(){
    int item;
    do{
        system("cls");
        cout << "\n1 ler linha \n2 mostrar \n3 sair \nitem: ";
        cin >> item;
        system("cls");
        
        switch(item)
        {
                case 1: novaLinhaStruct(); break;
                case 2: listarLinhaStruct(); break;
                case 3: exit(0); break;
                
                default: cout << "Erro!\n";
                system("pause");
                break;
        }
    
    }while(true);
} 

int main(){
	setlocale(LC_ALL, "Portuguese");
	controle();
		
	return 0;
}