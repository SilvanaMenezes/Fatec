CREATE TABLE Filme (
  id_filme INTEGER UNSIGNED  NOT NULL   AUTO_INCREMENT,
  nome_filme VARCHAR(45)  NULL  ,
  categoria_filme VARCHAR(10)  NULL    ,
PRIMARY KEY(id_filme));



CREATE TABLE Cliente (
  id_cliente INTEGER UNSIGNED  NOT NULL   AUTO_INCREMENT,
  prenome_cliente VARCHAR(45)  NULL  ,
  sobrenome_cliente VARCHAR(20)  NULL  ,
  telefone_cliente VARCHAR(15)  NULL  ,
  endereco_cliente VARCHAR(45)  NULL    ,
PRIMARY KEY(id_cliente));



CREATE TABLE Ator (
  id_ator INTEGER UNSIGNED  NOT NULL   AUTO_INCREMENT,
  nome_ator VARCHAR(45)  NULL  ,
  nasci_ator DATE  NULL    ,
PRIMARY KEY(id_ator));



CREATE TABLE Fita (
  id_fita INTEGER UNSIGNED  NOT NULL   AUTO_INCREMENT,
  Filme_id_filme INTEGER UNSIGNED  NOT NULL  ,
  quant_fita INTEGER UNSIGNED  NULL    ,
PRIMARY KEY(id_fita),
  FOREIGN KEY(Filme_id_filme)
    REFERENCES Filme(id_filme));



CREATE TABLE Filmes_Ator (
  Ator_id_ator INTEGER UNSIGNED  NOT NULL  ,
  Filme_id_filme INTEGER UNSIGNED  NOT NULL    ,
PRIMARY KEY(Ator_id_ator, Filme_id_filme),
  FOREIGN KEY(Ator_id_ator)
    REFERENCES Ator(id_ator),
  FOREIGN KEY(Filme_id_filme)
    REFERENCES Filme(id_filme));



CREATE TABLE Emprestimo (
  Cliente_id_cliente INTEGER UNSIGNED  NOT NULL  ,
  Fita_id_fita INTEGER UNSIGNED  NOT NULL  ,
  data_retirada DATE  NULL  ,
  data_devolucao DATE  NULL    ,
PRIMARY KEY(Cliente_id_cliente, Fita_id_fita),
  FOREIGN KEY(Cliente_id_cliente)
    REFERENCES Cliente(id_cliente),
  FOREIGN KEY(Fita_id_fita)
    REFERENCES Fita(id_fita));




