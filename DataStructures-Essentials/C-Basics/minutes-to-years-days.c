#include <stdio.h>
int main(int argc, char** argv){
    int minutes;
    printf("Enter the number of minutes: ");
    scanf("%d",&minutes);
    
    double days = ((float)minutes / 60)/24;
    double years = (((float)minutes / 60)/24)/365;
    printf("Converting %d to %f days, and %f years!\n",minutes,days,years);
    return 0;
    
}
