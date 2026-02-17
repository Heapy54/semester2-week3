
/*
 *  All char variables are also integers
 *  Some integers are also characters
 */

#include <stdio.h>

int main( void ) {
    char c ;
    int k ;

    printf("Enter a charcter; ");
    scanf("%c",&c);

    printf("Enter a number between 0-127: ");
    scanf("%d",&k);

    printf("Display char as char: %c\n",c);
    printf("Display char as int: %d\n",c);
    printf("Display int as int: %d\n",k);
    printf("Display int as char: %c\n",k);

    return 0;
}
