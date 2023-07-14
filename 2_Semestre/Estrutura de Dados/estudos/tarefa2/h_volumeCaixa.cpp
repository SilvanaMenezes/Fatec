#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std; 
int comp, larg, alt;
  void volume(){
    int contem;
    contem = comp * larg * alt;
    cout << "\nO volume total da caixa é de: " << contem << "cm3." << endl;  
  }   
int main(){
    system("cls"); 
    setlocale(LC_ALL, "Portuguese"); 
    cout << "\nDigite o comprimento da caixa(em centímetros): ";
    cin >> comp;
    cout << "\nDigite a largura da caixa(em centímetros): ";
    cin >> larg;
    cout << "\nDigite a altura da caixa(em centímetros): ";
    cin >> alt;
    volume();  
    system("pause");
    return 0; 
}
 
