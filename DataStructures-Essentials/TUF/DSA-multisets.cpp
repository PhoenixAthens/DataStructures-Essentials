#include <iostream>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <algorithm>
using std::cout;
using std::multiset;
using std::for_each;
using std::unordered_set;

void printer(const int& a){
    cout << a << " ";
}
auto addTwoNumbers(float, float)->float;

int main(int argc, char** argv){
    multiset<int> mlset;
    mlset.insert(1);
    mlset.insert(2);
    mlset.insert(2);
    mlset.insert(1);
    mlset.insert(1);
    mlset.insert(3);
    mlset.insert(4);
    mlset.insert(0);
    for_each(mlset.begin(),mlset.end(),printer);
    cout<<"\n";
    //0 1 1 1 2 2 3 4
    
    //using erase
    mlset.erase(1); //this will remove all occurences of 1
    for_each(mlset.begin(),mlset.end(),printer);
    //0 2 2 3 4
    cout<<"\n";
    
    int cnt = mlset.count(2);
    cout << "The number of occurences of 2: "<<cnt<<"\n";
    //The number of occurences of 2: 2
    
    //to use erase such that only a particular occurence of an element is remvoed, we can do the following:
    mlset.erase(mlset.find(2));
    for_each(mlset.begin(), mlset.end(), printer);
    //0 2 3 4
    
    cout << "\n";
    
    //unordered_set
    unordered_set<int> set_un;
    set_un.insert(1);
    set_un.insert(2);
    set_un.insert(2);
    set_un.insert(1);
    set_un.insert(1);
    set_un.insert(3);
    set_un.insert(4);
    set_un.insert(0);
    for_each(set_un.begin(),set_un.end(),printer); //0 4 3 2 1
    cout<<"\n";
    
    set_un.emplace(10);
    for_each(set_un.begin(),set_un.end(),printer); //10 0 4 3 2 1
    cout<<"\n";
    
    //Memory address of characters and functions
    char a = 'a';
    char b = 'b';
    char c = 'c';
    cout << "Address of a: " << &a << "\n"; //a
    cout << "Address of b: " << &b << "\n"; //ba
    cout << "Address of c: " << &c << "\n"; //cba
    cout << "Address of addTwoNumbers: " << &addTwoNumbers << "\n"; //1
    
    cout << "Address of a: " << (void *)&a << "\n"; //0x16fdfef5f
    cout << "Address of b: " << (void *)&b << "\n"; //0x16fdfef5e
    cout << "Address of c: " << (void *)&c << "\n"; //0x16fdfef5d
    cout << "Address of addTwoNumbers: " << (void *)&addTwoNumbers << "\n"; //0x100001308
     
    return 0;
}

auto addTwoNumbers(float a, float b)->float{
    return a+b;
}
