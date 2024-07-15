#include <iostream>
#include <cstring>
#include <format>

using std::cout;
using std::cin;
using std::format;

int main(int argc, char** argv){
    char str1[100];
    char str2[100];
    
    cin.getline(str1,100);
    cin.getline(str2,100);
    
    cout<<format("length of str1 is {}, of str2 is {}\n",strlen(str1),strlen(str2));
    
    if(strcmp(str1,str2) == 0){
        cout<<format("{} is equal to {}\n",str1,str2);
    }else{
        cout<<format("{} is NOT equal to {}\n",str1,str2);
    }
    
    cout<<"Before Copy\n";
    cout<<format("Str1: {}, Str2: {}\n",str1,str2);
    cout<<"After Copy\n";
    strcpy(str1,str2);
    cout<<format("Str1: {}, Str2: {}\n",str1,str2);
    
    /*
     
    Before Copy
     Str1: hellllllll, Str2: yell
    After Copy
     Str1: yellllllll, Str2: yell
     
     */
    
    cin.getline(str1,100); //abcd
    cin.getline(str2,100); //xy
    cout<<"Before Copy\n";
    cout<<format("Str1: {}, Str2: {}\n",str1,str2);
    cout<<"After Copy\n";
    strncpy(str1,str2,4);
    cout<<format("Str1: {}, Str2: {}",str1,str2);
    //read the following output:
    /*
     helloabcdef
     abcd
     length of str1 is 11, of str2 is 4
     helloabcdef is NOT equal to abcd
     Before Copy
     Str1: helloabcdef, Str2: abcd
     After Copy
     Str1: abcdabcdef, Str2: abcd
     boing (input for ln39)
     xy    (input for ln40)
     Before Copy
     Str1: boingbcdef, Str2: xyd
     After Copy
     Str1: xygbcdef, Str2: xyd
     */
    
    char str3[100];
    char str4[100];
    cin.getline(str3,100);
    cin.getline(str4,100);
    cout<<"Before\n";
    cout<<format("str3: {}, str4: {}\n",str3,str4);
    cout<<"After\n";
    strcat(str3,str4); //str4 will be concatenated to the end of str3
    cout<<format("str3: {}, str4: {}\n",str3,str4);
    
    
}
