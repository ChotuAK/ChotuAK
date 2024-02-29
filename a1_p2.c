/*
   CH-230-A
   a1_p2.c
   Anshu Kushwaha
   ankushwaha@jacobs-university.de
*/
/*
   In the printf function, the result variable is not specified so the program
   gives any random integer as an output everytime.
   Hence, to print the correct output, I just added the result variable
   in the printf function. 
*/

#include <stdio.h>
int main() {
    int result; /*The result of our calculation */
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n", result);
    return 0;
}