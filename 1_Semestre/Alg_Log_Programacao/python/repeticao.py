class enquanto:
    def __init__(self,numero):
        self.numero = numero

    def enquanto1(self):
        from tkinter import messagebox

        while self.numero <= 10:
            messagebox.showinfo('Enquanto' , 'Opção ' + str(self.numero))
            print('Opção ' , self.numero)
            self.numero += 1

class repita:
    def __init__(self,numero):
        self.numero = numero

    def repita1(self):
        from tkinter import messagebox

        while True:
            self.numero += 1
            if not self.numero <= 10:
                break

            messagebox.showinfo('Repetição', 'Opção ' + str(self.numero))
            print('Opção ', self.numero)
          
class para:
    def __init__(self,numero):
        self.numero = numero

    def para1(self):
        from tkinter import messagebox

        for self.numero in range(8,11):
            messagebox.showinfo('Para', 'Opção: ' +  str(self.numero))
            print('Opção: ', self.numero)