#include <stdio.h>
int main(int argc, char** argv){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%d\n",(n<=3)?n:2);
    }
    return 0;
}
