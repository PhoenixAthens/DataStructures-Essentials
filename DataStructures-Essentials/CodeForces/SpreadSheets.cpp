#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
using std::cout;
using std::cin;
using std::string;
using std::endl;
int main(int argc, char** argv){
    int n;
    cin >> n;
    for(int j=0;j<n;j++){
        string s;
        cin >> s;
        int i = 1;
        int len = s.length();
        while(i < len && s[i]<=57 )i++;
        if(i < len && i > 1){
            int cols(0);
            i+=1;
            int power = 26;
            int j=i;
            while(j<len){
                cols = cols * 10 + s[j] - '0';
                j++;
            }
            while(cols>power){
                power*=26;
                cols-=26;
            }
            cols-=1;
            while(power!=1){
                power/=26;
                printf("%c",cols/power+'A');
                cols%=power;
            }
            
            cout<<s.substr(1,i-2)<<endl;
        }else{
            i = 0;
            while(s[i]>57)i++;
            string part1 = s.substr(0,i);
            long cols = 0;
            int base = 0;
            for(int j=part1.length()-1;j>=0;j--){
                cols+=(part1[j]-'A'+1)*pow(26,base++);
            }
            cout << "R"<<s.substr(i,s.length())<<"C"<<cols<<endl;
            
        }
        
    }
}
