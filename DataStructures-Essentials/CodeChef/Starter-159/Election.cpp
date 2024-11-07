#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::vector;
using std::sort;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int N,X;
        cin >> N >> X;
        vector<int> A(N);
        vector<int> B(N);
        for(int i=0;i<N;i++){
            cin >> A[i];
        }
        for(int i=0;i<N;i++){
            cin >> B[i];
        }
        int A_victory=0;
        vector<int> reqVotes;
        for(int i=0;i<N;i++){
            if(A[i]>B[i])A_victory++;
            else{
                reqVotes.push_back(B[i]-A[i]+1);
            }
        }
        if(A_victory<=N/2){
            sort(reqVotes.begin(),reqVotes.end());
            for(int i=0;i<reqVotes.size()&&X>0;i++){
                if(reqVotes[i]<=X){
                    X-=reqVotes[i];
                    A_victory++;
                }
            }
            if(A_victory>N/2)cout<<"YES\n";
            else cout << "NO\n";
        }else{
            cout << "YES\n";
        }
        t--;
    }
}
