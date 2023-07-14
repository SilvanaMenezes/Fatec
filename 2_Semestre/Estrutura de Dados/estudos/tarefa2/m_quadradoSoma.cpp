#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std; 
int numeros(int a, int b, int c){ 
    int resul, valor; 
    resul = a + b + c;
	valor = pow(resul,2); 
    return valor; 
} 
int main(){ 
    system("cls"); 
    setlocale(LC_ALL, "Portuguese"); 
    int a, b, c, resultado;   
    cout << "\nDigite um número inteiro para A: "; 
    cin >> a;   
    cout << "\nDigite um número inteiro para B: "; 
    cin >> b;   
    cout << "\nDigite um número inteiro para C: "; 
    cin >> c;     
    resultado = numeros(a,b,c); 
    cout << "\nO quadrado da soma dos números informados é: " << resultado << endl;  
    system("pause");
    return 0; 
}
 
