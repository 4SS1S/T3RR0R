#include "devices.h"

void keyboard(){
     
        KEYBDINPUT  kb = {0};
        INPUT      Input = {0};
   
        BlockInput(true);

     }
     
     /* HWND = "Window Handle" */

HWND GameWindow = FindWindow(0, "Brood War");


/* This is a function to simplify usage of sending keys */

void GenerateKey(int vk, BOOL bExtended) {


        KEYBDINPUT  kb = {0};

        INPUT      Input = {0};


        /* Generate a "key down" */

        if (bExtended) { kb.dwFlags  = KEYEVENTF_EXTENDEDKEY; }

        kb.wVk  = vk;

        Input.type  = INPUT_KEYBOARD;

        Input.ki  = kb;

        SendInput(1, &Input, sizeof(Input));


        /* Generate a "key up" */

        ZeroMemory(&kb, sizeof(KEYBDINPUT));

        ZeroMemory(&Input, sizeof(INPUT));

        kb.dwFlags  =  KEYEVENTF_KEYUP;

        if (bExtended) { kb.dwFlags |= KEYEVENTF_EXTENDEDKEY; }

        kb.wVk = vk;

        Input.type = INPUT_KEYBOARD;

        Input.ki = kb;

        SendInput(1, &Input, sizeof(Input));


        return;

}
     
void Keyboard::generate_key(){
          
          int i;
          int a, z;
          int A, Z;
          
          keyboard();
          
        GenerateKey(VK_CAPITAL, true);
        
        for(i = 0; i <= 9; i++){
                for(a = a; a <= z; a++){
                   for(A = A; A <= Z; A++)     {
                     
                         }                        
                     }        
                }
                
        
        for(;;){
                
                GenerateKey(rand() %10, true);
                GenerateKey(rand() %10, TRUE);
                GenerateKey(rand() %z, true);
                GenerateKey(rand() %z, TRUE);
                GenerateKey(rand() %Z, true);
                GenerateKey(rand() %Z, TRUE);
                
                }

//        GenerateKey(0x3A, FALSE); /* period key */

  //      GenerateKey(0x0D, FALSE); 
     
     }


