#include "iostream"
#include "math.h"
#include "cstdlib"
#include "iomanip"
using namespace std;  
double conversor_moeda(double real,double dolar){
    double conversor;
    conversor = real / dolar;
    return conversor;
}
int main(){
    system("cls"); 
    setlocale(LC_ALL, "Portuguese");   
    double real, dolar, converter;   
    cout << "\nQuanto est� a cota��o do dolar hoje? R$"; 
    cin >> dolar;   
    cout << "\nQuantos reais voc� tem para conveter? R$"; 
    cin >> real;    
    converter = conversor_moeda(real,dolar); 
    cout << setprecision (2) << fixed; 
    cout << "\nSeu valor convertido em dolar americano �: $" << converter << endl;  
    system("pause");   
    return 0; 
}