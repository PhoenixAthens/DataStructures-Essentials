#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::string;
int main(int argc, char** argv){
    char str[80];
    strcpy(str,"Hello");
    strcat(str,"there");
    cout << strlen(str) <<"\n";
    cout << strcmp(str,"Another") << "\n";
    cout << strcmp(str,"Hellothere") << "\n";
    char fullname[100];
    cin.getline(fullname,100);
    cout << fullname << "\n";
    
    string sentence;
    sentence = static_cast<string>("Hello") + " World";
    cout << sentence;
}
