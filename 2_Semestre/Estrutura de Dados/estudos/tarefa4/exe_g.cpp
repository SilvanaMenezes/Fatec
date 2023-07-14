#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int matrizA[3];
	int matrizB[3];
	
	cout << "\nmatrizA:\n";
	
	for(int i=0; i<3; i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizA[i];	
	}
	
	for(int i=0; i<3; i++)
	{
    	matrizB[i] = matrizA[3-i-1];
	}
	
	cout << "\nmatrizA: ";		
	
	for(int i=0; i<3; i++)
	{
      cout << matrizA[i] << " ";
	}
	
	cout << "\nmatrizB: ";		
	
	for(int i=0; i<3; i++)
	{
      cout << matrizB[i] << " ";
	}
	
	cout <<"\n" << endl;
	
	system("pause");
		
	return 0;			
}