#include"iostream"
#include"cstdlib"
using namespace std;

//amarrando os Nós

int cont = 0;  //contar a quantidade de nós criados

typedef struct me cad;
struct me{
	int pos;
	cad * liga;
};

cad * primeiroNo;
cad * ultimoNo;

void construtor()
{
	primeiroNo = ultimoNo = NULL;
	cout << "\nConstruindo os Cads." << endl;
	system("pause");	
}

void alocar()
{ 
	for (int i = 0; i < 4; i++) //criar 4 nós cad na memória
	{
		cont ++;
		cad * newcad = (cad *) malloc(sizeof(cad));
		if(cont == 1)  
		{  
			newcad -> liga = NULL;
			newcad -> pos = cont;
			primeiroNo = newcad;
		}
		else
		{ 
			ultimoNo -> liga = newcad;
			newcad -> liga = NULL;
			newcad -> pos = cont;	
		}
		ultimoNo = newcad;
	}
	cout << "\nAlocando todos os Cads." << endl;
	system("pause");		
}

void exibir()
{   
	cad * temp;
	temp = primeiroNo;
	system("cls");
	
	cout << "\nExibindo cads criados." << endl;	
	while(temp != NULL) 
	{
		cout << "posição: " << temp -> pos << endl;
		temp = temp -> liga;
	}
	system("pause"); 	
}

void destrutor()
{	 
	cad * temp;
	cad * aux;
	temp = primeiroNo;
	while (temp != NULL)
	{
		aux = temp;
		free(aux);
		temp = temp -> liga;
	}	
	cout << "\nDestruindo Cads e liberando memória." << endl;
	system("pause");
}

bool cadVazio()
{
	cad * temp;
	temp = primeiroNo;
	system("cls");
	if(temp != NULL)
	{	
		cout << "\nExistem cads alocados.\n";
		system("pause");
		return true;	
	}
	else
	{
		cout << "\nMemória vazia!\n";
		system("pause");
		return false;		
	}
	system("pause");
}

void controle()
{
	int item;
	do
	{
		system("cls");
		cout << "*** MENU - 4 PASSOS DE ALOCAÇÃO DINÂMICA ***\n";
		cout << "\n 1 - contruir   |  2 - alocar   |  3 - exibir   |  4 - destruir   |  5 - status   |  6 - sair \n digite: ";
		cin >> item;
		system("cls");
		
		switch(item)
		{
			case 1: construtor(); break;
			case 2: alocar();     break;
			case 3: exibir();     break;
			case 4: destrutor();  break;
			case 5: cadVazio();   break;
			case 6: exit(0);      break;
			
			default: cout << "Erro!\n" << endl;
			system("pause");
			break;	
		}
	}while(true);
}
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	controle();
 
	return 0;
}