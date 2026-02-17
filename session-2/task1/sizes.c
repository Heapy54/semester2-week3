
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    float testFloat;
    short shortint;
    long longint;
    double doubletest;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    //added variable types
    printf("Short int size is %ld bytes\n",sizeof(shortint));
    printf("Long int size is %ld bytes\n",sizeof(longint));
    printf("Double size is %ld bytes\n",sizeof(doubletest));

    return 0;
}
