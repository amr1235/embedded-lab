#include <stdio.h>
int main(void){
    // declare input variables 
    float initialV , a , time ;

    // get initial velocity 
    printf(" please enter the initial velocity \n");
    scanf("%f",&initialV);
    // get acceleration 
    printf(" please enter the acceleration \n");
    scanf("%f",&a);
    // get time 
    printf(" please enter the time \n");
    scanf("%f",&time);

    // calculate the final velocity 
    float finalValocity = initialV + (a * time);
    printf("final velocity : %f \n",finalValocity);

    // calculate the distance 
    float distance = (initialV * time) + (0.5 * a * (time * time) );
    printf("distance : %f \n", distance);
    
    return 0;
}