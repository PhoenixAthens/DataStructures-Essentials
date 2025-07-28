#include <iostream>
using std::string;
using std::cout;
using std::cin;
int main(){
    string s1{"This is me testing find method"};
    
    //finding a substring in given string, if found, returns the position at which the sub-string begins
    cout << s1.find("This") <<"\n"; //0
    cout << s1.find("is")<<"\n";    //2
    
    cout << s1.find(" is ")<<"\n"; //4
    cout << s1.find("test")<<"\n"; //11
    
    cout << s1.find("e")<<"\n";    //9
    cout << s1.find('e')<<"\n";    //9
    
    // the second argument instructs from which index to start searching for the sub-string
    cout << s1.find("is",4)<<"\n"; //5
    
    cout << s1.find("XX")<<"\n"; //if the substring is not found, the compiler returns `string::npos` which can be used in conditionals
    //18446744073709551615
    
    cout << static_cast<bool>(s1.find("XX") == string::npos) << "\n"; //1
    
    string first = "first";
    string second = first;
    cout << std::boolalpha;
    first[0]='g';
    second[0]='g';
    cout << first << " | " << second << "\n"; //girst | girst
    cout << (*&first == *&second) << "\n"; //true
}
