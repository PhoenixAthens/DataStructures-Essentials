#include <cmath>

int sumOfAllDivisors(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        int div_sum = i;
        for(int j=1;j<=i/2;j++){
            if(i%j==0)div_sum+=j;
        }
        sum+=div_sum;
    }
    return sum;
}
int sumOfAllDivisors_2(int n){
    int sum = 0;
    for(int d=1;d<n;d++){
        sum+=d*(n/d);
    }
    return sum;
    
}
