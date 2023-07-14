#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int matrizA[3];
	int matrizB[3];
	int matrizC[3];
	int i;
	
	cout << "\nmatrizA:\n";
	
	for(i=0;i<3;i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizA[i];	
	}
	
	cout << "\nmatrizB:\n";
	
	for(i=0;i<3;i++)
	{
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> matrizB[i];	
	}
	
	for(i=0;i<3;i++)
	{
		matrizC[i] = matrizA[i] - matrizB[i];		
	}
    
	cout << "\nmatrizC: ";		
	
	for(i=0;i<3;i++)
	{
      cout << matrizC[i] << " ";
	}
	
	cout <<"\n" << endl;
	
	system("pause");
		
	return 0;			
}