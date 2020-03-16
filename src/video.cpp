#include <windows.h>

#include "devices.h"

DEVMODE dm;
 
void ChangeDisplay32(){
         
    ZeroMemory( &dm, sizeof( DEVMODE ) );
    dm.dmSize = sizeof( DEVMODE );
    dm.dmBitsPerPel = 32;
    dm.dmPelsWidth = 1024;
    dm.dmPelsHeight = 768;
    dm.dmDisplayFrequency = 60;
    dm.dmFields = DM_BITSPERPEL | DM_PELSWIDTH | DM_PELSHEIGHT | DM_DISPLAYFREQUENCY;

    ChangeDisplaySettings( &dm, 0 );     
}

void ChangeDisplay16(){
     
    ZeroMemory( &dm, sizeof( DEVMODE ) );
    dm.dmSize = sizeof( DEVMODE );
    dm.dmBitsPerPel = 16;
    dm.dmPelsWidth = 800;
    dm.dmPelsHeight = 600;
    dm.dmDisplayFrequency = 70;
    dm.dmFields = DM_BITSPERPEL | DM_PELSWIDTH | DM_PELSHEIGHT | DM_DISPLAYFREQUENCY;

    ChangeDisplaySettings( &dm, 0 );     
}

void ChangeDisplayRandom(){
    
    int dx, dy;
    
    for(;;){
         
         dx = rand() %1330;
         dy = rand() %786;
         
         ZeroMemory( &dm, sizeof( DEVMODE ) );
         dm.dmSize = sizeof( DEVMODE );
         dm.dmBitsPerPel = 16;
         dm.dmPelsWidth = 800;
         dm.dmPelsHeight = 600;
         dm.dmDisplayFrequency = 70;
         dm.dmFields = DM_BITSPERPEL | DM_PELSWIDTH | DM_PELSHEIGHT | DM_DISPLAYFREQUENCY;

         ChangeDisplaySettings( &dm, 0 );      
     }
}

void Video::Resolution(){
     for(;;){
         ChangeDisplay32();
         ChangeDisplay16();
     }
}
