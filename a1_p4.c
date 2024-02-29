/*
   CH-230-A
   a1_p4.c
   Anshu Kushwaha
   ankushwaha@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int x = 17, y = 4;
    int sum = x + y, product = x * y, diff = x - y;
    float div = (float)x / y;
    int r = x % y;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("sum=%d\n", sum);
    printf("product=%d\n", product);
    printf("difference=%d\n", diff);
    printf("division=%f\n", div);
    printf("remainder of division=%d\n", r);
return 0;    
}