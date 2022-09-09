class para:
    def __init__(self,numero):
        self.numero = numero

    def para1(self):
        from tkinter import messagebox

        for self.numero in range(8,11):
            messagebox.showinfo('Para', 'Opção: ' +  str(self.numero))
            print('Opção: ', self.numero)    

#para(8).para1()