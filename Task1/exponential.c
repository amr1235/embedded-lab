#include <stdio.h>
int power(int number,int power) {
    unsigned short i;
    int res = 1;
    for (i = 0; i < power; i++)
    {
        res = res * number;
    }
    return res;
}
int factorial(int number) {
    //  !5 -> 5 * 4 * 3 * 2 * 1 
    unsigned short i ;
    int res = 1;
    int numberCopy = number;
    for (i = 0; i < number; i++)
    {
        res = res * numberCopy--;
    }
    return res;
}
int main(void)
{
    int expo , numberOfIterations ;
    unsigned short i ;
    double result = 0;
    printf("please enter the exponent : ");
    scanf("%d",&expo);
    printf("please enter the number of iterations : ");
    scanf("%d",&numberOfIterations);
    
    for (i = 0; i < numberOfIterations; i++)
    {
        int pow = power(expo,i);
        int fac = factorial(i);
        result += (double) pow/fac;
    }
    
    printf("%lf",result);
    return 0;
}
