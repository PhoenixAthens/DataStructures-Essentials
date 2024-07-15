#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
void printAllPrefix(char* str){
    for(int end=0;str[end]!='\0';end++){
        for(int start=0;start<=end;start++){
            cout<<*(str+start);
        }
        cout<<endl;
    }
}
void printAllSuffix(char* str){
    for(int end = strlen(str)-1;end>=0;end--){
        for(int i = strlen(str)-1; i >= end; i--){
            cout<<*(str+i);
        }
        cout<<endl;
    }
}
int main(int arg, char** argv){
    char str[100];
    cin.getline(str,10);
    printAllPrefix(str);
    printAllSuffix(str);
}
