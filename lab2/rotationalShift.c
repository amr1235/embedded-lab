#include <stdio.h>
int main(void)
{
    unsigned char number;
    int numberOfRotaions;
    int direction;
    int iterator;
    unsigned char newNumber;
    
    printf("enter the number :");
    scanf("%u" , &number);
    printf("enter number of rotaions :");
    scanf("%d" ,&numberOfRotaions);
    printf("enter the  direction of rotation ( 1 for right and -1 for left) :");
    scanf("%d",&direction);
    
    for (iterator = 0; iterator < numberOfRotaions; iterator++)
    {
        if (direction == 1)
        {
            // if number % 2 != 0 so it has one at first bit 
            newNumber = number >> 1;
            if (number%2 != 0)
            {   // bit removed is 1
                newNumber += 128;
            }
        }
        else
        {
            // if we rotate left and number / 128 >= 1 so it was 1 other wise it is 0
            newNumber = number << 1;
            if (number / 128 >= 1)
            { // bit removed is 1
                newNumber += 1;
            }
        }
        number = newNumber;
    }

    printf("new number : %u",newNumber);
    return 0;
}