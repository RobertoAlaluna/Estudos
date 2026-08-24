CREATE DATABASE IF NOT EXISTS meu_teste_db;
USE meu_teste_db;



CREATE TABLE produto (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    preco FLOAT NOT NULL
);



INSERT INTO produto (nome, preco) VALUES 
('Notebook Gamer', 4500.00),
('Mouse Sem Fio', 120.50),
('Teclado Mecânico', 350.00),
('Monitor 24 Polegadas', 899.90),
('Headset Bluetooth', 249.99);



DELIMITER $$
CREATE PROCEDURE spTeste() 
BEGIN 	
    DECLARE vProduto VARCHAR(255);     
    DECLARE vPreco FLOAT;     
    DECLARE fim BOOLEAN DEFAULT FALSE;
    
    -- 1. Definição do Cursor
    DECLARE c_produtos CURSOR FOR 		
        SELECT nome, preco FROM produto; 
        
    -- 2. Definição do manipulador de fim de cursor
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET fim = TRUE; 
    
    -- 3. Abre o cursor
    OPEN c_produtos; 
    
    -- 4. Rótulo do loop
    read_loop: LOOP 
        
        -- 5. Busca os dados
        FETCH c_produtos INTO vProduto, vPreco; 
        
        -- 6. Condição de parada
        IF fim THEN 					
            LEAVE read_loop; 
        END IF;                 
        
        -- 7. Apresenta na tela
        SELECT vProduto, vPreco; 
        
    END LOOP; 
    
    -- 8. Fecha o cursor (Adicionado ponto e vírgula)
    CLOSE c_produtos; 
    
END$$

DELIMITER ;

CALL spTeste();
