#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int const n = 3;
int const j = 5;
int const k = 8;	
int matrizA[n];
int matrizB[j];
int matrizC[k]; 

void exeA()
{
	cout << "\nMatrizA: "; 
	for(int i = 0; i < n; i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizA[i];
	}
}

void mostrarA()
{
	cout << "\nMatrizA: "; 
	for(int i = 0; i < n; i++)
	{
		cout << matrizA[i] << " ";
	}
	cout <<"\n" << endl;
	system("pause");
}

void exeB()
{
	cout << "\nmatrizA:\n";
	for(int i=0;i<n;i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizA[i];	
	}
	
	for(int i=0;i<n;i++)
	{
		matrizB[i] = matrizA[i]*3;		
	}
}
		
void mostrarB()
{
	cout << "\nmatrizB: ";		
	for(int i=0;i<n;i++)
	{
      cout << matrizB[i] << " ";
	}	
	cout <<"\n" << endl;	
	system("pause");
}

void exeC()
{
	cout << "\nmatrizA:\n";
	for(int i=0;i<n;i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizA[i];	
	}
	cout << "\nmatrizB:\n";
	for(int i=0;i<n;i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizB[i];	
	}
	for(int i=0;i<n;i++)
	{
		matrizC[i] = matrizA[i] - matrizB[i];		
	}
}
	
void mostrarC()
{
	cout << "\nmatrizC: ";		
	for(int i=0;i<n;i++)
	{
      cout << matrizC[i] << " ";
	}
	cout <<"\n" << endl;
	system("pause");
}
		
void exeD()
{
	cout << "\nmatrizA: ";
	for(int i=0;i<n;i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizA[i];	
	}
	for(int i=0;i<3;i++)
	{
		matrizB[i] = pow(matrizA[i],2);		
	}
}

void mostrarD()
{
	cout << "\nmatrizA: ";
	for(int i=0;i<n;i++)
	{
      cout << matrizA[i] << " ";
	}	
	cout <<"\n";
	
	cout << "\nmatrizB: ";	
	for(int i=0;i<n;i++)
	{
      cout << matrizB[i] << " ";
	}
	cout <<"\n" << endl;
	system("pause");			
}
		
void exeE()
{
	cout << "\nmatrizA:\n";
	for(int i=0;i<n;i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizA[i];	
	}
	
	cout << "\nmatrizB:\n";
	for(int i=0;i<n;i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizB[i];	
	}
	
	for(int i=0; i<n; i++)
	{
    	matrizC[i] = matrizA[i];
	}
	
	for (int i=0; i<n; i++)
	{
		matrizC[i + n] = matrizB[i];
	}
}

void mostrarE()
{
	cout << "\nmatrizC: ";		
	for(int i=0;i<n * 2;i++)
	{
      cout << matrizC[i] << " ";
	}
	cout <<"\n" << endl;
	system("pause");	
}

void exeF()
{
		
	cout << "\nmatrizA:\n";
	for(int i=0; i<n; i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizA[i];	
	}
	cout << "\nmatrizB:\n";
	for(int i=0; i<j; i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizB[i];	
	}
	for(int i=0; i<n; i++)
	{
    	matrizC[i] = matrizA[i];
	}
	for(int i=0; i<j; i++)
	{
		matrizC[i + n] = matrizB[i];
	}	
}

void mostrarF()
{
	
	cout << "\nmatrizC: ";		
	for(int i=0; i<k; i++)
	{
      cout << matrizC[i] << " ";
	}
	cout <<"\n" << endl;
	system("pause");	
}
		
void exeG()
{
	cout << "\nmatrizA:\n";
	for(int i=0; i<n; i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizA[i];	
	}
	
	for(int i=0; i<n; i++)
	{
    	matrizB[i] = matrizA[n-i-1];
	}	
}
		
void mostrarG()
{
	cout << "\nmatrizA: ";		
	for(int i=0; i<n; i++)
	{
      cout << matrizA[i] << " ";
	}
	cout << "\nmatrizB: ";		
	for(int i=0; i<n; i++)
	{
      cout << matrizB[i] << " ";
	}
	cout <<"\n" << endl;
	system("pause");
}

void menu()
{
	int item =0;
	do{
	    system("cls");
		cout << "***Menu de Controle***\n";
		cout << "01 digite para preencher as matrizes: " << "|" << " 02 mostrar matriz preenchida:\n\n";
		cout << "03 digite para preencher as matrizes: " << "|" << " 04 mostrar matriz * 3:\n\n";
		cout << "05 digite para preencher as matrizes: " << "|" << " 06 mostrar matriz subtraída:\n\n";
		cout << "07 digite para preencher as matrizes: " << "|" << " 08 mostra matriz quadrado:\n\n";
		cout << "09 digite para preencher as matrizes: " << "|" << " 10 mostrar junção de matrizes:\n\n";
		cout << "11 digite para preencher as matrizes: " << "|" << " 12 mostrar junção de matrizes tamanho diferente:\n\n";
		cout << "13 digite para preencher as matrizes: " << "|" << " 14 mostrar matrizes invertidas:\n\n";
		cout << "0 Sair\n";
		cout << "item> ";
		cin >> item;
		system("cls");
         
         	switch (item){  
				case 1: exeA(); break;
				case 2: mostrarA(); break;  
				case 3: exeB(); break;
				case 4: mostrarB(); break;
				case 5: exeC(); break;
				case 6: mostrarC(); break;
				case 7: exeD(); break;		
  				case 8: mostrarD(); break;
				case 9: exeE(); break;
				case 10: mostrarE(); break;
				case 11: exeF(); break;
				case 12: mostrarF(); break;
				case 13: exeG(); break;
				case 14: mostrarG(); break;        
    			case 0:  exit(0); break;             
    			default : cout << "Erro de Operação!\n";
        		system("pause");
       			break;
         	}         
         
  	} while (true);
}

int main()
{ 
	setlocale(LC_ALL, "Portuguese");
	menu(); 

	return 0;
} 





