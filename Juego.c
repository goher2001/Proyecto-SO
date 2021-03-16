#include <mysql.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	MYSQL *conn;
	int err;
	MYSQL_RES *resultado;
	MYSQL_ROW row;
	conn = mysql_init(NULL);
	if (conn==NULL){
		printf("Error al crear la conexion: %u %s \n", mysql_errno(conn), mysql_error(conn));
		exit (1);
	}
	conn = mysql_real_connect (conn, "localhost", "root", "mysql","juego",0, NULL, 0);
	if (conn==NULL){
		printf ("Error al inicializar la conexion: %u %s \n", mysql_errno(conn), mysql_error(conn));
		exit(1);
	}
	char consulta [100];
	strcpy(consulta, "SELECT id,ganador  FROM partida;");
	mysql_query(conn, consulta);
	resultado = mysql_store_result(conn);
	row = mysql_fetch_row(resultado);
	if (row==NULL)
	{
		printf ("no se ha obtenido nada\n");
	}
	else
		{ while(row != NULL)
		{
	printf ("%s %s\n",row[0], row[1]);
	row = mysql_fetch_row(resultado);
		}
	}
	
	return 0;
}

