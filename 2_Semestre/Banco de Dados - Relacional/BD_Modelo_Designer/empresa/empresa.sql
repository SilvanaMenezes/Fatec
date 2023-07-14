CREATE TABLE Departamento (
  sigla_depto VARCHAR(03)  NOT NULL,
  nome_depto VARCHAR(20)  NULL,
PRIMARY KEY(sigla_depto));



CREATE TABLE Empregado (
  cpf_empregado VARCHAR(15)  NOT NULL,
  Departamento_sigla_depto VARCHAR(03)  NOT NULL,
  Empregado_cpf_supervisor VARCHAR(15)  NOT NULL,
  nome_empregado VARCHAR(45)  NULL,
  data_inicio_trabalho DATE  NULL,
PRIMARY KEY(cpf_empregado),
  FOREIGN KEY(Empregado_cpf_supervisor)
    REFERENCES Empregado(cpf_empregado),
  FOREIGN KEY(Departamento_sigla_depto)
    REFERENCES Departamento(sigla_depto));



CREATE TABLE Dependente (
  Empregado_cpf_empregado VARCHAR(15)  NOT NULL,
  nome_dependente VARCHAR(45)  NOT NULL,
  sexo_dependente VARCHAR(1)  NULL,
  FOREIGN KEY(Empregado_cpf_empregado)
    REFERENCES Empregado(cpf_empregado));



CREATE TABLE Projetisa (
  Empregado_cpf_empregado VARCHAR(15)  NOT NULL,
  especializacao VARCHAR(20)  NOT NULL,
PRIMARY KEY(Empregado_cpf_empregado),
  FOREIGN KEY(Empregado_cpf_empregado)
    REFERENCES Empregado(cpf_empregado));



CREATE TABLE Projeto (
  id_projeto INTEGER UNSIGNED  NOT NULL   AUTO_INCREMENT,
  Projetisa_Empregado_cpf_empregado VARCHAR(15)  NOT NULL,
  nome_projeto VARCHAR(45)  NULL,
PRIMARY KEY(id_projeto),
  FOREIGN KEY(Projetisa_Empregado_cpf_empregado)
    REFERENCES Projetisa(Empregado_cpf_empregado));



CREATE TABLE Controle (
  Projeto_id_projeto INTEGER UNSIGNED  NOT NULL,
  Departamento_sigla_depto VARCHAR(03)  NOT NULL,
PRIMARY KEY(Projeto_id_projeto, Departamento_sigla_depto),
  FOREIGN KEY(Projeto_id_projeto)
    REFERENCES Projeto(id_projeto),
  FOREIGN KEY(Departamento_sigla_depto)
    REFERENCES Departamento(sigla_depto));



CREATE TABLE Desenvolve (
  Empregado_cpf_empregado VARCHAR(15)  NOT NULL,
  Projeto_id_projeto INTEGER UNSIGNED  NOT NULL,
PRIMARY KEY(Empregado_cpf_empregado, Projeto_id_projeto),
  FOREIGN KEY(Empregado_cpf_empregado)
    REFERENCES Empregado(cpf_empregado),
  FOREIGN KEY(Projeto_id_projeto)
    REFERENCES Projeto(id_projeto));




