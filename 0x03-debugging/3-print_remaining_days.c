#include <stdio.h>

int main(){

    int start_Year, end_Year, i;   

    printf("Enter the starting year of the range: ");

    scanf("%d",&start_Year);   

    printf("Enter the last year of the range: ");

    scanf("%d",&end_Year);

    //the given range

    printf("Leap Years between %d and %d are: \n", start_Year, end_Year);

    for (i= start_Year; i<= end_Year; i++){

        if (((i % 4 == 0) && (i % 100!= 0)) || (i % 400 == 0)){

            printf("%d \n", i);

        }

    }    

    return 0;

}
