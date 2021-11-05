#include <stdio.h>
int main(void){
    // declare input variables 
    long timeInSeconds ;

    // get time
    printf("Enter total time elapsed : ");
    scanf("%ld",&timeInSeconds);
    
    // calcualte time in hours , minutes and seconds
    long hours = timeInSeconds / (60 * 60);
    long minutes =  (timeInSeconds / 60 ) - (60 * hours);
    long seconds = timeInSeconds % 60;

    printf("%d:%d:%d",hours,minutes,seconds);
    return 0;
}