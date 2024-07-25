#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s;
    cin >> s;
    long len = s.size();
    long maxRep = 1;
    long tempRep = 1;
    for(long i=1;i<len;i++){
        if(s[i]==s[i-1]){
            tempRep++;
        }else{
            maxRep=tempRep>maxRep?tempRep:maxRep;
            tempRep=1;
        }
    }
    maxRep=tempRep>maxRep?tempRep:maxRep;
    cout<<maxRep<<"\n";
}
