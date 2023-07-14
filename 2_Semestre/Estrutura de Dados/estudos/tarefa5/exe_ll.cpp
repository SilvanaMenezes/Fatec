#include "iostream"
#include "math.h"
#include "cstdlib"
#include "string"
#include "iomanip"
using namespace std;

int linha = -1;

//vetor explícito
int vetIdades[] = {3,8,1,15,95};
int const vetTam = sizeof(vetIdades) / sizeof(int);
 
//vetor não explícito
string vtNomes[vetTam]; 

//função de entrada - ler vetor de nomes
string lerNomes()
{
	string nome;
	cout << "Digite o Nome: ";
	cin.ignore();
	getline(cin, nome);
	return nome;
}

//função e void de processamento - calcular média das idades e separar o maior e menor
double calcMedia()
{
	double media = 0;
	int contNomes = 0;
	for(int i = 0; i <= linha; i++)
	{
		contNomes++;
		media += vetIdades[i];
	}
	media /= contNomes;
	
	cout <<"Media Idades: " << media;
	
	return media;
}

void sepMaiorMenor()
{
	int maior, menor;
	string maiorNome, menorNome;

	for (int i = 0; i <= linha; i++)
	{
		if(vetIdades[i] > maior || i == 0)
		{
			maior = vetIdades[i];
			maiorNome = vtNomes[i];
		}
		if(vetIdades[i] < menor || i == 0)
		{
			menor = vetIdades[i];
			menorNome = vtNomes[i];
		}
	}

	system("cls");
	cout << maiorNome << " tem " << maior << " anos e a idade maior.\n" << endl;
	cout << menorNome << " tem " << menor << " anos e a idade menor.\n" << endl;
	
}

//voids de saída - exibindo a média das idades e mostrando linhas com registros
void mostrarMedia(double media)
{
	cout << setprecision(2) << fixed;
	cout << "A média das idades é de: " << media << " anos.\n" << endl;
	system("pause");
	system("cls");

}

void novaLinha(string nome)
{
    linha++;
	vtNomes[linha] = nome; 
	system("cls");

}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	string nomes;
	double media;
	int tecla;	
	
	MENU:
	system("cls");
	cout << "* Menu *\n1 incluir\n2 mostrar\n3 sair\nitem: ";
	cin >> tecla;
	
	switch(tecla)
	{
		case 1:
				system("cls");
				nomes = lerNomes();
				novaLinha(nomes);				
				break;
		
		case 2:
				media = calcMedia();
				sepMaiorMenor();
				mostrarMedia(media);
				break;
			
		case 3:
				exit(0);
				break; 
	}
	goto MENU;
	return 0;
}




