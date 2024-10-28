#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    int start, end;
    while(t>0){
        cin >> start >> end;
        long sumOfSq {0};
        long sumSq{0};
        for(int i=start;i<=end;i++){
            sumOfSq += (i*i);
            sumSq+=i;
        }
        cout << sumSq << "\n";
        sumSq*=sumSq;
        cout << sumOfSq << " - " << sumSq << " = " << abs(sumOfSq-sumSq) << "\n";
        t--;
    }
    return 0;
}
