CREATE TABLE EXEMPLO
(codigo int,
 nome varchar(40),
 idade int,
 data_Cad datetime,
 valor_apl numeric(10,2),
 constraint pk_cod primary key (codigo));

 -- selecionar todos os registros
 select * from Exemplo;

 -- selecionar todos menores de 25 anos
 select * from EXEMPLO where idade < 25;

 -- selecionar todos com idade entre 22 e 50 anos (duas formas) 
 select * from EXEMPLO where idade >= 22 and idade <= 50;
 select * from EXEMPLO where idade between 22 and 50;

 -- selecionar todos que iniciam com a letra 'P'
 select * from EXEMPLO where nome like 'P%';

 -- selecionar todos que terminam com 'A'
 select * from EXEMPLO where nome like '%A';

 -- selecionar codigo e nome de todos;
 select codigo, nome from Exemplo;

 --selecionar todos com nome: Giuli..., Lari ou Sil...
 select * from EXEMPLO where nome in ('Giuliana', 'Larissa', 'Silvana');

 --selecionar todas as cidades sem duplicidade
 select distinct cidade from EXEMPLO;

 -- quantos registros temos no cadastro?
 select count(*) as 'qtde' from EXEMPLO;

 --qual o total de valores aplicados?
 select sum(valor_apl) as 'total' from EXEMPLO;

 --qual a média de aplicações?
 select avg(valor_apl) as 'media' from EXEMPLO;

 --qual o maior valor de aplicação?
 select max(valor_apl) as 'maior' from EXEMPLO;

 --qual o menor valor de aplicação?
 select min(valor_apl) as 'menor' from EXEMPLO;
  
  -- inserindo um registro
 insert into EXEMPLO values
 (1,'Silvana',37,'20220912',5650.70),
 (2,'Jesus',47,'20220112',5650.69);

 insert into EXEMPLO values
 (3,'Larissa',22,'20220812',5650.68);

 insert into EXEMPLO values
 (5,'Giuliana',24,'20220915',6300.00);

 insert into Exemplo values
 (6,'Beatriz',2,'20220916',2000.00);

 --inserir codigo e nome
 insert into EXEMPLO (codigo, nome) values (4,'Patricia');

 -- acrescentar um rendimento de 5% nas aplicações
 update EXEMPLO set valor_apl = valor_apl * 1.05;

 -- retirar 15% das aplicacções
 update EXEMPLO set valor_apl = valor_apl * 0.85 where codigo = 4;
 update EXEMPLO set valor_apl = valor_apl * 0.85 where codigo = 5;

 -- acrescentar idade, data_Cad, valor_apl para Patricia de codigo 4
 update EXEMPLO set idade = 40, data_Cad = '20220918', valor_apl = 5600.00 where codigo = 4;

 -- acrescentar atributo cidade varchar(30) na tabela
 alter table EXEMPLO add cidade varchar(30);
update EXEMPLO set cidade = 'São Paulo' where codigo in (1,2);
update EXEMPLO set cidade = 'Cotia' where codigo in (3,4);
update EXEMPLO set cidade = 'Santos' where codigo in (5,6);
 
 --excluir tabela e registro
 Drop table EXEMPLO;

 --excluir todos com idade = 47
 delete from EXEMPLO where idade = 47;



 
 





