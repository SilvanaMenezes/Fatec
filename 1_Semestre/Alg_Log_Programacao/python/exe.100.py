#INCOMPLETA

# 100. Verificar se uma matriz dada forma um Quadrado Latino de ordem N, no qual
# em cada linha e em cada coluna aparecem todos os inteiros 1,2,3, ... N, ou seja, cada linha
# ou coluna é permutação dos N primeiros números inteiros

#-------------------------------FUNCIONANDO
def leitura_matriz(nlinhas, ncolunas):
    M = []
    for i in range(nlinhas):
        linha = []
        for j in range(ncolunas):
            valor = int(input("(%d,%d):"%(i,j)))
            linha.append(valor)
        M.append(linha)
    return M
 
def lista_latina(L):
    for i in range(1,len(L)+1,1):
        if i not in L:
            return False
    return True
 
def main():
    n = int(input("Digite n: "))
    A = leitura_matriz(n, n)
    latino = True
 
    #Testa linhas:
    for i in range(len(A)):
        if not lista_latina(A[i]):
            latino = False
 
    #Testa colunas:
    for j in range(len(A[0])):
        C = []
        for i in range(len(A)):
            C.append(A[i][j])
        if not lista_latina(C):
            latino = False
    if latino:
        print("Quadrado latino")
    else:
        print("Não é quadrado latino")
 
main()