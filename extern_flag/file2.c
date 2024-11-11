#include <stdio.h>

extern int globalVar; 
extern void printGlobal(); 

int main() {
    printGlobal(); 
    globalVar = 100;

    
    printGlobal();
    return 0;
}
