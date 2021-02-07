/***************************************************************************//**
  @file     configuracion.h
  @brief    Archivo principal de configuracion del juego.
 ******************************************************************************/

#ifndef TPFINAL_CONFIGURACION_H
#define TPFINAL_CONFIGURACION_H

/*******************************************************************************
 * CONSTANT AND MACRO DEFINITIONS USING #DEFINE
 ******************************************************************************/

#define ALLEGRO 0
#define RASPI 1
// #define MODOJUEGO ALLEGRO     No hace falta porque usamos el bashfile

#define SCREENWIDHT 1280
#define SCREENHEIGHT 640
#define MAXMENUWORDSIZE 30
#define PIXELSPERUNIT (SCREENHEIGHT/16)
#define MAXPLAYERNAME 11
#define NULLENTITIE -1
#define MAXLEVELTIME 200
#define FPS 60
#define MAXLIVES 3
#define HURRYUPTIME 60

/*******************************************************************************
 ******************************************************************************/

#endif //TPFINAL_CONFIGURACION_H
