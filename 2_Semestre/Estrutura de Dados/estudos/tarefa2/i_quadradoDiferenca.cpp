#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std; 
int numeros(int a, int b){ 
    int diferenca, resul; 
    diferenca = a - b; 
    resul = pow(diferenca,2); 
    return resul;
}  
int main(){ 
    system("cls"); 
    setlocale(LC_ALL, "Portuguese"); 
    int a, b, resultado;   
    cout << "\nDigite um número inteiro para A: "; 
    cin >> a;   
    cout << "\nDigite um número inteiro para B: "; 
    cin >> b;   
    resultado = numeros(a,b); 
    cout << "\nO quadrado da dirença entre os números informados é: " << resultado << endl;    
    system("pause");
    return 0;
}