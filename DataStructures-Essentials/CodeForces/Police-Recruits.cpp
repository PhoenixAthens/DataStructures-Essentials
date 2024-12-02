#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    int availableOfficers{0};
    int crimesUnnotices{0};
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        if(temp==-1 && availableOfficers==0){
            crimesUnnotices++;
        }else{
            availableOfficers+=temp;
        }
    }
    cout << crimesUnnotices << "\n";
}
