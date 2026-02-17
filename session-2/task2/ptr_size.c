
/*
 * Use the sizeof() operator to examine memory use 
 * of the pointer type
 */

#include <stdio.h>

int main( void ) {

    int *testIntPtr;
    int **testpointer2 = &testIntPtr;

    printf("Int pointer size is %ld bytes\n",sizeof(testpointer2));

    return 0;
}
