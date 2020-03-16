#include <stdlib.h>
#include <stdio.h>
#include <Tchar.h>
#include <windows.h>

using namespace std;

class Console32{
     private:
        HANDLE whnd;
        HANDLE rhnd;
     
     public:
            void ConsoleConfig();     
};
