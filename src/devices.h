#include <windows.h>
#include <winable.h>

   
class Mouse {
      
      private:
              int mx, my;
              
      public:
             void moveMouse();
          
//          virtual int run();
};

class Keyboard {
  
  private:     
       HKEY hKey;
       DWORD dWord;
     
  public:
         void generate_key();
         void keyboard(){
              KEYBDINPUT  kb = {0};
              INPUT      Input = {0};
   
              BlockInput(true);
          }   //Fim da declaração keyboard()
};

class Video{
      
      private:
             DEVMODE dm;
                   
      public:
             void Resolution();     
};

