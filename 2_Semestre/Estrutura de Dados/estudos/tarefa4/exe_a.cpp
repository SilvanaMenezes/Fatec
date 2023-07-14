#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[3];
	int i;
	
	for(i = 0; i < 3; i++)
	{	
		cout << "\nDigite o valor para posição " << i << ": "; 
		cin >> vetor[i];
    }
    
    cout << "\nVetor: ";		
    for(i = 0; i < 3; i++)
	{
		cout << vetor[i] << " ";
	}	
	cout <<"\n" << endl;
	
	system("pause");
		
	return 0;
}