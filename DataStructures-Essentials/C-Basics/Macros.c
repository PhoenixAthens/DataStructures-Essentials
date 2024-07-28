#include <stdio.h>
#define ABC 3
#define ADD(a,b) a+b
#define CODE \
printf("Hello!\n");

#define PRINT(a) printf("%d ",a)
#define LoopHeader(a,b,c) for(int v = a; v < b; v+=c){
#define LoopEnd }

int main(int argc, char** argv){
    int x = 2;
    int y = ABC;
    int z = ADD(x,y);
    printf("Z-> %d\n",z); //Z-> 5
    CODE;
    LoopHeader(0,10,2);
    PRINT(v); //0 2 4 6 8 
    LoopEnd;
    printf("\n");
    //printf("%d ",v);//Use of undeclared identifier 'v'
    return 0;
}
