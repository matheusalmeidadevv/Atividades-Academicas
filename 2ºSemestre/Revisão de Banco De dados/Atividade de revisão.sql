DROP DATABASE IF EXISTS loja;
CREATE DATABASE loja;
USE loja;

SET SQL_SAFE_UPDATES = 0;

CREATE TABLE Produtos(
  id 	   INT PRIMARY KEY AUTO_INCREMENT,
  nome     VARCHAR(100) NOT NULL,
  preco    DECIMAL(10,2) NOT NULL,
  estoque  INT DEFAULT 0,
  categoria VARCHAR(50)
);

INSERT INTO Produtos (nome, preco, estoque, categoria) VALUES
  ('Notebook',         3500.00, 10, 'Eletronicos'),
  ('Mouse',              89.90, 50, 'Eletronicos'),
  ('Cadeira Gamer',    1200.00,  8, 'Moveis'),
  ('Teclado',           150.00, 30, 'Eletronicos'),
  ('Mesa',              800.00,  5, 'Moveis'),
  ('Headset',           250.00, 20, 'Eletronicos'),
  ('Webcam',            180.00, 15, 'Eletronicos'),
  ('Monitor',           600.00, 12, 'Eletronicos'),
  ('Sofa',             1800.00,  2, 'Moveis'),
  ('Impressora',        450.00,  7, 'Eletronicos');

/*
SELECT * FROM Produtos;

-- Atividade de revisão 1 - Uso do UPDATE e DELETE --

UPDATE Produtos
SET preco = 90.90
WHERE id = 1;

UPDATE Produtos
SET estoque = estoque + 5
WHERE categoria = "Eletronicos";

UPDATE Produtos
SET categoria = "Perifericos"
WHERE id = 3;

-- Usando DELETE 

DELETE FROM Produtos
WHERE estoque < 10 OR nome = "Sofa";

SELECT * FROM Produtos;

-- Atividade de revisão 2 - Uso do Where, Order by e LIMIT --

-- Usando WHERE 

INSERT INTO Produtos(nome, preco, estoque, categoria)
VALUES("TV", 3100, 100, "Moveis"), ("Geladeira", 2780, 30, "Moveis"), ("Teclado Mecanico", 250, 10, "Eletronicos");

SELECT * FROM Produtos WHERE preco > 150;

SELECT * FROM Produtos WHERE categoria != "Eletronicos";

SELECT * FROM Produtos WHERE preco > 100 and preco < 500;

-- Usando Order By

SELECT * FROM Produtos ORDER BY estoque DESC;

-- Usando Order By e LIMIT

SELECT * FROM Produtos ORDER BY preco ASC LIMIT 1;

-- Usando Where e Order By

SELECT * FROM Produtos WHERE categoria = "Eletronicos" AND estoque > 10 ORDER BY nome ASC;



-- =========================--

-- Atividade de revisão 2

-- Questão 1 Mostre todos os produtos da tabela.

SELECT * FROM Produtos;

-- Questão 2 Liste apenas o nome e o preço de todos os produtos.

SELECT nome, preco FROM Produtos;

-- Questão 3 Mostre todos os produtos com preço acima de R$ 500

SELECT * FROM Produtos WHERE preco > 500;

-- Questão 4 Liste todos os produtos que NÃO são da categoria Eletronicos

SELECT * FROM Produtos WHERE categoria != "Eletronicos";

-- Questão 5 Mostre os produtos com preço entre R$ 100 e R$ 600 - Por mais que eu tenha visto a estrutura de Between só uma vez eu sei fazer por conta de logica skskskskksk

SELECT * FROM Produtos WHERE preco between 100 AND 600;

-- Questão 6 Liste todos os produtos ordenados do mais barato para o mais caro

SELECT * FROM Produtos ORDER BY preco ASC;

-- Questão 7 Mostre os 3 produtos com maior estoque

SELECT * FROM Produtos ORDER BY estoque DESC LIMIT 3;

-- Questão 8 Liste os produtos da categoria Eletronicos com estoque maior que 10, ordenados pelo nome em ordem alfabética

SELECT * FROM Produtos WHERE categoria = "Eletronicos" AND estoque > 10 ORDER BY nome ASC;

-- Questão 9 Atualize o preço do Notebook para R$ 3.299,00

UPDATE Produtos SET preco = 3999 WHERE id = 1;

SELECT nome, preco FROM Produtos Where id = 1;

-- Questão 10 Delete todos os produtos com estoque menor ou igual a 5

DELETE FROM Produtos WHERE estoque <= 5;

SELECT nome, estoque FROM Produtos;

-- =========================--

*/

-- Constraints 

CREATE TABLE Clientes(
	id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE,
    cpf VARCHAR(20) NOT NULL UNIQUE,
    saldo DECIMAL(5,2) DEFAULT 0.00,
    ativo VARCHAR(3) DEFAULT "SIM"
    
);

INSERT INTO Clientes (nome, email, cpf) VALUES("Matheus", "Matheussagaz@gmail.com", "12345694"), ("Erick", "Erickizinho@gmail.com", "12345643");

-- 1 - Tente inserir um terceiro cliente com o mesmo email do primeiro e veja o erro

-- INSERT INTO Clientes (nome, email, cpf) VALUES("Jose", "Erickizinho@gmail.com", "12368332");

-- 2 - Tente inserir um quarto sem o CPF e veja o erro

-- INSERT INTO Clientes (nome, email, cpf) VALUES("Jose", "Josezinho@gmail.com", NULL);

-- =========================--

-- FOREIGN KEY - Criei uma tabela associativa pra não ter que corrigir o codigo inteiro praticando

CREATE TABLE Carrinho(
	carrinho_id INT PRIMARY KEY AUTO_INCREMENT,
    id_clientes INT,
    id_produtos INT,
    FOREIGN KEY (id_clientes) REFERENCES Clientes(id),
    FOREIGN KEY (id_produtos) REFERENCES Produtos(id)
);

SELECT * FROM Carrinho;

-- =========================--

-- JOIN

INSERT INTO Carrinho (id_clientes, id_produtos) VALUES(1, 1), (1, 4), (2, 2), (2, 6);

-- Sem o JOIN
SELECT * FROM Carrinho;

-- Com o JOIN

SELECT Clientes.nome, Produtos.nome FROM Carrinho INNER JOIN Clientes ON id_clientes = Clientes.id INNER JOIN Produtos ON id_produtos = Produtos.id;

-- Atividades de Fixação

INSERT INTO Clientes (nome, email, cpf) VALUES("Jose", "Josezinho@gmail.com", "21386434");

-- Questão 01 - Mostre o nome de todos os clientes e os produtos que eles têm no carrinho — só os que têm produto
SELECT Clientes.nome AS CLIENTES , Produtos.nome AS PRODUTOS FROM Carrinho INNER JOIN Clientes ON id_clientes = Clientes.id LEFT JOIN Produtos ON id_produtos = Produtos.id;

-- Questão 02 - Mostre todos os clientes, tendo produto no carrinho ou não
SELECT Clientes.nome AS CLIENTES, Produtos.nome AS PRODUTOS FROM Clientes LEFT JOIN Carrinho ON Clientes.id = id_clientes LEFT JOIN Produtos ON Produtos.id = id_produtos;

-- Questão 03 - Mostre o nome do cliente, o nome do produto e o preço, ordenado pelo preço do maior para o menor

SELECT Clientes.nome AS CLIENTE, Produtos.nome AS PRODUTOS, Produtos.preco FROM Carrinho INNER JOIN Clientes ON Clientes.id = id_clientes INNER JOIN Produtos ON Produtos.id = id_produtos ORDER BY preco DESC;

-- Questão 04 - Mostre todos os clientes e seus produtos, mas apenas os produtos com preço acima de 100. Clientes sem produto ainda devem aparecer

SELECT Clientes.nome AS clientes, Produtos.nome AS Produto, Produtos.preco FROM Clientes LEFT JOIN Carrinho ON Clientes.id = id_clientes LEFT JOIN Produtos ON Produtos.id = id_produtos WHERE preco > 100 OR preco IS NULL;

-- ===================== --

-- ALTER TABLE

-- Questão 1 - Adicione uma coluna peso do tipo DECIMAL(5,2) na tabela Produtos
ALTER TABLE Produtos ADD COLUMN peso DECIMAL(5,2);

SELECT * FROM Produtos;

-- Questão 2 -- Remova essa coluna logo depois[
ALTER TABLE Produtos DROP COLUMN peso;

SELECT * FROM Produtos;

SET SQL_SAFE_UPDATES = 1;