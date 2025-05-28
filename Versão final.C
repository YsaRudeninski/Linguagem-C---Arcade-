-- Tabelas base (sem dependências)
CREATE TABLE PLATAFORMA (
    ID_PLATAFO INT PRIMARY KEY,
    nome VARCHAR(255) NOT NULL
);

CREATE TABLE GAME (
    ID_GAME INT PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    preco DECIMAL(10,2) NOT NULL,
    descricao VARCHAR(255),
    ano_lancamento INT
);

CREATE TABLE CATEGORIA (
    ID_CATEGORIA INT PRIMARY KEY,
    descricao VARCHAR(255) NOT NULL
);

CREATE TABLE DESENVOLVEDOR (
    iddese INT PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    pais VARCHAR(255),
    site VARCHAR(255)
);

CREATE TABLE CONTA (
    ID_CONTA INT PRIMARY KEY,
    endereco VARCHAR(255),
    CPF VARCHAR(14) UNIQUE,
    nome VARCHAR(255) NOT NULL,
    telefone VARCHAR(20),
    rua VARCHAR(255),
    numero INT,
    cidade VARCHAR(255),
    estado VARCHAR(255),
    CEP VARCHAR(10)
);

CREATE TABLE USUARIO (
    id_usu INT PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    email VARCHAR(255) UNIQUE NOT NULL,
    senha VARCHAR(255) NOT NULL,
    data_cadastro DATE
);

CREATE TABLE PEDIDOS (
    id INT PRIMARY KEY,
    COD_PEDIDOS VARCHAR(255),
    COD_DO_CLIENTE VARCHAR(255),
    DATA_DA_COMPRA DATE
);

CREATE TABLE VENDAS (
    ID_VENDA INT PRIMARY KEY,
    valor DECIMAL(10,2) NOT NULL
);

-- Tabelas relacionais (dependem de outras já criadas)

CREATE TABLE POSSUI (
    PLATAFORMA_id INT NOT NULL,
    GAME_id INT NOT NULL,
    FOREIGN KEY (PLATAFORMA_id) REFERENCES PLATAFORMA(ID_PLATAFO),
    FOREIGN KEY (GAME_id) REFERENCES GAME(ID_GAME)
);

CREATE TABLE TEM_CATEGORIA (
    GAME_id INT NOT NULL,
    CATEGORIA_id INT NOT NULL,
    FOREIGN KEY (GAME_id) REFERENCES GAME(ID_GAME),
    FOREIGN KEY (CATEGORIA_id) REFERENCES CATEGORIA(ID_CATEGORIA)
);

CREATE TABLE TEM_DESENV (
    GAME_id INT NOT NULL,
    iddese INT NOT NULL,
    FOREIGN KEY (GAME_id) REFERENCES GAME(ID_GAME),
    FOREIGN KEY (iddese) REFERENCES DESENVOLVEDOR(iddese)
);

CREATE TABLE COMPRAS (
    PEDIDOS_id INT NOT NULL,
    GAME_id INT NOT NULL,
    valor_pago DECIMAL(10,2),
    FOREIGN KEY (PEDIDOS_id) REFERENCES PEDIDOS(id),
    FOREIGN KEY (GAME_id) REFERENCES GAME(ID_GAME)
);

CREATE TABLE VENDA_PEDIDO (
    VENDAS_id INT NOT NULL,
    PEDIDOS_id INT NOT NULL,
    FOREIGN KEY (VENDAS_id) REFERENCES VENDAS(ID_VENDA),
    FOREIGN KEY (PEDIDOS_id) REFERENCES PEDIDOS(id)
);

CREATE TABLE TEM_JOGO (
    CONTA_id INT NOT NULL,
    GAME_id INT NOT NULL,
    progresso INT,
    status VARCHAR(255),
    data_aquisicao DATE,
    FOREIGN KEY (CONTA_id) REFERENCES CONTA(ID_CONTA),
    FOREIGN KEY (GAME_id) REFERENCES GAME(ID_GAME)
);

CREATE TABLE RELACAO_USUARIO (
    USUARIO_id INT NOT NULL,
    CONTA_id INT NOT NULL,
    FOREIGN KEY (USUARIO_id) REFERENCES USUARIO(id_usu),
    FOREIGN KEY (CONTA_id) REFERENCES CONTA(ID_CONTA)
);

CREATE TABLE REALIZA (
    CONTA_id INT NOT NULL,
    PEDIDOS_id INT NOT NULL,
    FOREIGN KEY (CONTA_id) REFERENCES CONTA(ID_CONTA),
    FOREIGN KEY (PEDIDOS_id) REFERENCES PEDIDOS(id)
);

-- PLATAFORMA
INSERT INTO PLATAFORMA (ID_PLATAFO, nome) VALUES (1, 'PlayStation 5');
INSERT INTO PLATAFORMA (ID_PLATAFO, nome) VALUES (2, 'Xbox Series X');
INSERT INTO PLATAFORMA (ID_PLATAFO, nome) VALUES (3, 'PC');

-- CATEGORIA
INSERT INTO CATEGORIA (ID_CATEGORIA, descricao) VALUES (1, 'Ação');
INSERT INTO CATEGORIA (ID_CATEGORIA, descricao) VALUES (2, 'RPG');
INSERT INTO CATEGORIA (ID_CATEGORIA, descricao) VALUES (3, 'Esporte');

-- DESENVOLVEDOR
INSERT INTO DESENVOLVEDOR (iddese, nome, pais, site) VALUES (1, 'Santa Monica Studio', 'Estados Unidos', 'https://sms.playstation.com');
INSERT INTO DESENVOLVEDOR (iddese, nome, pais, site) VALUES (2, 'CD Projekt Red', 'Polônia', 'https://www.cdprojekt.com');
INSERT INTO DESENVOLVEDOR (iddese, nome, pais, site) VALUES (3, 'Rockstar Games', 'Estados Unidos', 'https://www.rockstargames.com');

-- CONTA
INSERT INTO CONTA (ID_CONTA, endereco, CPF, nome, telefone, rua, numero, cidade, estado, CEP) VALUES 
(1, 'Av. Brasil, 100', '111.111.111-11', 'João da Silva', '(11)99999-9999', 'Av. Brasil', 100, 'São Paulo', 'SP', '01000-000');

INSERT INTO CONTA (ID_CONTA, endereco, CPF, nome, telefone, rua, numero, cidade, estado, CEP) VALUES 
(2, 'Rua das Flores, 45', '222.222.222-22', 'Maria Oliveira', '(21)98888-8888', 'Rua das Flores', 45, 'Rio de Janeiro', 'RJ', '20000-000');

INSERT INTO CONTA (ID_CONTA, endereco, CPF, nome, telefone, rua, numero, cidade, estado, CEP) VALUES 
(3, 'Praça Central, 12', '333.333.333-33', 'Carlos Souza', '(31)97777-7777', 'Praça Central', 12, 'Belo Horizonte', 'MG', '30000-000');

-- USUARIO
INSERT INTO USUARIO (id_usu, nome, email, senha, data_cadastro) VALUES (1, 'João da Silva', 'joao@email.com', 'senha123', TO_DATE('2024-01-10','YYYY-MM-DD'));
INSERT INTO USUARIO (id_usu, nome, email, senha, data_cadastro) VALUES (2, 'Maria Oliveira', 'maria@email.com', 'senha456', TO_DATE('2024-02-20','YYYY-MM-DD'));
INSERT INTO USUARIO (id_usu, nome, email, senha, data_cadastro) VALUES (3, 'Carlos Souza', 'carlos@email.com', 'senha789', TO_DATE('2024-03-15','YYYY-MM-DD'));

-- GAME
INSERT INTO GAME (ID_GAME, nome, preco, descricao, ano_lancamento) VALUES (4, 'The Last of Us Part II', 249.90, 'Drama e sobrevivência em mundo pós-apocalíptico.', 2020);
INSERT INTO GAME (ID_GAME, nome, preco, descricao, ano_lancamento) VALUES (5, 'Elden Ring', 279.99, 'RPG de mundo aberto com fantasia sombria.', 2022);
INSERT INTO GAME (ID_GAME, nome, preco, descricao, ano_lancamento) VALUES (6, 'Red Dead Redemption 2', 199.90, 'Faroeste com narrativa profunda.', 2018);
INSERT INTO GAME (ID_GAME, nome, preco, descricao, ano_lancamento) VALUES (7, 'Cyberpunk 2077', 149.90, 'RPG futurista em Night City.', 2020);
INSERT INTO GAME (ID_GAME, nome, preco, descricao, ano_lancamento) VALUES (8, 'Hogwarts Legacy', 299.90, 'Aventura no mundo mágico de Harry Potter.', 2023);
INSERT INTO GAME (ID_GAME, nome, preco, descricao, ano_lancamento) VALUES (9, 'Dandara', 39.90, 'Jogo brasileiro com plataforma e ação.', 2018);
INSERT INTO GAME (ID_GAME, nome, preco, descricao, ano_lancamento) VALUES (10, 'FIFA 25', 349.90, 'Jogo de futebol realista.', 2024);
INSERT INTO GAME (ID_GAME, nome, preco, descricao, ano_lancamento) VALUES (11, 'Dodgeball Academia', 69.99, 'RPG esportivo brasileiro com queimada.', 2021);
INSERT INTO GAME (ID_GAME, nome, preco, descricao, ano_lancamento) VALUES (12, 'Assassin''s Creed Mirage', 229.90, 'Ação e furtividade no mundo árabe.', 2023);
INSERT INTO GAME (ID_GAME, nome, preco, descricao, ano_lancamento) VALUES (13, 'A lenda do cabeça de Cuia', 13.79, 'Aventura baseada em lenda folclórica brasileira.', 2024);
-- PEDIDOS (certifique-se que os clientes "CLI001" etc. existam ou remova esses campos se não forem necessários)
-- Vamos alterar para IDs reais de CONTA/USUARIO
INSERT INTO PEDIDOS (id, COD_PEDIDOS, COD_DO_CLIENTE, DATA_DA_COMPRA) VALUES (1, 'PED123', 'CLI001', TO_DATE('2025-01-05','YYYY-MM-DD'));
INSERT INTO PEDIDOS (id, COD_PEDIDOS, COD_DO_CLIENTE, DATA_DA_COMPRA) VALUES (2, 'PED124', 'CLI002', TO_DATE('2025-02-10','YYYY-MM-DD'));
INSERT INTO PEDIDOS (id, COD_PEDIDOS, COD_DO_CLIENTE, DATA_DA_COMPRA) VALUES (3, 'PED125', 'CLI003', TO_DATE('2025-03-15','YYYY-MM-DD'));

-- VENDAS
INSERT INTO VENDAS (ID_VENDA, valor) VALUES (1, 299.90);
INSERT INTO VENDAS (ID_VENDA, valor) VALUES (2, 249.90);
INSERT INTO VENDAS (ID_VENDA, valor) VALUES (3, 199.90);

-- RELACIONAMENTOS

INSERT INTO POSSUI (PLATAFORMA_id, GAME_id) VALUES (1, 1);
INSERT INTO POSSUI (PLATAFORMA_id, GAME_id) VALUES (2, 2);
INSERT INTO POSSUI (PLATAFORMA_id, GAME_id) VALUES (3, 3);

INSERT INTO TEM_CATEGORIA (GAME_id, CATEGORIA_id) VALUES (1, 1);
INSERT INTO TEM_CATEGORIA (GAME_id, CATEGORIA_id) VALUES (2, 2);
INSERT INTO TEM_CATEGORIA (GAME_id, CATEGORIA_id) VALUES (3, 3);

INSERT INTO TEM_DESENV (GAME_id, iddese) VALUES (1, 1);
INSERT INTO TEM_DESENV (GAME_id, iddese) VALUES (2, 2);
INSERT INTO TEM_DESENV (GAME_id, iddese) VALUES (3, 3);

INSERT INTO COMPRAS (PEDIDOS_id, GAME_id, valor_pago) VALUES (1, 1, 299.90);
INSERT INTO COMPRAS (PEDIDOS_id, GAME_id, valor_pago) VALUES (2, 2, 249.90);
INSERT INTO COMPRAS (PEDIDOS_id, GAME_id, valor_pago) VALUES (3, 3, 199.90);

INSERT INTO VENDA_PEDIDO (VENDAS_id, PEDIDOS_id) VALUES (1, 1);
INSERT INTO VENDA_PEDIDO (VENDAS_id, PEDIDOS_id) VALUES (2, 2);
INSERT INTO VENDA_PEDIDO (VENDAS_id, PEDIDOS_id) VALUES (3, 3);

INSERT INTO TEM_JOGO (CONTA_id, GAME_id, progresso, status, data_aquisicao) VALUES (1, 1, 50, 'Jogando', TO_DATE('2025-01-06','YYYY-MM-DD'));
INSERT INTO TEM_JOGO (CONTA_id, GAME_id, progresso, status, data_aquisicao) VALUES (2, 2, 100, 'Concluído', TO_DATE('2025-02-11','YYYY-MM-DD'));
INSERT INTO TEM_JOGO (CONTA_id, GAME_id, progresso, status, data_aquisicao) VALUES (3, 3, 20, 'Iniciado', TO_DATE('2025-03-16','YYYY-MM-DD'));

INSERT INTO RELACAO_USUARIO (USUARIO_id, CONTA_id) VALUES (1, 1);
INSERT INTO RELACAO_USUARIO (USUARIO_id, CONTA_id) VALUES (2, 2);
INSERT INTO RELACAO_USUARIO (USUARIO_id, CONTA_id) VALUES (3, 3);

INSERT INTO REALIZA (CONTA_id, PEDIDOS_id) VALUES (1, 1);
INSERT INTO REALIZA (CONTA_id, PEDIDOS_id) VALUES (2, 2);
INSERT INTO REALIZA (CONTA_id, PEDIDOS_id) VALUES (3, 3);
