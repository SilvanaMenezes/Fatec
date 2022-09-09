Algoritmo "Operadores Igualdade"

Var
valorA: inteiro
valorB: inteiro

textoA: caractere
textoB: caractere

Inicio
valorA <- 1;
valorB <- 2;

textoA <- "TESTE";
textoB <- "TEXTO";

       Se(valorA = valorB)entao
          Escreval("Valores iguais")
       Senao
          Escreval("Valores diferentes")
       FimSe
       
       Escreval("=====================")
       
       Se(valorA <> valorB)entao
          Escreval("Valores diferentes")
       Senao
          Escreval("Valores iguais")
       FimSe
       
       Escreval("=====================")
       
       Se(textoA = textoB)entao
          Escreval("TEXTOS iguais")
       Senao
          Escreval("TEXTOS diferentes")
       FimSe
       
       Escreval("=====================")
       
       Se(textoA <> textoB)entao
          Escreval("TEXTOS diferentes")
       Senao
          Escreval("TEXTOS iguais")
       FimSe
       
       Escreval("=====================")



Fimalgoritmo