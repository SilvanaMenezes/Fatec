Algoritmo "arrayBidimensional"

Var
   mat: vetor[1..3, 1..2] de inteiro
   l,c: inteiro


Inicio
      para l <- 1 ate 3 faca
           para c <- 1 ate 2 faca
                escreva("Valor para Linha", l, " Coluna", c, " = ")
                leia(mat[l,c])
           fimpara
      fimpara
      
      escreval()
      
      para l <- 1 ate 3 faca
           para c <- 1 ate 2 faca
                escreval("Valor Linha e Coluna ",l," x",c," =", mat[l,c])
           fimpara
      fimpara

Fimalgoritmo