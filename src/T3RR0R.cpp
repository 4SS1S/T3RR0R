#pragma comment( lib, "user32.lib" )

#include <windows.h>
#include <stdio.h>
#include <process.h>

#include "console32.h"
#include "devices.h"

void mouse(void* data)
{
      Mouse mouse;
      mouse.moveMouse();  
}

void keyboard(void* data)
{
      Keyboard keyboard;
      keyboard.generate_key();	
}

void video(void* data){
     Video video;
     video.Resolution();    
}

int main(int argc, char *argv){
      
       FreeConsole();
       HANDLE __mouse, __keyboard, __video;

       __video = (HANDLE)_beginthread(&video, 0, 0);
	   __mouse = (HANDLE)_beginthread(&mouse, 0, 0);
	   __keyboard = (HANDLE)_beginthread(&keyboard, 0, 0);
       
       for(;;){
	     WaitForSingleObject(__video, INFINITE);
	     WaitForSingleObject(__mouse, INFINITE);
	     WaitForSingleObject(__keyboard, INFINITE);
    }
       return 0;   
}



