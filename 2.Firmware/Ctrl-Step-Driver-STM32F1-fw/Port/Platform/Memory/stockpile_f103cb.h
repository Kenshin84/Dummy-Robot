#ifndef STOCKPILE_F103CB_H
#define STOCKPILE_F103CB_H

#ifdef __cplusplus
extern "C" {
#endif

//Inclou les definicions de la plataforma
#include "main.h"
#include "gpio.h"
#include "spi.h"
#include "tim.h"
//Configuració de la memòria de l’aplicació
#include "stockpile_config.h"

/*************************************************************** FLASH_Start ***************************************************************/
/*************************************************************** FLASH_Start ***************************************************************/
/*************************************************************** FLASH_Start ***************************************************************/
/******************Configuració de pàgina (adapta-la si canvies el xip)***********************/
#define Stockpile_Page_Size		0x400U		//Mida del sector (1024 bytes per defecte)
#if (Stockpile_Page_Size != FLASH_PAGE_SIZE)	//Compara la mida de pàgina amb la de HAL per validar la configuració
	#error "Stockpile_Page_Size Error !!!"		
#endif

/**
* Estructura de la taula de particions de la flaix
**/
typedef struct{
	//Configuració
	uint32_t	begin_add;			//Adreça inicial
	uint32_t	area_size;			//Mida de la regió
	uint32_t	page_num;				//Nombre de pàgines físiques del xip
	//Variables de treball
	uint32_t	asce_write_add;	//Adreça d’escriptura
}Stockpile_FLASH_Typedef;

/********** Instància de la taula de particions de la flaix **********/
extern Stockpile_FLASH_Typedef stockpile_app_firmware;
extern Stockpile_FLASH_Typedef stockpile_quick_cali;
extern Stockpile_FLASH_Typedef stockpile_data;

void Stockpile_Flash_Data_Empty(Stockpile_FLASH_Typedef *stockpile);			//Esborra les dades de la flaix
void Stockpile_Flash_Data_Begin(Stockpile_FLASH_Typedef *stockpile);			//Inicia l’escriptura a la flaix
void Stockpile_Flash_Data_End(Stockpile_FLASH_Typedef *stockpile);				//Acaba l’escriptura a la flaix
void Stockpile_Flash_Data_Set_Write_Add(Stockpile_FLASH_Typedef *stockpile, uint32_t write_add);					//Configura l’adreça d’escriptura a la flaix
void Stockpile_Flash_Data_Write_Data16(Stockpile_FLASH_Typedef *stockpile, uint16_t *data, uint32_t num);	//Escriptura de dades de 16 bits a la flaix
void Stockpile_Flash_Data_Write_Data32(Stockpile_FLASH_Typedef *stockpile, uint32_t *data, uint32_t num);	//Escriptura de dades de 32 bits a la flaix
void Stockpile_Flash_Data_Write_Data64(Stockpile_FLASH_Typedef *stockpile, uint64_t *data, uint32_t num);	//Escriptura de dades de 64 bits a la flaix

/*************************************************************** FLASH_End ***************************************************************/
/*************************************************************** FLASH_End ***************************************************************/
/*************************************************************** FLASH_End ***************************************************************/

#ifdef __cplusplus
}
#endif

#endif
