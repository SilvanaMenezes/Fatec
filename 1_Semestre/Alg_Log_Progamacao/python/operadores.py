class atribuicao:
    def __init__(self,lado,pi,caract,texto,area):
        self.lado = lado
        self.pi = pi
        self.caract = caract
        self.texto = texto
        self.area = area

    def atribuicao1(self):        
        from tkinter import messagebox

        messagebox.showinfo('atribuição','lado = ' + str(self.lado))
        messagebox.showinfo('atribuição','pi = ' + str(self.pi))
        messagebox.showinfo('atribuição','caracter = ' + str(self.caract))
        messagebox.showinfo('atribuição', 'texto = ' + str(self.texto))
        messagebox.showinfo('atribuição', 'area = ' + str(self.area))

        print('lado = ', self.lado)
        print('pi = ', self.pi)
        print('caract = ', self.caract)
        print('texto = ', self.texto)
        print('area = ', self.area)

#atribuicao(2,3.1426,"A","DevMedia",4).atribuicao1()

class aritmeticos:
    def __init__(self,n1,n2):
        self.n1 = n1
        self.n2 = n2

    def aritmeticos1(self):        
        from tkinter import messagebox        

        #adição
        resultado = self.n1 + self.n2
        messagebox.showinfo('adição', 'soma =' + str(resultado))
        print('soma =', resultado)

        #subtração
        resultado = self.n1 - self.n2
        messagebox.showinfo('subtração', 'sub =' + str(resultado))
        print('sub =', resultado)

        #multiplicação
        resultado = self.n1 * self.n2
        messagebox.showinfo('multiplicação', 'mult =' + str(resultado))
        print('mult =', resultado)

        #divisão
        resultado = self.n1 / self.n2
        messagebox.showinfo('divisão', 'div =' + str(resultado))
        print('div =', resultado)

#aritmeticos(5.8,3.2).aritmeticos1()

class incremento:
    def __init__(self,numero):
       self.numero = numero

    def incremento1(self):        
        from tkinter import messagebox        
        
        messagebox.showinfo('numero inicial', 'numero = ' + str(self.numero))
        print('numero = ', self.numero)

        #incremento
        self.numero += 1
        messagebox.showinfo('numero com incremento', 'numero = ' + str(self.numero))
        print('numero = ', self.numero)

        #decremento
        self.numero -= 1
        messagebox.showinfo('numero com decremento', 'numero = ' + str(self.numero))
        print('numero = ', self.numero)

        #desafioUm
        resultado = self.numero + self.numero + 1
        messagebox.showinfo('desafioUm',  + resultado)
        print(resultado)

        #desafioDois
        resultado -= 1
        messagebox.showinfo('desafioDois', + resultado)
        print(resultado)

#incremento(5).incremento1()

class igualdade:
    def __init__(self, valorA, valorB, textoA, textoB):
        self.valorA = valorA
        self.valorB = valorB
        self.textoA = textoA
        self.textoB = textoB

    def igualdade1(self):
        from tkinter import messagebox

        if (self.valorA == self.valorB):
            messagebox.showinfo('Mensagem', str('Valores iguais'))
            print('Valores iguais')

        else:
            messagebox.showinfo('Mensagem', str('Valores diferentes'))
            print('Valores diferentes')

        if (self.valorA != self.valorB):
            messagebox.showinfo('Mensagem', str('Valores diferentes'))
            print('Valores diferentes')

        else:
            messagebox.showinfo('Mensagem', str('Valores iguais'))
            print('Valores iguais')

        if (self.textoA == self.textoB):
            messagebox.showinfo('Mensagem', str('TEXTOS iguais'))
            print('TEXTOS iguais')
        
        else:
            messagebox.showinfo('Mensagem', str('TEXTOS diferentes'))
            print('TEXTOS diferentes')

        if (self.textoA != self.textoB):
            messagebox.showinfo('Mensagem', str('TEXTOS diferentes'))
            print('TEXTOS diferentes')

        else:
            messagebox.showinfo('Mensagem', str('TEXTOS iguais'))
            print('TEXTOS iguais')

#igualdade(1, 2, "TESTE", "TEXTO").igualdade1()

class relacionais:
    def __init__(self, valorA, valorB):
        self.valorA = valorA
        self.valorB = valorB

    def relacionais1(self):
        from tkinter import messagebox

        if (self.valorA > self.valorB):
            messagebox.showinfo('Mensagem', str('maior'))
            print('maior')

        if (self.valorA >= self.valorB):
            messagebox.showinfo('Mensagem', str('maior ou igual'))
            print('maior ou igual')

        if (self.valorA < self.valorB):
            messagebox.showinfo('Mensagem', str('menor'))
            print('menor')

        if (self.valorA <= self.valorB):
            messagebox.showinfo('Mensagem', str('menor ou igual'))
            print('menor ou igual')

        else:
            messagebox.showinfo('Mensagem', str('igual'))
            print('igual')

#relacionais(1, 2).relacionais1()

        



        


        







    






    