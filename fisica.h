/***************************************************************************//**
  @file     fisica.h
  @brief    Libreria para motor de fisica
 ******************************************************************************/
#ifndef TPFINAL_FISICA_H
#define TPFINAL_FISICA_H

/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/
#include "gamelogic.h"

/*******************************************************************************
 * CONSTANT AND MACRO DEFINITIONS USING #DEFINE
 ******************************************************************************/
#define VELOCIDADXMAX (0.3f)
#define VELOCIDADYMAX (0.6f)
#define GRAVEDAD 0.009f
#define INERCIA 0.975f


/*******************************************************************************
 * FUNCTION PROTOTYPES WITH GLOBAL SCOPE
 ******************************************************************************/

 /**
  * @brief Thread principal donde se maneja la fisica del videojuego
  * @param entrada puntero al estado del juego
 */
void* fisica(void* entrada);
/**
 * @brief Thread principal donde se maneja la logica del videojuego
 * @param direction Evento de tecla de direccion presionada. Ej. DOWNIZQUIERDA, DOWNDERECHA, etc
 * @param player puntero al jugador (jugador_t*)
*/
void movePlayer(int direction, void* player);

#endif //TPFINAL_FISICA_H
