#include <stdio.h>
int main(void){
    // declare input variables 
    int num1 , num2 , num3 ;

    // get three inputs 
    printf("Enter Three different integers : ");
    scanf("%d %d %d",&num1 , &num2 , &num3);
    
    // claculate sum 
    int sum = num1 + num2 + num3;
    printf("Sum is %d \n" , sum);
    
    // calculate Average 
    float avg = sum / 3;
    printf("Average is %d \n" , avg);

    // calculate product
    int product = num1 * num2 * num3;
    printf("Product is %d \n",product);
    // calculate smallest 
    int firstSmall = num1 < num2 ? num1 : num2;
    int smallest = firstSmall < num3 ? firstSmall : num3;
    printf("Smallest is %d \n" , smallest);

    // calculate Largest 
    int firstLarge = num1 > num2 ? num1 : num2;
    int largest = firstLarge > num3 ? firstLarge : num3;
    printf("Largest is %d \n" , largest);
    return 0;
}