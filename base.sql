DROP DATABASE IF EXISTS juego;
CREATE DATABASE juego;
USE juego;

CREATE TABLE jugador(
nombre TEXT,
contraseña INTEGER
);
CREATE TABLE partida(
id TEXT,
fecha INTEGER,
hora INTEGER,
duracion INTEGER,
ganador TEXT
);

INSERT INTO jugador VALUES ('chris',1234);
INSERT INTO jugador VALUES ('pol',5678);
INSERT INTO jugador VALUES ('lluc',7890);

INSERT INTO partida VALUES ('Partida1',2021,15,40,'christian');
INSERT INTO partida VALUES ('Partida2',2020,20,30,'pol');
INSERT INTO partida VALUES ('Partida3',2019,10,20,'lluc');
