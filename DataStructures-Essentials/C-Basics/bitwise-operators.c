#include <stdio.h>
int main(int argc, char** argv){
    unsigned int a = 60;
    unsigned int b = 13;
    int result = 0;
    result = a & b;
    printf("the & of %u, and %u, gives %d\n",a,b,result);
    result = a | b;
    printf("the | of %u, and %u, gives %d\n",a,b,result);
    result = a ^ b;
    printf("the ^ of %u, and %u, gives %d\n",a,b,result);
    result = ~a;
    printf("the ~ of %u gives %d\n",a,result);
    result = ~b;
    printf("the ~ of %u gives %d\n",b,result);
    result = a << 2;
    printf("the << 2 of %u gives %d\n",a,result);
    result = b << 2;
    printf("the << 2 of %u gives %d\n",b,result);
//    
//    the & of 60, and 13, gives 12
//    the | of 60, and 13, gives 61
//    the ^ of 60, and 13, gives 49
//    the ~ of 60 gives -61
//    the ~ of 13 gives -14
//    the << 2 of 60 gives 240
//    the << 2 of 13 gives 52
    
    unsigned int re2 = ~a;
    printf("the ~ of %u gives %u\n",a,re2);
    re2 = ~b;
    printf("the ~ of %u gives %u\n",b,re2);
//    the ~ of 60 gives 4294967235
//    the ~ of 13 gives 4294967282
    
    //if we use %d instead of $u for re2
//    the ~ of 60 gives -61
//    the ~ of 13 gives -14
    
    int sumOf = (int)22.45 + (int)3.14;
    //the expression on RHS will be evaluated as "22 + 3" and then assigned to 'result'
    //this is because 'type-cast' operator has higher precedence than every other operator except unary plus and unary minus
    printf("result: %i\n",sumOf);
    //result: 25
    
    printf("size of sumOf is %i",sizeof(sumOf));
    //sizeof is an operator not a function
    //this means that it's evaluated at compile time not at runtime, unless a variable length array is used in its argument
    return 0;
}
