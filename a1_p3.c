/*
   CH-230-A
   a1_p3.c
   Anshu Kushwaha
   ankushwaha@jacobs-university.de
*/
/*
    The library was not defined properly. 
    The b variable containing floating value was defined by int datatype.
    And, int specifier was used to print float value.
*/    


#include <stdio.h> /*I added missing # to the library syntax.*/

int main() {
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5; /*I changed datatype for b variable.*/
    result = a / b;
    printf("The result is %f\n", result); /*replaced %d with %f*/
return 0;
}