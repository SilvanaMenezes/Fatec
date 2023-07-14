

CREATE TABLE Empregado (
  nome VARCHAR(45)  NOT NULL   AUTO_INCREMENT,
  data_nasc DATE  NULL  ,
  endereco VARCHAR(20)  NULL    ,
PRIMARY KEY(nome));



CREATE TABLE Secretaria (
  velocidade_digitacao VARCHAR  NOT NULL   AUTO_INCREMENT,
  Empregado_nome VARCHAR(45)  NOT NULL    ,
PRIMARY KEY(velocidade_digitacao, Empregado_nome)  ,
INDEX Secretaria_FKIndex1(Empregado_nome),
  FOREIGN KEY(Empregado_nome)
    REFERENCES Empregado(nome)
      ON DELETE NO ACTION
      ON UPDATE NO ACTION);



CREATE TABLE Tecnico (
  tgrau VARCHAR  NOT NULL   AUTO_INCREMENT,
  Empregado_nome VARCHAR(45)  NOT NULL    ,
PRIMARY KEY(tgrau, Empregado_nome)  ,
INDEX Tecnico_FKIndex1(Empregado_nome),
  FOREIGN KEY(Empregado_nome)
    REFERENCES Empregado(nome)
      ON DELETE NO ACTION
      ON UPDATE NO ACTION);



CREATE TABLE Empregado_Assalariado (
  salario VARCHAR  NOT NULL   AUTO_INCREMENT,
  Empregado_nome VARCHAR(45)  NOT NULL    ,
PRIMARY KEY(salario, Empregado_nome)  ,
INDEX Empregado_Assalariado_FKIndex1(Empregado_nome),
  FOREIGN KEY(Empregado_nome)
    REFERENCES Empregado(nome)
      ON DELETE NO ACTION
      ON UPDATE NO ACTION);



CREATE TABLE Engenheiro (
  tipo_eng VARCHAR  NOT NULL   AUTO_INCREMENT,
  Empregado_nome VARCHAR(45)  NOT NULL    ,
PRIMARY KEY(tipo_eng, Empregado_nome)  ,
INDEX Engenheiro_FKIndex1(Empregado_nome),
  FOREIGN KEY(Empregado_nome)
    REFERENCES Empregado(nome)
      ON DELETE NO ACTION
      ON UPDATE NO ACTION);



CREATE TABLE Gerente (
  Empregado_nome VARCHAR(45)  NOT NULL    ,
PRIMARY KEY(Empregado_nome)  ,
INDEX Gerente_FKIndex1(Empregado_nome),
  FOREIGN KEY(Empregado_nome)
    REFERENCES Empregado(nome)
      ON DELETE NO ACTION
      ON UPDATE NO ACTION);



CREATE TABLE Empregado_Horista (
  escala_pagamento VARCHAR  NOT NULL   AUTO_INCREMENT,
  Empregado_nome VARCHAR(45)  NOT NULL    ,
PRIMARY KEY(escala_pagamento, Empregado_nome)  ,
INDEX Empregado_Horista_FKIndex1(Empregado_nome),
  FOREIGN KEY(Empregado_nome)
    REFERENCES Empregado(nome)
      ON DELETE NO ACTION
      ON UPDATE NO ACTION,
  FOREIGN KEY()
    REFERENCES Sindicato()
      ON DELETE NO ACTION
      ON UPDATE NO ACTION);



CREATE TABLE Projeto (
  Gerente_Empregado_nome VARCHAR(45)  NOT NULL    ,
PRIMARY KEY(Gerente_Empregado_nome)  ,
INDEX Projeto_FKIndex1(Gerente_Empregado_nome),
  FOREIGN KEY(Gerente_Empregado_nome)
    REFERENCES Gerente(Empregado_nome)
      ON DELETE NO ACTION
      ON UPDATE NO ACTION);




