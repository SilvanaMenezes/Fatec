#include "iostream"
#include "cstdlib"
#define max 3
using namespace std;

typedef struct lifo pilha;

struct lifo
{
	int topo;
	int idade[max];
	string nome[max];
	double salario[max];
};

int lerIdade()
{
	int idade;
	cout <<"\nDigite a idade a ser empilhada: ";
	cin >> idade;
	return idade; 
}

string lerNome()
{
	string nome;
	cout <<"\nDigite o nome a ser empilhado: ";
	cin >> nome;
	return nome;	
}

double lerSalario()
{
	double salario;
	cout <<"\nDigite o salário a ser empilhado: ";
	cin >> salario;
	return salario;
}

bool pilhaCheia(pilha p)
{
	if(p.topo == max -1)
	{
		   return true;	
	}		
	else
	{
		return false;
	}
} 

bool pilhaVazia(pilha p)
{
	if(p.topo == -1)
	{
		return true;
	}
	else
	{
		return false;	
	}
}

pilha push(int idade, string nome, double salario, pilha p)
{
	system("cls");
	if(pilhaCheia(p) == true)
	{
		cout << "\nPilha Cheia\n";
		system("pause");
		return p;
	}
	else
	{
		p.topo++;
		p.idade[p.topo] = idade;
		p.nome[p.topo] = nome;
		p.salario[p.topo] = salario;
		cout << "\nA idade empilhada foi: " << idade << endl;
		cout << "\nO nome empilhado foi: " << nome << endl;
		cout << "\nO salário empilhado foi: " << salario << endl;
		system("pause");
		return p;	
	}	
}

pilha pop(pilha p)
{
	if(pilhaVazia(p) == true)
	{
		cout << "\nA pilha já está vazia!";
		system("pause");
		return p;
	}
	else
	{
		cout << "\nA idade desempilhada será: " << p.idade[p.topo] << endl;
		cout << "\nO nome desempilhado será: " << p.nome[p.topo] << endl;
		cout << "\nO salário desempilhado será: " << p.salario[p.topo] << endl;
		system("pause");
		p.idade[p.topo] = '\0';
		p.nome[p.topo] = '\0';
		p.salario[p.topo] = '\0';
		p.topo --;
		return p;		
	}	
}

void mostrarPilha(pilha p)
{
	system("cls");
	if (pilhaVazia(p) == true)
	{ 
		cout << "\nA pilha está vazia!";
		system("pause");
		return;
	}
	else
	{
		for (int i = p.topo; i >= 0; i--)
		{
			cout << p.idade[i] << endl;
			cout << p.nome[i] << endl;
			cout << p.salario[i] << endl;
    		system("pause");	
		}	
	}
}

int tela()
{
	int tecla;
	system("cls");
	cout << "\n***Menu***";
	cout << "\n 1 Push(empilhar) | 2 Pop(desempilhar) | 3 Mostrar Pilha | 4 Sair:";
	cout << "\n Digite: ";
	cin >> tecla; 
	return tecla;
}

void controlarPilha(pilha p)
{
	int tecla, idade;
	string nome;
	double salario;
	pilha p1;
	p1.topo = -1;
	
	do
	{
		tecla = tela();
		
		switch(tecla)
		{
			case 1: system("cls");
					idade = lerIdade();
					nome = lerNome();
					salario = lerSalario();
					p1 = push(idade, nome, salario, p1);
			break;
		
			case 2: system("cls");
					p1 = pop(p1);
			break;
		
			case 3: system("cls");
					mostrarPilha(p1);
		}
		
	}
	while(tecla != 4);
	cout << "\nPrograma Finalizado...!\n";
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	pilha p1;
	controlarPilha(p1);
		
	return 0;
}  