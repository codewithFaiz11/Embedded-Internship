#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "app.h"

int main() {
    srand(time(NULL));
    stData data;
    
    printf("1. Storing Negative Number\n");
    data.svar = (rand() % 256) - 256;
    data.uvar = (rand() % 256) - 256;
    printf("svar stores the number %d whereas uvar can't, it overflows & stores %d\n\n", data.svar, data.uvar); 
    
    printf("2. Storing Number Greater Than 255\n");
    data.svar = (rand() % 257) + 255;
    data.uvar = (rand() % 257) + 255;
    printf("uvar stores the number %d whereas svar can't, it overflows & stores %d\n\n", data.uvar, data.svar);  

    printf("3. Storing Number in range 0 - 255\n");
    data.svar = rand() % 256;
    data.uvar = rand() % 256;
    printf("Both svar and uvar can store the value %d", data.uvar); 

    // CONCLUSION:
    // 1. Signed variables (svar) can store negative numbers correctly but overflow when >255
    // 2. Unsigned variables (uvar) can store large numbers (up to 511) but misinterpret negatives
    // 3. Both work perfectly for 0-255 range

    
    return 0;
}
