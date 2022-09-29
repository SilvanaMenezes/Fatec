--A) Criar a Tabela Produtos
CREATE TABLE produtos
(Codprod int,
Descricão varchar(20),
Preco numeric (9,2),
Qtde int,
Cor char(20),
constraint pk_Cod primary key(Codprod));

--Mostrar a Tabela
Select * from produtos;

--B) Inserir 10 Registros
Insert into produtos values
(1,'Molho de tomate 300g',3.85,10,'Vermelho'),
(2,'Arroz Tipo 1 pct 5kg',23.29,5,'Branco'),
(3,'Amaciante 1,5L',19.90,6,'Azul'),
(4,'Air Fry s/oleo 11L',658.99,6,'Preto');

--Excluir Tabela e Registros
Drop Table produtos;