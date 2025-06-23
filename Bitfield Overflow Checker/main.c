#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "app.h"

int main() {
    srand(time(NULL));
    stData data;
    
     for(int i = 0; i < 5; i++) {
        int a = rand() % 64; // Generating Random Value of Max 6 bits to check overflow or fit
        int b = rand() % 512; // Generating Random Value of Max 9 bits to check overflow or fit
        int c = rand() % 16; // Generating Random Value of Max 4 bits to check overflow or fit  
        data.ivar1 = a;  
        data.ivar2 = b; 
        data.cvar = c;  

        printf("Iteration %d:\n", i + 1);

        if(data.ivar1 == a){
            printf("✔ ivar1 is within 5-bit range (0–31) --> Data Assigned: ");
            printf("ivar1: %d,\n", data.ivar1);
        } else {
            printf("✘ ivar1 overflowed the 5-bit limit --> ");
            printf("Assigned Data: %d | Data Stored: %d\n", a, data.ivar1);

        }

        if (data.ivar2 == b) {
            printf("✔ ivar2 is within 8-bit range (0–255) --> Data Assigned: ");
            printf("ivar2: %d,\n", data.ivar2);
        } else {
            printf("✘ ivar2 overflowed the 8-bit limit --> ");
            printf("Assigned Data: %d | Data Stored: %d\n", b, data.ivar2);

        }

        if (data.cvar == c) {
            printf("✔ cvar is within 3-bit range (0–7) --> Data Assigned: ");
            printf("cvar: %d\n", data.cvar);
        } else {
            printf("✘ cvar overflowed the 3-bit limit --> ");
            printf("Assigned Data: %d | Data Stored: %d\n", c, data.cvar);

        }
        printf("\n");
}   
    return 0;
}
