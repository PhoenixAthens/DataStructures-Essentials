#include <set>
#include <iostream>

using std::cout;
using std::cin;
using std::set;

class Foo{
private:
    int x;
public:
    Foo(int a):x(a){}
    int get(){
        return x;
    }
    bool operator < (const Foo& rhs) const{
        return x < rhs.x;
    }
    bool operator == (const Foo& rhs) const{
        return x == rhs.x;
    }
};

int main(int argc, char** argv){
    set<int> set1{8,6,7,5,3,0,9};
    set<int> empty_set;
    set<int> set2{7, 9, 8, 3, 3, 5, 5};
    
    set<int> copy_of_set1(set1);
    
    set<int>::iterator findMe = set1.find(1);
    if(findMe!=set1.end()){
        cout << "1 was found!\n";
    }else{
        cout << "1 wasn't found!\n";
    }
    set<int>::iterator findMe_2 = set1.find(8);
    if(findMe_2!=set1.end()){
        cout << "8 was found!\n";
    }else{
        cout << "8 wasn't found!\n";
    }
    
    set1.insert(1);
    
    for(int i : set1){
        cout << i << " ";
    }
    cout <<"\n";
    //0 1 3 5 6 7 8 9
    
    //to clear a set
    set1.clear();
    cout << set1.size() << "\n";
    
    //erasing an element from set
    set2.erase(3);
    for(auto i: set2){
        cout << i << " ";
    }
    cout << "\n";
    
    //erase returns a 0 if element is not erased, 1 if it is!
    if(set2.erase(9)){
        cout << "9 was removed!\n";
    }else{
        cout << "9 was not found, thus not removed!\n";
    }
    
    set<Foo> set_of_Foo {Foo(4),Foo(1),Foo(0),Foo(9),Foo(8)};
    for(Foo x: set_of_Foo){
        cout <<x.get()<<" ";
    }
    cout <<"\n";
    //0 1 4 8 9
    
    set_of_Foo.insert(Foo(10));
    for(Foo x: set_of_Foo){
        cout <<x.get()<<" ";
    }
    cout <<"\n";
    //0 1 4 8 9 10
    
    set<Foo>::iterator find_from_foo = set_of_Foo.find(Foo(0));
    if(find_from_foo!=set_of_Foo.end()){
        cout << "0 exist!\n";
    }else{
        cout << "0 doesn't exist!\n";
    }
    //0 exist!
    
}
