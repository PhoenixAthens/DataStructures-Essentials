#include <iostream>
#include <unordered_set>
#include <string>
#include <utility>
using std::unordered_set;
using std::cout;
using std::string;
using std::pair;
int main(int argc, char** argv){
    
    
    pair<int,int> o {1,2};
    cout<<o.first << ", " << o.second; //1, 2
    cout<<"\n";
    
    pair<int,pair<int,int>> o2 {1,{2,3}};
    cout<<o2.first<<", {"<<o2.second.first<<", "<<o2.second.second<<"}"; //1, {2, 3}
    cout<<"\n";
    
    pair<int,int> arr_of_pairs[] = {{1,2},{2,3},{3,4},{4,5}};
    for(pair<int,int>& p: arr_of_pairs){
        cout<<"First: "<<p.first<<", Second: "<<p.second<<"\n";
    }
//    First: 1, Second: 2
//    First: 2, Second: 3
//    First: 3, Second: 4
//    First: 4, Second: 5
    
    unordered_set<int> set_o_ints;
    unordered_set<string> set_o_strings;
    set_o_ints.insert(23);
    set_o_ints.insert(100);
    
    set_o_strings.insert("judo");
    set_o_strings.insert("gino");
    
    cout<<set_o_ints.count(1)<<"\n"; //0
    cout<<set_o_ints.count(23)<<"\n"; //1
    
    cout<<"Size of string set(before): "<<set_o_strings.size()<<"\n"; //Size of string set(before): 2
    set_o_strings.clear();
    cout<<"Size of string set(after): "<<set_o_strings.size()<<"\n"; //Size of string set(after): 0
    
    if(set_o_ints.find(23)!=set_o_ints.end()){
        cout<<true<<"\n";
    }else{
        cout<<false<<"\n";
    }
    //1
    
    if(set_o_ints.find(2)!=set_o_ints.end()){
        cout<<true<<"\n";
    }else{
        cout<<false<<"\n";
    }
    //0
    
    unordered_set<int> s;
    for(int i=1;i<=10;i++){
        s.insert(i);
    }
    
    //looping over an unordered_set
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    //10 9 8 7 6 5 4 3 2 1
    
    s.erase(s.begin());
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    //9 8 7 6 5 4 3 2 1
    
    
    
}
