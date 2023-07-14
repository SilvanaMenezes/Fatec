-- a)Criar as tabelas xRelacionamentos:
create TABLE clientes
(Cod_cli  int,
Nome   varchar(30),
Endereço varchar(40),
Cidade  varchar(30),
Fone    char(9),
Idade  int,
constraint pk_cod primary key(Cod_cli));

create TABLE transportadora
(Codigo int,
Nome varchar(20),
constraint pk_codigo_transportadora primary key (Codigo));  

create TABLE pedidos
(Num_Ped int,
Cliente int ,
Data_Entrega datetime,
Transport int, 
constraint pk_num_pedidos primary key (Num_Ped),
constraint fk_codigo_transportadora foreign key (transport) references transportadora (codigo),
constraint fk_cod_cli foreign key (Cliente) references clientes (Cod_cli));

-- Deletar as tabelas
Drop table pedidos;
Drop table clientes;
Drop table transportadora;

-- Mostrar Tabelas
Select * from clientes;
Select * from pedidos;
Select * from transportadora; 


-- b) Inserir 5 registros em cada tabela.
insert into clientes values
(01, 'Beatriz Almeida','Rua Curtindo a Vida', 'SBC', '984563217', 20),
(02, 'Cristiane Azevedo', 'Rua da Alegria','Mauá', '940028922', 33);

insert into transportadora values
(01, 'ABC'),
(02, 'XPTO'),
(03, 'JDK');

insert into pedidos values
(01,01,'20220925', 01),
(02,02,'20221024', 03);

-- c) Selecionar todos os pedidos da transportadora ABC.
Select pedidos.Num_ped , transportadora.Nome from pedidos INNER JOIN transportadora 
ON pedidos.Transport = transportadora.Codigo
where transportadora.Nome = 'ABC';

-- d) Quantos pedidos existem para o cliente 2?
Select count(*) as 'Pedidos Cliente 02' from pedidos where Cliente = 02;

-- e) Qual o número do Pedido mais recente?
Select Num_Ped , Data_Entrega from pedidos where Data_entrega = (select max(Data_Entrega) from pedidos); 

-- f) Temos quantos pedidos para a Transportadora ABC?
Select count(pedidos.Num_ped) as 'Qntd de Pedidos na Transp. ABC' from pedidos INNER JOIN transportadora 
ON pedidos.Transport = transportadora.Codigo
where transportadora.nome = 'ABC';

-- g) Quantos Clientes residem em Mauá?
Select count(*) as 'Clientes de Mauá' from clientes where cidade = 'Mauá';

-- h) Selecionar Número do Pedido, Data_Entrega e Nome do Cliente.
Select pedidos.Num_ped, pedidos.Data_entrega, clientes.Nome from pedidos INNER JOIN clientes
ON pedidos.Cliente = clientes.Cod_cli;

-- i) Selecionar Número do Pedido, Nome do Cliente e nome da Transportadora.
Select pedidos.Num_ped, clientes.Nome, transportadora.Nome from pedidos INNER JOIN clientes
ON pedidos.Cliente = clientes.Cod_cli
INNER JOIN  transportadora
ON pedidos.transport = transportadora.Codigo;

-- j) Selecionar todos os clientes da cidade de Santo André, Mauá e SBC.
Select Cod_cli,Nome, Cidade from clientes where cidade in ('Santo André', 'Mauá', 'SBC');

-- k) Quantos clientes temos acima da média de idade?
Select count(*) as 'Idade acima da Média' from clientes where idade > (select avg(idade) from clientes);

-- l) Quantos pedidos temos na data mais recente?
Select count(*) as 'Pedidos recentes' from pedidos where Data_Entrega = (select max(data_entrega) from pedidos);

-- m) Selecionar os clientes com idade abaixo da média.
Select count(*) as 'Idade abaixo da Média' from clientes where idade < (select avg(idade) from clientes);
