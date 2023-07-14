#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std; 
int numeros(int a, int b, int c){ 
    int resul; 
    resul = pow(a,2) + pow(b,2) + pow(c,2); 
    return resul; 
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
    cout << "\nA soma dos quadrados dos números informados é: " << resultado << endl;  
    system("pause");
    return 0; 
}