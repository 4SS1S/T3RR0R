#include "devices.h"

void Mouse::moveMouse(){
                
    SwapMouseButton(true);
     
    for(;;){
             
        mx = rand() %1024;
        my = rand() %1624;
          
        SetCursorPos(mx, my);   
     } 
}   
