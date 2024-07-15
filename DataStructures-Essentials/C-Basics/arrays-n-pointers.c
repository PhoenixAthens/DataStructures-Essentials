#include <stdio.h>
int main(int argc, char** argv){
    int v[5] = {1,2,3,4,5};
    int* p = v;
    
    printf("v[0]: %i\n",v[0]);
    printf("v[1]: %i\n",v[1]);
    printf("v[2]: %i\n",v[2]);
    printf("v[3]: %i\n",v[3]);
    printf("v[4]: %i\n",v[4]);
//    v[0]: 1
//    v[1]: 2
//    v[2]: 3
//    v[3]: 4
//    v[4]: 5
    
    p[0] = 23;
    p[4] = 999;
    
    printf("v[0]: %i\n",v[0]);
    printf("v[1]: %i\n",v[1]);
    printf("v[2]: %i\n",v[2]);
    printf("v[3]: %i\n",v[3]);
    printf("v[4]: %i\n",v[4]);
//    v[0]: 23
//    v[1]: 2
//    v[2]: 3
//    v[3]: 4
//    v[4]: 999
    
    //accessing the elements of array using pointer arithmetic
    printf("v[0]: %i\n",*(v));
    printf("v[1]: %i\n",*(v+1));
    printf("v[2]: %i\n",*(v+2));
    printf("v[3]: %i\n",*(v+3));
    printf("v[4]: %i\n",*(v+4));
    
    //segfault using array
    printf("v[6]: %i\n",v[6]); //atleast you get a warning
    
    //segfault using array
    printf("p[6]: %i\n",p[6]); //no warnings given!
    
//    v[6]: 974979214
//    p[6]: 974979214
    
    //segfault using array
    //printf("v[6]: %i\n",v[1000]); //segfault
    
    //segfault using array
    printf("p[6]: %i\n",p[1000]); //segfault
    
    
    
    return 0;
}
