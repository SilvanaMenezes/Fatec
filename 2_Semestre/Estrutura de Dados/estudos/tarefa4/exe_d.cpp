#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int matrizA[3];
	int matrizB[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		cout << "\nDigite o valor para posi��o " << i << ": "; 
		cin >> matrizA[i];	
	}
	
	for(i=0;i<3;i++)
	{
		matrizB[i] = pow(matrizA[i],2);		
	}
	
	cout << "\nmatrizA: ";
	for(i=0;i<3;i++)
	{
      cout << matrizA[i] << " ";
	}	
	cout <<"\n";
	
    
	cout << "\nmatrizB: ";	
	for(i=0;i<3;i++)
	{
      cout << matrizB[i] << " ";
	}
	cout <<"\n" << endl;
	
	system("pause");
		
	return 0;			
}