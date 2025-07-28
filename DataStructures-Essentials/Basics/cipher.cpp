#include <iostream>
#include <cctype>
#include <string>
using std::string;
using std::cout;
using std::cin;
int main(){
    string key {"QWERTYUIOPLKJHGFDSAZXCVBNMqazwsxedcrfvtgbyhnujmkiolp"};
    string message;
    cout << "Enter your message: ";
    getline(cin,message);
    cout << "Encrypting...\n";
    for(char& c:message){
        if(isalpha(c)){
            if(isupper(c)){
                c = key[c-'A'];
            }else{
                c = key[26+(c-'a')];
            }
        }
    }
    cout << "Encrypted message: " << message << "\n";
    cout << "Decrypting...\n";
    for(char& c:message){
        if(isalpha(c)){
            if(isupper(c)){
                c = static_cast<char>('A'+key.find(c));
            }else{
                c = static_cast<char>('a'+(key.find(c)-26));
            }
        }
    }
    cout << "Decrypted message: " << message << "\n";
}
