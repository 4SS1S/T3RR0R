#include <windows.h>
#include <winable.h>

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

     }
};
