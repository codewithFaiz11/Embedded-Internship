#include <stdio.h>
#include <stdint.h>

int function(); //Call to function prototype
uint32_t nVar2;


int main()
{
    nVar2 = function(); // Call to function value to nVar2
    printf("nVar2 = %u\n", nVar2);
    return 0;
}

//So Basically I called the fuction and not the value to be assigned in it
//It will be useful ascessing static global variable in another file but this costs creating external function
//However, There are certain ways to do so without doing this, like using pointers as discussed in class.
