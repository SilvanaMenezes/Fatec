# 40. Escreva um programa que receba um numero inteiro de 1 a 100 e mostre na tela o numero por extenso

unidade = ['zero', 'um', 'dois', 'três', 'quatro', 'cinco', 'seis', 'sete', 'oito', 'nove', 'dez', 'onze', 'doze', 'treze', 'quatorze', 'quinze', 'dezesseis', 'dezesete', 'dezoito', 'dezenove']

dezenas = ['', '', 'vinte', 'trinta', 'quarenta', 'cinquenta', 'sessenta', 'setenta', 'oitenta', 'noventa']

numero = int(input('Digite um número de 01 à 100: '))

print(f'O numero {numero} por extenso é: ', end='')

if numero == 100:
  print('cem')

elif numero < 20:
  print(unidade[numero])

elif numero >= 20:
  print(dezenas[int(str(numero)[0])], end=' ') #convertendo para string para contar a posição na lista
  numero = numero - int(str(numero)[0]) * 10 #multiplica por dez para entrar na lista dezenas

if numero != 0:
  print('e', unidade[numero])

