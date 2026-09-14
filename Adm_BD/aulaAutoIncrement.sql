drop TABLE if exists SupplierProducts;

CREATE TABLE SupplierProducts (
  id INT NOT NULL AUTO_INCREMENT,
  supplierId INT,
  productId INT,
  PRIMARY KEY (id)
);

INSERT INTO SupplierProducts(supplierId,productId) VALUES(1,1);
SELECT LAST_INSERT_ID();

INSERT INTO SupplierProducts(supplierId,productId) VALUES(1,2);
SELECT LAST_INSERT_ID();

INSERT INTO SupplierProducts(supplierId,productId) VALUES(1,3);
SELECT LAST_INSERT_ID();

/*
Retorno:
+------------------+
| LAST_INSERT_ID() |
+------------------+
|                1 |
+------------------+
+------------------+
| LAST_INSERT_ID() |
+------------------+
|                2 |
+------------------+
+------------------+
| LAST_INSERT_ID() |
+------------------+
|                3 |
+------------------+
*/
