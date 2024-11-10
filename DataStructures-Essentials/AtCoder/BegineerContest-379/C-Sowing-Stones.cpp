//Wrong solution
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> indexes(m);
    vector<int> counter(n,0);
    int total{0};
    int i=0;
    while(i<m){
        cin >> indexes[i++];
    }
    i=0;
    while(i<m){
        int temp;
        cin >> temp;
        total+=temp;
        counter[indexes[i]-1]=temp;
        i++;
    }
    if(total>n || total<n){
        cout << -1 << "\n";
        return 0;
    }else{
        int steps{0};
        for(int i=0;i<n;i++){
            if(counter[i]==0){
                cout<<-1<<"\n";
                return 0;
            }else if(counter[i]>1){
                double extra = counter[i]-1;
                if((n-i-1)<extra){
                    cout<<-1<<"\n";
                    return 0;
                }else{
                    if(extra>1){
                        double tempSum = extra/2;
                        tempSum*=(2+extra-1);
                        steps+=tempSum;
                    }else{
                        steps+=extra;
                    }
                    for(int j=i+1;extra>0;j++){
                        counter[j]+=1;
                        extra--;
                    }
                }
            }
            
        }
        cout << steps << "\n";
    }
}
