CREATE TABLE Unidade_Condominial (
  id_unid_cond INTEGER UNSIGNED  NOT NULL   AUTO_INCREMENT,
  endereco_unid_cond VARCHAR(45)  NULL  ,
  compl_unid_cond INTEGER UNSIGNED  NULL    ,
PRIMARY KEY(id_unid_cond));



CREATE TABLE Pessoa (
  id_pessoa INTEGER UNSIGNED  NOT NULL   AUTO_INCREMENT,
  nome_pessoa VARCHAR(45)  NULL    ,
PRIMARY KEY(id_pessoa));



CREATE TABLE Aluguel (
  Unidade_Condominial_id_unid_cond INTEGER UNSIGNED  NOT NULL  ,
  Pessoa_id_pessoa INTEGER UNSIGNED  NOT NULL  ,
  data_inicio DATE  NOT NULL,
  valor DOUBLE  NULL    ,
PRIMARY KEY(Unidade_Condominial_id_unid_cond, Pessoa_id_pessoa),
  FOREIGN KEY(Pessoa_id_pessoa)
    REFERENCES Pessoa(id_pessoa),
  FOREIGN KEY(Unidade_Condominial_id_unid_cond)
    REFERENCES Unidade_Condominial(id_unid_cond));



CREATE TABLE Proprietario (
  Pessoa_id_pessoa INTEGER UNSIGNED  NOT NULL  ,
  Unidade_Condominial_id_unid_cond INTEGER UNSIGNED  NOT NULL    ,
PRIMARY KEY(Pessoa_id_pessoa, Unidade_Condominial_id_unid_cond),
  FOREIGN KEY(Pessoa_id_pessoa)
    REFERENCES Pessoa(id_pessoa),
  FOREIGN KEY(Unidade_Condominial_id_unid_cond)
    REFERENCES Unidade_Condominial(id_unid_cond));




