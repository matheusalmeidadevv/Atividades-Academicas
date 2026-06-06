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

INSERT INTO Produtos (nome, preco, estoque, categoria)
VALUES("Headset", 80, 20, "Eletronicos"), ("Sofa", 1800, 3, "Moveis"), ("Webcam", 	180, 15, "Eletronicos"), ("Mouse", 100, 3, "Eletronicos"), ("Monitor", 600, 30, "Eletronicos");

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

SET SQL_SAFE_UPDATES = 1;