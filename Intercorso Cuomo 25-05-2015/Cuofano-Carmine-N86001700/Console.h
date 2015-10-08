#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

#include <conio.h>


/*---------------------------------------------------------------------------------------
Definizione del Pulisci schermo per essere utilizzabile sia in win che in linux e Mac OS
Per usarlo:
  system(CLEAR);
========================================================================================*/
#ifdef _WIN32
    #define CLEAR "cls"
#else //In any other OS
    #define CLEAR "clear"
#endif
