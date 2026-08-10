# Stored Procedure

**10/08/2026**

## O que é?

Uma **Stored Procedure** é um conjunto de comandos SQL armazenados diretamente no banco de dados.

* Encapsula tarefas repetitivas ou complexas.
* Aceita parâmetros de entrada e saída.
* É executada quando chamada pela aplicação ou usuário.

## Para que serve?

* Executar tarefas diretamente no **SGBD (Sistema de Gerenciamento de BD)**.
* Agrupar vários comandos SQL.
* Reutilizar operações em diferentes aplicações.
* Centralizar regras e operações do banco.

## Benefícios

* Reduz o tráfego entre aplicação e banco.
* Permite reutilizar o mesmo código em diferentes aplicações.
* Pode aumentar a segurança através do encapsulamento dos dados.

## Sintaxe

```sql
DELIMITER $$

CREATE PROCEDURE NomeDaProcedure(IN Parametro INT)
BEGIN
    SELECT *
    FROM Tabela
    WHERE Id = Parametro;
END $$

DELIMITER ;
```

## Parâmetros

* `IN` → entrada
* `OUT` → saída
* `INOUT` → entrada e saída

## Exemplo 1

```sql
USE bdadmin;

DROP PROCEDURE IF EXISTS spCliente;

DELIMITER $$

CREATE PROCEDURE spCliente()
BEGIN
    SELECT *
    FROM cliente;
END $$

DELIMITER ;
```

### Executando

```sql
CALL spCliente();
```
