//#include <util/Startup.h>

class Init {
      
      private:
              
              //se estiver definido o sitema windows
              //ele se definir� para pegar os registros    
              #ifdef OS_WINDOWS
              #include <windows.h>
              #include <winreg.h>
              #endif

            
      public:
             void Win();     
};
