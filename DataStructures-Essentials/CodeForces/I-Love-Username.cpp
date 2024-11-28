#include <iostream>
#include <climits>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    int index{0};
    int maxScore{INT_MIN};
    int minScore{INT_MAX};
    int temp;
    int as{0};
    while(t--){
        cin >> temp;
        if(index>0){
            if(temp<minScore){
                as++;
                minScore=temp;
            }
            else if(temp>maxScore){
                as++;
                maxScore=temp;
            }
        }else{
            maxScore=temp;
            minScore=temp;
        }
        index++;
    }
    cout << as << "\n";
}
