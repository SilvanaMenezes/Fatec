Algoritmo "arrayUnidimensional"

Var
   v: vetor [0..5] de inteiro
   n, i,menor, maior, soma: inteiro



Inicio
// Entrada de Dados
      para i <- 0 ate 5 faca
           escreva("informe ",i, "o. valor de 5: ")
           leia(v[i])
      fimpara

// Processamento: somar todos os valores, definir o maior e o menor valor
      soma <- 0
      menor <- v[0]
      maior <- v[0]
      
      para i <- 0 ate 5 faca
           soma <- soma + v[i]
           
           se (v[i] < menor) entao
              menor <- v[i]
           fimse
           
           se (v[i] > maior) entao
              maior <- v[i]
           fimse
      fimpara
      
      escreval()
      
// Saída (resultados)
      para i <- 0 ate 5 faca
           se (v[i] = menor) entao
              escreval("[",v[i],"]", " =", i, " <--- menor valor")
           senao
              se (v[i] = maior) entao
              escreval("[",v[i],"]", " =", i, " <--- maior valor")
           senao
              escreval("[",v[i],"]", " =", i)
              fimse
           fimse
      fimpara
      
      escreval()
      
      escreval("Soma = ", soma)

Fimalgoritmo