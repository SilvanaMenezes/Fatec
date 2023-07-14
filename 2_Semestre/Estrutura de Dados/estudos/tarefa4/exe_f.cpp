#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int matrizA[3];
	int matrizB[5];
	int matrizC[8];
	
	cout << "\nmatrizA:\n";
	
	for(int i=0; i<3; i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizA[i];	
	}
	
	cout << "\nmatrizB:\n";
	
	for(int i=0; i<5; i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizB[i];	
	}
	
	for(int i=0; i<3; i++)
	{
    	matrizC[i] = matrizA[i];
	}
	
	for (int i=0; i<5; i++)
	{
		matrizC[i + 3] = matrizB[i];
	}
	
	cout << "\nmatrizC: ";		
	
	for(int i=0; i<8; i++)
	{
      cout << matrizC[i] << " ";
	}
	
	cout <<"\n" << endl;
	
	system("pause");
		
	return 0;			
}