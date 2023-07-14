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
		cout << fixed << setprecision(2);
		
		carro *carros = new carro[4];	
		carro car1, car2, car3, car4;
		
		carros[0] = car1; carros[1] = car2; carros[2] = car3; carros[3] = car4;		
	
		carros[0].insere("Mercedes","Preta",1000,300,245900,"vendido");
		carros[1].insere("Ferrari","Vermelha",900,250,210500,"estoque");
		carros[2].insere("MacLaren","Laranja",850,210,190700,"estoque");
		carros[3].insere("RedBull","Azul",1000,300,250000,"vendido");
		
		for(int i=0; i<4; i++){
			carros[i].mostra();
			
		}		
		
	
	return 0;
}