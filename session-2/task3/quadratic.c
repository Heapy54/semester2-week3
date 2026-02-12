
/*
 * Compute the roots of quadratic equation.
 * We will assume that 2 real roots exist at this point.
 * The equation is specified with 3 real constants a,b,c
 *    a.x^2 + b.x + c = 0
 */

#include <stdio.h>
#include <math.h>

int main( void ) {

    float a;
    float b;
    float c;
    float root1, root2;

    /*
     * Implement the formula for the 2 roots of a quadratic.
     * You can define additional variable for intermediate results to make the code simpler.
     * Print out the final results for the 2 roots as float values.
     */

    printf("Enter the a value: ");
    scanf("%f",&a);

    printf("Enter the b value: ");
    scanf("%f",&b);

    printf("Enter the c value: ");
    scanf("%f",&c);

    float discriminant = sqrt((b*b)-(4*a*c));
    root1 = ((-b+discriminant)/(2*a));
    root2 = ((-b-discriminant)/(2*a));

    printf("The first root is: %f\n",root1);
    printf("The second root is: %f\n",root2);


    

    return 0;
}
