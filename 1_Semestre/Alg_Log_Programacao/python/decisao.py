class simples:
  def __init__(self,texto):
    self.texto = texto

  def simples1(self):
    from tkinter import messagebox

    if (self.texto == 'TESTE'):
      messagebox.showinfo ('Mensagem', str(self.texto) + " igual")
      print('igual')

class composta:
  def __init__(self,texto):
    self.texto = texto

  def composta1(self):
    from tkinter import messagebox

    if (self.texto == 'TESTE'):
      messagebox.showinfo ('Mensagem', str(self.texto) + " igual")
      print('igual')

    else:
      messagebox.showinfo ('Mensagem', str(self.texto) + " diferente")
      print('diferente')

class encadeada:
  def __init__(self,texto):
    self.texto = texto

  def encadeada1(self):
    from tkinter import messagebox

    if(self.texto == 'TESTE'):
      messagebox.showinfo ('Mensagem', str(self.texto) + " igual")
      print('igual')
        
    elif (self.texto == 'NÃO TESTE'):
      messagebox.showinfo ('Mensagem', str(self.texto) + " NÃO TESTE")
      print('NÃO TESTE')

    else:
      messagebox.showinfo ('Mensagem', str(self.texto) + " diferente")
      print('diferente')

class caso:
  def __init__(self,numero):
    self.numero = numero

  def caso1(self):
    from tkinter import messagebox

    if (self.numero == 1):       
        messagebox.showinfo ('Mensagem', 'Opção ' + str(self.numero))
        print('Opção ', str(self.numero))

    elif (self.numero == 2):
        messagebox.showinfo ('Mensagem', 'Opção ' + str(self.numero))
        print('Opção ', str(self.numero))

    elif (self.numero == 3):
        messagebox.showinfo ('Mensagem', 'Opção ' + str(self.numero))
        print('Opção ', str(self.numero))

    elif (self.numero == 4):
        messagebox.showinfo ('Mensagem', 'Opção ' + str(self.numero))
        print('Opção ', str(self.numero))

    elif (self.numero == 5):
        messagebox.showinfo ('Mensagem', 'Opção ' + str(self.numero))
        print('Opção ', str(self.numero))

    elif (self.numero == 6):
        messagebox.showinfo ('Mensagem', 'Opção ' + str(self.numero))
        print('Opção ', str(self.numero))

    else:
       messagebox.showinfo ('Mensagem', 'Opção desconhecida')
       print('Opção desconhecida')
        
        
          



