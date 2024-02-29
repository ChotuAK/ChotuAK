/*
   CH-230-A
   a1_p1.c
   Anshu Kushwaha
   ankushwaha@jacobs-university.de
*/
/******************************************************************************
   Since the required output should be in float. So, I added .0 to make the
   result change from integer to float.
*******************************************************************************/

#include <stdio.h>

int main() {
    double result; /* The result of our calculation */
    result = (3 + 1) / 5.0;
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}