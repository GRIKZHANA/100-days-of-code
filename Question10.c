#include<stdio.h>
int main(){g
    int seconds,hours,minutes,secs;
    
        printf("Enter the input in seconds");
        scanf("%d", &seconds);

        hours= seconds / 3600;
        minutes= (seconds % 3600) / 60;
        secs=seconds % 60;

        printf("The time is %d hours %d minutes %d secs\n",hours,minutes,secs);
        return 0;
    }
    
