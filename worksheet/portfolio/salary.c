
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Daniel Heap
 * ID:201968718
 */

int main( void ) {

    // define and initialise variables for the problem data 
   int salary;
   int NI_rate;
   int Tax_rate;

   float NI;
   float Tax;
   float take_home;
   float taxable_salary;

   //input the values
   /*
   scanf("%d", &salary);
   scanf("%d", &NI_rate);
   scanf("%d", &Tax_rate);
   */

   //submit to gradescope
   salary = 36250;
   NI_rate = 8;
   Tax_rate = 15;

   //calculate NI amount
   NI = salary*(NI_rate / 100.0);

   //salary remaing after NI
   take_home = salary - NI;

   //calculate the tax
   if (take_home > 12500){
      taxable_salary = take_home-12500;
      Tax = taxable_salary * (Tax_rate/100.0);
   } else {
      Tax = 0;
   }


    // calculate the deductions and final take-home salary
   take_home = take_home - Tax;
    // Use only these print statement with appropriate formatting and variable names
   printf("Salary £%d\n", salary);
   printf("NI contribution £%.2f\n",NI);
   printf("Tax contribution £%.2f\n",Tax);
   printf("Take home salary £%.2f\n",take_home);

   return 0;
}