#include "console32.h"

void Console32::ConsoleConfig(){

        whnd = GetStdHandle(STD_OUTPUT_HANDLE);
        rhnd = GetStdHandle(STD_INPUT_HANDLE);

        SMALL_RECT windowSize = {0, 0, 79, 49};
        SMALL_RECT writeArea = {0,0,79,49};
        CHAR_INFO consoleBuffer[80 * 50];
        COORD bufferSize = {80, 50}; 
        
        SetConsoleTitle(TEXT("T3RR0R"));
        SetConsoleWindowInfo(whnd, TRUE, &windowSize);
        SetConsoleScreenBufferSize(whnd, bufferSize);
//      consoleBuffer.Attributes = BACKGROUND_GREEN;         
}
