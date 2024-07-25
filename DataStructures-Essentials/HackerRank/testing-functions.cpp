#include <iostream>
#include <vector>
using std::cout;
using std::vector;
using std::min;
int getTotalX(vector<int> a, vector<int> b) {
    int minFromB=101;
    for(int& i: b){
        minFromB = min(minFromB,i);
    }
    int minFromA=101;
    for(int& i: a){
        minFromA= min(minFromA,i);
    }
    int count = 0;
    for(int i = minFromA;i <= minFromB; i+=minFromA){
        bool flag = true;
        for(int& fromA: a){
            if(i%fromA!=0){
                flag=false;
                break;
            }
        }
        if(flag){
            for(int& fromB: b){
                if(fromB%i!=0){
                    flag=false;
                    break;
                }
            }
        }
        if(flag)count++;
    }
    return count;
}
int main(int argc, char** argv){
    vector<int> a{2,4};
    vector<int> b{16,32,96};
    cout<<getTotalX(a,b)<<"\n";
}
