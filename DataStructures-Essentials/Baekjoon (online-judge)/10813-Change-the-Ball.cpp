#include <iostream>
using std::cout;
using std::cin;
using std::swap;
int main(){
    int baskets,q;
    cin >> baskets >> q;
    int ballIndex[baskets];
    for(int i=1;i<=baskets;i++)ballIndex[i-1]=i;
    int i1,i2;
    while(q--){
        cin >> i1 >> i2;
        swap(ballIndex[i1-1],ballIndex[i2-1]);
    }
    for(int i: ballIndex)cout<<i<<" ";
    cout<<"\n";
}
