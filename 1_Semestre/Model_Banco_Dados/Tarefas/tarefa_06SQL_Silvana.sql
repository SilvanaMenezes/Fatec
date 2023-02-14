-- Tarefa 06- SQL - Modelagem de Bancos de Dados

-- a) Criar a tabela Empregados:
create table Empregados
(Matr CHAR (6),
Nome varchar(12),
Sobrenome Varchar(15),
Dept Char (10),
Fone Varchar(14),
Data_Adm Datetime,
Cargo Char(20),
Sexo char(1),
Idade int,
Salario Numeric (10,2),
Comissao Numeric (10,2),
Constraint pk_cod primary key(Matr));

--mostrar a Tabela
Select * from Empregados;

--excluir tabela de registro
drop table Empregados;

-- b) Inserir 10 Registros
insert into Empregados values
( '101', 'Jaqueline', 'Volvo','TI','(11)99876-5432','20201205','Programador(a)','F',33,8200, 0),
( '102', ' Maria', 'Brando', 'Vendas', '(11)99898-5454','20120901','Gerente de Vendas','F',39,4190,8300),
( '103', 'Paulo', 'Santos', 'Marketing','(11)94325-1287','20220908','Redator','M', 20,2564,300);

-- c) Selecionar o sobrenome, primeiro nome, departamento, data de admiss�o e sal�rio de todos os empregados que ganham mais que R$ 5000.
select sobrenome, nome, dept, data_adm, salario from Empregados where salario > 5000

-- d) Qual a m�dia de salarios dos funcion�rios?
select avg(salario) as 'M�dia de Sal�rio' from Empregados;

-- e) Quantos funcion�rios pertencem ao departamento de TI?
select count(*) from Empregados where dept ='TI';

-- f) Quantos funcion�rios temos com cargo igual a programador(a)?
select count(*) from Empregados where cargo ='Programador(a)';

-- g) Qual o somat�rio dos sal�rios?
select sum(salario) as 'Somat�rio dos Sal�rios' from Empregados;

-- h) Qual o valor do maior sal�rio?
select max(salario) as 'Maior Sal�rio' from Empregados;

-- i) Qual o valor do menor sal�rio?
select min(salario) as 'Menor Sal�rio' from Empregados;

-- j) Atribuir um aumento de 5% aos funcion�rios do departamento de TI.
update Empregados set salario = salario * 1.05 where dept ='TI';

-- k) Selecionar os cargos sem duplicidades.
select distinct cargo from Empregados;

-- l) Selecionar os funcion�rios com idade entre 30 e 40 anos(inclusive)
select * from Empregados where idade between 30 and 40;

-- m) Qual a m�dia de idades?
select avg(idade) as 'M�dia de idades' from Empregados; 

-- n) Selecionar todos os funcion�rios com idade entre 20 e 30 anos(inclusive) do departamento de TI.
select * from Empregados where dept ='TI' and idade between 20 and 30;

-- o) Selecionar todos os funcion�rios cujo o nome inicia-se com letra J.
select * from Empregados where nome like 'J%';

-- p) Selecionar todos os funcion�rios dos departamentos de TI, Vendas e Marketing.
select * from Empregados where dept in ('TI', 'Vendas', 'Marketing');