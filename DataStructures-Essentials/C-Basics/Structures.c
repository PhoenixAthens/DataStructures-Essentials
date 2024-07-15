#include <stdio.h>
struct Rectangle{
    int length;
    int breadth;
    char category;
};
int main(int argc, char** argv){
    struct Rectangle r1={23,45,'A'};
    printf("Length: %i\n",r1.length); //Length: 23
    printf("Breadth: %i\n",r1.breadth); //Breadth: 45
    printf("Category: %i\n",r1.category); //Category: 65
    printf("Size of Struct: %lu\n",sizeof(r1)); //Size of Struct: 12
    int i = 0;
    int j = i++ + i;
    printf("%d\n",j);
    return 0;
}
