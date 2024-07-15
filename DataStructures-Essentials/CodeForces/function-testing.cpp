#include <iostream>
#include <string>
#include <regex>
#include <cmath>
using std::cout;
using std::ios_base;
using std::cin;
using std::string;
using std::regex;
using std::smatch;
using std::regex_search;
using std::endl;
int main(){
    string s;
    s = "Hello";
    cout<< s.substr(0,s.length()-1);
//    cin >>s;
//    char arr[] = {'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//    if(s[0] == 'R'){
//        int i = 0;
//        while(s[i]!='C')i++;
//        string part1 = s.substr(1,i-1);
//        string part2 = s.substr(i+1,s.length());
//        int columns = stoi(part2);
//        string inOtherNotation = "";
//        while(columns!=0){
//            inOtherNotation.insert(0,1,arr[columns%26]);
//            columns/=26;
//
//        }
//        cout<<inOtherNotation<<part1<<endl;
//    }else{
//        int i = 0;
//        while(s[i]>57)i++;
//        string part1 = s.substr(0,i);
//        string part2 = s.substr(i,s.length());
//        int cols = 0;
//        int base = 0;
//        for(int j=part1.length()-1;j>=0;j--){
//            cols+=(part1[j]-'A'+1)*pow(26,base++);
//        }
//        cout << "R"<<part2<<"C"<<cols<<endl;
//    }
//    return 0;
}
