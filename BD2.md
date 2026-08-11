Anotações 10/08/2026

### Os 3 V's + 2 V's
  - **Volume:** A quantidade enorme de dados gerada a cada segundo, medida em terabytes, petabytes ou exabytes.
  - **Variedade:** Os diferentes tipos de dados reunidos, incluindo formatos estruturados (tabelas) e não estruturados (vídeos, áudios e textos).
  - **Veracidade:** O grau de confiabilidade, precisão e qualidade dos dados para evitar análises erradas geradas por informações falsas ou corrompidas.
  - **Velocidade**
  - **Valência**

### Processamento em Batch:
O processamento em batch coleta, armazena e processa os dados em grandes grupos (lotes) em momentos específicos do dia.

Dados gerados --> Armazenamento bruto --> Acúmulo por período --> Processamento do lote --> Relatório final gerado

### Processamento em tempo real:
O processamento em tempo real processa os dados continuamente à medida que eles entram no sistema.

Dados gerados --> Captura instantânea --> Processamento imediato --> Análise em milissegundos --> Ação/Alerta instantâneo

  - Velocidade
  - Veracidade

Velocidade == Rapidez
Veracidade == Qualidade

## Conceitos - SGBD's (sistemas gerenciadores de BD's)

- Garante segurança, consistencia e niveis de acesso;
- Oferece uma maneira sistemática de organizar e gerenciar seus próprios dados em um ou mais BD's;
- Um modelo estabelece como os dados serão organizados e relacionados.

### ACID
  - **Atomicidade:** Ou a operação acontece inteira, ou nada muda. Não existe "metade".
  - **Consistência:** O banco não aceita dados errados que quebrem as regras do sistema.
  - **Isolamento:** Uma transação não atrapalha a outra que está acontecendo ao mesmo tempo.
  - **Durabilidade:** Uma vez salvo, o dado não some mais, mesmo que falte energia.

### TUPLA
  - **Guarda dados juntos:** Une informações que fazem sentido ficarem unidas (ex: Latitude e Longitude).
  - **É imutável:** Depois que você cria, ninguém pode adicionar, remover ou alterar nenhum valor dentro dela.
  - **Garante segurança:** Por ser bloqueada, o sistema roda mais rápido e não corre o risco de apagar dados por erro.

#### Exemplo Prático
  - **Uma lista comum (Mutável):** Compras do mês (você põe e tira itens).
  - **Uma Tupla (Imutável):** Data de nascimento (15, "Janeiro", 1995). Ela nunca vai mudar.


  - Armazenamento em nuvem
  - Mapreduce

  - Dados estruturados e não estruturados
  - Dados semiestruturados
    - XML
    - JSON
   
  ### APACHE IMPALA E APACHE HIVE
  - Data Werehouse (modelo multidimensional)
    - Sistema de BIG DATA, grandes sistemas analíticos
    - Possuem dialetos de SQL próprio

  
- Fato (fenômeno)
- Dimensão (características)

### NO SQL
