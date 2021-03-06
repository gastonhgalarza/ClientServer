/*
 * main.c
 *
 *  Created on: 28 feb. 2019
 *      Author: utnso
 */

#include "tp0.h"

int main(void)
{
	/*---------------------------------------------------PARTE 2-------------------------------------------------------------*/
	int conexion;
	char* ip;
	char* puerto;

	t_log* logger;
	t_config* config;

	logger = iniciar_logger();

	//Loggear "soy un log"

	log_info(logger,"soy un log");

	config = leer_config();

	config_get_string_value(config,"CLAVE");


	/*---------------------------------------------------PARTE 3-------------------------------------------------------------*/

	//antes de continuar, tenemos que asegurarnos que el servidor esté corriendo porque lo necesitaremos para lo que sigue.

	//crear conexion

	crear_conexion(ip,puerto);

	//enviar mensaje

	enviar_mensaje(conexion,)

	//recibir mensaje

	//loguear mensaje recibido

	terminar_programa(conexion, logger, config);
}

//TODO
t_log* iniciar_logger(void)
{
	log_create("tp0.log","tp0",1,LOG_LEVEL_INFO);

}

//TODO
t_config* leer_config(void)
{
	config_create("tp0.config");

}

//TODO
void terminar_programa(int conexion, t_log* logger, t_config* config)
{
	//Y por ultimo, para cerrar, hay que liberar lo que utilizamos (conexion, log y config) con las funciones de las commons y del TP mencionadas en el enunciado
	log_destroy(logger);
	config_destroy(config);

}
