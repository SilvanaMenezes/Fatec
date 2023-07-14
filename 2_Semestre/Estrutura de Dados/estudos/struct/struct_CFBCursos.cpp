#include <iostream>
#include <iomanip>

using namespace std;

struct carro{
	string nome;
	string cor;
	int pot;
	int velMax;
	double valor;
	string situacao;
	
	void insere(string stnome, string stcor, int stpot, int stvelmax, double stvalor, string stsituacao){
		   nome = stnome;
		   cor = stcor;
		   pot = stpot;
		   velMax = stvelmax;
		   valor = stvalor;
		   situacao = stsituacao;	
	}
	
	void mostra(){
		cout << "Informações do Carro:\n";
		cout << "Nome.............: " << nome << "\n";
		cout << "Cor..............: " << cor << "\n";
		cout << "Potência.........: " << pot << "cv\n";
		cout << "Velocidade Máxima: " << velMax << "km\n";
		cout << "Preço............: R$" << valor << "\n";
		cout << "Situação............: " << situacao << "\n\n";		
	}
	
	void mudarSituacao(string ms){
		situacao = ms;
		if(situacao == "vendido"){
			situacao = "vendido";
		}
		if(situacao == "estoque"){
			situacao = "estoque";
		}
	}
};

int main(){
		setlocale(LC_ALL, "Portuguese");
	
		carro car1, car2, car3;
		cout << fixed << setprecision(2);
	
		car1.insere("Mercedes","Preta",1000,300,245900,"vendido");
		car2.insere("Ferrari","Vermelha",900,250,210500,"estoque");
		car3.insere("MacLaren","Laranja",1000,210,190700,"estoque");
	
		car1.mostra();
		car2.mostra();
		car3.mostra();
		
		car1.mudarSituacao("estoque");
		car1.mostra();	
	
	return 0;
}