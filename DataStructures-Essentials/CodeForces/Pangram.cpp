#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int n;
    cin >> n;
    if(n<26)cout<<"NO\n";
    else{
        string s;
        cin >> s;
        int arr[26]{0};
        for(int i=0;i<n;i++){
            arr[tolower(s[i])-'a']=1;
        }
        bool flag=true;
        for(int i:arr)if(i==0){
            flag=false;
            break;
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
