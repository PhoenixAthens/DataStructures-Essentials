#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc, char** argv){
    enum Months { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY=10, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};
    enum Months var1 = JUNE;
    enum Months var2 = JULY;
    enum Months var3 = AUGUST;
    enum Months var4 = SEPTEMBER;
    enum Months var5 = OCTOBER;
    printf("var1: %x\nvar2: %x\nvar3: %x\nvar4: %i\nvar5: %i\n",var1,var2,var3,var4,var5);
    printf("Arg1: %4.2f, Arg2: %4.2f\n",atof(argv[1]),atof(argv[2]));
     
    _Bool h = true; //to use this, you need <stdbool.h>
    

    return 0;
}
