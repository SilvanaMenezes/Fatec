Algoritmo "Operadores Exemplos"

Var
quantidadeAnos, horasTrabalhadas, valorHora, salario: inteiro

Inicio
 quantidadeAnos <- 5;
 horasTrabalhadas <- 40;
 valorHora <- 50;
 salario <- 0;
 
         Se(quantidadeAnos <= 1)entao
            salario <- 1500 + (valorHora * horasTrabalhadas);
            
         Senao
           Se((quantidadeAnos > 1) e (quantidadeAnos < 3))entao
            salario <- 2000 + (valorHora * horasTrabalhadas);
            
           Senao
            salario <- 3000 + (valorHora * horasTrabalhadas);
           
           FimSe
          FimSe
           
           Escreval("salario",salario)
 
Fimalgoritmo