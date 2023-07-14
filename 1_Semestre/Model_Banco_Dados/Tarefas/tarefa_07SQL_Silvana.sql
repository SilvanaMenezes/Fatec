-- Criar as seguintes tabelas:(com relacionamentos)
create table clientes
(Cod_cli int,
Nome varchar(30),
Ender varchar(40),
Bairro varchar (20),
Cidade varchar (20),
Idade int
Constraint pk_Cod primary key (Cod_cli));
-----------------------------------------------------
create table Produtos
(Cod_prod int,
descri��o varchar (20),
pre�o numeric(9,2),
Constraint pk_cod_prod primary key (Cod_prod));
------------------------------------------------------
create table pedidos
(Cod_Ped int,
Cod_cli int,
Data datetime,
constraint pk_cod_Ped primary key (Cod_Ped), 
constraint fk_cod foreign key (Cod_cli) references clientes (Cod_cli));
------------------------------------------------------------------------
create table Itens_pedidos
(cod_Ped int,
Cod_prod int,
Qntd int,
constraint pk_Itens_pedidos primary key ( Cod_Ped, Cod_prod ));

-- Mostrar tabelas
Select * from clientes;

Select * from Produtos;

Select * from pedidos;

Select * from Itens_pedidos;

-- B) Inserir 5 registro em cada tabela. 
Insert into clientes values 
(01, 'Luiz Fernandes', 'Rua Maria Jos� - 98', 'Parque das Gar�as', 'Santo Andr�', 31),
(02, 'Mariane Alencar', 'Rua Gaivota - 65 Ap. 25', 'Jardim Paulista', 'S�o Caetano do Sul', 28);

Insert into Produtos values
(936, 'Colar de P�rolas', 25),
(392, 'Brinco de Prata', 15),
(345, 'Bolsa de Al�a', 49.99),
(495, 'Blusa Manga Longa', 68.90),
(691, 'Calsa Jeans', 50.99),
(992, 'T�nis Nike Air Max', 530);

Insert into pedidos values 
(01, 02, '20220912'),
(02, 01, '20220912');

Insert into Itens_pedidos values
(01, 992, 1),
(01, 936, 2),
(01, 392, 3),
(02, 345, 3),
(02, 495, 5),
(02, 691, 4);

-- C) Selecionar todos os produtos com pre�os entre 10 e 70,
Select * from Produtos where pre�o between 10 and 70;

-- D) Qual a m�dia de idade dos cliente,
select avg (Idade) as 'M�dia de idades' from clientes; 

-- E) Qual a m�dia de pre�os dos produtos 
select avg (pre�o) as 'M�dia de Pre�o' from Produtos; 

-- F) Quantos pedidos temos no cadastro
Select count(*) as 'Qntd de Pedidos no cadastro' from  pedidos;

-- G) Selecionar todos os clientes que moram em santo Andr� SBC, SCS ou Mau� 
Select * from clientes where Cidade in ('Santo Andr�', 'S�o Bernado do Campo', 'S�o Caetano do Sul', 'Mau�');

-- H) Qual o pre�o do produto mais caro 
Select max(pre�o) as 'Produto mais caro' from Produtos;

-- I) Quantos itens tem o pedidos 01  
Select count(*) as 'Qntd Itens do pedido 01' from Itens_pedidos where cod_Ped = 01;

-- J) Qual o valor total de produtos que temos no cadastro
Select sum(pre�o) as 'Valor total de Produtos' from Produtos;

-- K) Selecionar todas as cidades que temos clientes, sem duplicidade
Select distinct Cidade from clientes;

-- L) Quantos clientes temos no csdastro com idade maior que 30 anos 
Select count(*) as 'Clientes com idade maior que 30' from clientes where Idade > 30; 


