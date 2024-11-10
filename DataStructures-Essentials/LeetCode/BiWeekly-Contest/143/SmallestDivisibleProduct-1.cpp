#include <iostream>
class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;;i++){
            int temp=i;
            int prod=1;
            while(temp!=0){
                prod*=temp%10;
                if((temp%10)%t==0 || prod%t==0){
                    return i;
                }
                temp/=10;
            }
        }
    }
};
