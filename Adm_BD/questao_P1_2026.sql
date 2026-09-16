/* Desenvolva uma stored procedure que receba como parâmetro o IDCliente, utilize controle de erros, controle de transação e cursor para calcular e atualizar o valor total dos pedidos do cliente informado. */

DELIMITER $$

CREATE PROCEDURE atualizarTotalPedido(IN p_idCliente INT)
BEGIN

    -- Variáveis
    DECLARE v_total DECIMAL(18,2) DEFAULT 0;
    DECLARE v_valor DECIMAL(18,2);
    DECLARE v_fim BOOLEAN DEFAULT FALSE;

    -- Cursor
    DECLARE cur_pedidos CURSOR FOR
        SELECT Valor
        FROM PedidoVenda
        WHERE idCliente = p_idCliente;

    -- Quando o cursor chegar ao fim
    DECLARE CONTINUE HANDLER FOR NOT FOUND
        SET v_fim = TRUE;

    -- Tratamento de erros
    DECLARE EXIT HANDLER FOR SQLEXCEPTION
    BEGIN
        ROLLBACK;
    END;

    -- Inicia a transação
    START TRANSACTION;

    -- Abre o cursor
    OPEN cur_pedidos;

    -- Percorre os pedidos
    loop_pedidos: LOOP

        FETCH cur_pedidos INTO v_valor;

        IF v_fim THEN
            LEAVE loop_pedidos;
        END IF;

        SET v_total = v_total + v_valor;

    END LOOP;

    -- Fecha o cursor
    CLOSE cur_pedidos;

    -- Atualiza o total do cliente
    UPDATE Cliente
    SET ValorTotalPedido = v_total
    WHERE idCliente = p_idCliente;

    -- Confirma a transação
    COMMIT;

END $$

DELIMITER ;

CALL atualizarTotalPedido(1);
