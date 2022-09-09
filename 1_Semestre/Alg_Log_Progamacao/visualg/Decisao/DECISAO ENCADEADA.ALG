Algoritmo "Decisao Encadeada"

Var
texto: caractere


Inicio
texto <- "NAO TESTE"

      Se (texto = "TESTE") entao
       Escreval(texto , " igual")
        Senao
         Se (texto = "NAO TESTE") entao
          Escreval(texto , " NAO TESTE")
           Senao
            Escreval(texto , " diferente")
           FimSe
       FimSe


Fimalgoritmo