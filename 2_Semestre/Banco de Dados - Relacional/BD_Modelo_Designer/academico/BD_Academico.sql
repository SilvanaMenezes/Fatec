CREATE TABLE Professor (
  idProfessor INTEGER UNSIGNED  NOT NULL   AUTO_INCREMENT,
  nomeProfessor VARCHAR(45)  NULL  ,
  titulacaoProfessor INTEGER UNSIGNED  NULL    ,
PRIMARY KEY(idProfessor));


CREATE TABLE Curso (
  idCurso INTEGER UNSIGNED  NOT NULL   AUTO_INCREMENT,
  nomeCurso VARCHAR(45)  NULL  ,
  periodoCurso VARCHAR(1)  NULL    ,
PRIMARY KEY(idCurso));


CREATE TABLE Aluno (
  idAluno INTEGER UNSIGNED  NOT NULL   AUTO_INCREMENT,
  nomeAluno VARCHAR(45)  NULL  ,
  emailAluno VARCHAR(25)  NULL  ,
  foneAluno VARCHAR(10)  NULL    ,
PRIMARY KEY(idAluno));


CREATE TABLE Disciplina (
  idDisciplina INTEGER UNSIGNED  NOT NULL   AUTO_INCREMENT,
  Professor_idProfessor INTEGER UNSIGNED  NOT NULL  ,
  Curso_idCurso INTEGER UNSIGNED  NOT NULL  ,
  nomeDisciplina VARCHAR(20)  NULL  ,
  cargaDisciplina INTEGER UNSIGNED  NULL    ,
PRIMARY KEY(idDisciplina)  ,
INDEX Disciplina_FKIndex1(Curso_idCurso)  ,
INDEX Disciplina_FKIndex2(Professor_idProfessor),
  FOREIGN KEY(Curso_idCurso)
    REFERENCES Curso(idCurso)
      ON DELETE NO ACTION
      ON UPDATE NO ACTION,
  FOREIGN KEY(Professor_idProfessor)
    REFERENCES Professor(idProfessor)
      ON DELETE NO ACTION
      ON UPDATE NO ACTION);


CREATE TABLE Historico (
  Aluno_idAluno INTEGER UNSIGNED  NOT NULL  ,
  Disciplina_idDisciplina INTEGER UNSIGNED  NOT NULL  ,
  dataHistorico DATE  NULL  ,
  mediaHistorico FLOAT  NULL  ,
  faltaHistorico INT  NULL    ,
PRIMARY KEY(Aluno_idAluno, Disciplina_idDisciplina)  ,
INDEX Aluno_has_Disciplina_FKIndex1(Aluno_idAluno)  ,
INDEX Aluno_has_Disciplina_FKIndex2(Disciplina_idDisciplina),
  FOREIGN KEY(Aluno_idAluno)
    REFERENCES Aluno(idAluno)
      ON DELETE NO ACTION
      ON UPDATE NO ACTION,
  FOREIGN KEY(Disciplina_idDisciplina)
    REFERENCES Disciplina(idDisciplina)
      ON DELETE NO ACTION
      ON UPDATE NO ACTION);



