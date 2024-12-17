#include <iostream>
using std::cout;
using std::cin;
using std::max;
using std::min;
int gcd(int a, int b){
    if(b==0)return a;
    else{
        int maxVal = max(a,b);
        int minVal = min(a,b);
        return gcd(minVal,maxVal%minVal);
    }
}
int main(){
    int x,y;
    cin >> x >> y;
    int lev;
    if(x>y){
        lev = 6-x+1;
    }else{
        lev = 6-y+1;
    }
    int gcdVal = gcd(lev,6);
    cout << lev/gcdVal << "/" << 6/gcdVal << "\n";
    
}
