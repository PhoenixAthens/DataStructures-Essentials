#include <iostream>
#include <unordered_set>
#include <string>
#include <utility>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
using std::vector;
using std::unordered_set;
using std::cout;
using std::string;
using std::pair;
using std::list;
using std::stack;
using std::queue;
using std::priority_queue;
using std::greater;
using std::set;
using std::binary_search;
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
    
    vector<int> vec;
    vec.push_back(23);
    vec.push_back(100);
    
    vec.emplace_back(2);
    vec.emplace_back(2);
    
    for(int& a: vec){
        cout<<a<<" ";
    } //23 100 2 2
    cout<<"\n";
    
    vector<pair<int,int>> vec_of_pairs;
    vec_of_pairs.push_back({2,4});
    vec_of_pairs.push_back({9,11});
    vec_of_pairs.emplace_back(5,7);
    vec_of_pairs.emplace_back(101,102);
    for(pair<int, int>& p: vec_of_pairs){
        cout<<p.first<<" "<<p.second<<"\n";
    }
//    2 4
//    9 11
//    5 7
//    101 102
    
    vector<int> pre_filled_vec(5,100);
    for(int& a: pre_filled_vec){
        cout<<a<<" ";
    }
    cout<<"\n";
    //100 100 100 100 100 
    
    vector<int> empty_vec(5);
    for(int& a: empty_vec){
        cout<<a<<" ";
    }
    cout<<"\n";
    //0 0 0 0 0
    
    vector<int> main_vec(5,-1);
    for(int& a: main_vec){
        cout<<a<<" ";
    }
    cout<<"\n";
    //-1 -1 -1 -1 -1
    
    vector<int> copy_vec(main_vec);
    for(int& b: copy_vec){
        cout<<b<<" ";
    }
    cout<<"\n";
    //-1 -1 -1 -1 -1
    for(int i=0;i<10;i++){
        copy_vec.push_back(i*2+3);
    }
    for(int& i: copy_vec){
        cout<<i<<" ";
    }
    cout<<"\n";
    //-1 -1 -1 -1 -1 3 5 7 9 11 13 15 17 19 21
    cout<<*(copy_vec.begin()+4)<<"\n"; //-1
    cout<<*(copy_vec.begin()+5)<<"\n"; //3
    
    copy_vec.erase(copy_vec.begin(),copy_vec.begin()+5); //end exclusive
    for(int& i: copy_vec){
        cout<<i<<" ";
    }
    cout<<"\n";
    //3 5 7 9 11 13 15 17 19 21
    
    //Trying out iterators
    vector<int>::iterator it = copy_vec.begin();
    it++;
    cout<<*(it)<<"\n"; //5
    cout<<*(it+2)<<"\n"; //9
    
    vector<int>::iterator it_start = copy_vec.begin();
    cout<<*(it_start)<<"\n"; //3
    
    //copy_vec = 3 5 7 9 11 13 15 17 19 21
    vector<int>::iterator it_end = copy_vec.end();
    cout<<*(it_end-1)<<"\n"; //21,
    //however, if we change it to
    //cout<<*(it_end-1)<<"\n"; //it outputs 13, probably some garbage value
    cout<<*(it_end)<<"\n";   //13
    cout<<*(it_end+1)<<"\n"; //15
    cout<<*(it_end+2)<<"\n"; //17
    cout<<*(it_end+3)<<"\n"; //19
    cout<<*(it_end+4)<<"\n"; //21
    
    vector<int> daemon(5);
//    for(int i=1;i<20;i++){
//        daemon[i]=i; //can't use the [] way of accessing the elements when the vector has been declared like on ln161
//    }
    
    for(int i=0;i<20;i++){
        if(i<5)daemon[i]=i;
        else daemon.push_back(i);
    }
    for(int i=0;i<20;i++){
        cout<<daemon[i]<<" ";
    }
    cout<<"\n";
    //0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
    
    
    
    cout<<*(daemon.begin())<<"\n"; //0
    cout<<*(daemon.end())<<"\n"; //0
    cout<<*(daemon.end()-1)<<"\n"; //19
    cout<<*(daemon.rbegin())<<"\n"; //19
    
    
    //using the reverse iterator
    for(vector<int>::reverse_iterator rev_iter = daemon.rbegin(); rev_iter!=daemon.rend();rev_iter++){
        cout<<*(rev_iter)<<" ";
    }
    cout<<"\n";
    //19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
    
    //using erase on vector
    
    //erasing element at particular address
    daemon.erase(daemon.begin()+2);
    for(vector<int>::iterator iter = daemon.begin();iter!=daemon.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<"\n";
    //0 1 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
    
    //erasing elements within a particular range of addresses
    daemon.erase(daemon.begin()+1,daemon.begin()+5); //end-exclusive!!
    for(vector<int>::iterator iter = daemon.begin();iter!=daemon.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<"\n";
    //0 6 7 8 9 10 11 12 13 14 15 16 17 18 19
    
    //inserting element at a particular address
    vector<int> for_insert(2,23);
    for_insert.insert(for_insert.begin()+2,46); //inserting at index 2 is fine beacuse that marks the end of the vector!
    for(vector<int>::iterator iter = for_insert.begin(); iter!=for_insert.end(); iter++){
        cout<<*(iter)<<" ";
    }
    cout<<"\n";
    //23 23 46
    
    //inserting a bunch of elements at certain index
    for_insert.insert(for_insert.begin(),4,11);
    for(vector<int>::iterator iter = for_insert.begin(); iter!=for_insert.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<"\n";
    //11 11 11 11 23 23 46
    
    //insert one vector into anoter
    vector<int> trash_vec(3,21);
    for_insert.insert(for_insert.begin()+2,trash_vec.begin(),trash_vec.end());
    for(vector<int>::iterator iter = for_insert.begin(); iter!=for_insert.end(); iter++){
        cout<<*(iter)<<" ";
    }
    cout<<"\n";
    //11 11 21 21 21 11 11 23 23 46
    
    cout<<"Size of for_insert: "<<for_insert.size()<<"\n"; //Size of for_insert: 10
    cout<<"Max Size of for_insert: "<<for_insert.max_size()<<"\n"; //Max Size of for_insert: 4,611,686,018,427,387,903
    cout<<"Capacity of for_insert: "<<for_insert.capacity()<<"\n"; //Capacity of for_insert: 16
    for_insert.pop_back(); //this removes 46, but the method returns void
    for(vector<int>::iterator iter = for_insert.begin(); iter!=for_insert.end(); iter++){
        cout<<*iter<<" ";
    }
    cout<<"\n";
    //11 11 21 21 21 11 11 23 23
    
    for_insert.swap(trash_vec);
    cout<<"printing 'for_insert': ";
    for(vector<int>::iterator it = for_insert.begin();it!=for_insert.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    //printing 'for_insert': 21 21 21
    cout<<"printing 'trash_vec': ";
    for(vector<int>::iterator it = trash_vec.begin();it!=trash_vec.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    //printing 'trash_vec': 11 11 21 21 21 11 11 23 23
    
    for_insert.clear();
    cout<<"printing 'for_insert': ";
    for(vector<int>::iterator it = for_insert.begin();it!=for_insert.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    //printing 'for_insert':
    
    cout<<for_insert.empty()<<"\n"; //1
    cout<<"Size of for_insert: "<<for_insert.size()<<"\n"; //Size of for_insert: 0
    cout<<"Max Size of for_insert: "<<for_insert.max_size()<<"\n"; //Max Size of for_insert: 4,611,686,018,427,387,903
    cout<<"Capacity of for_insert: "<<for_insert.capacity()<<"\n"; //Capacity of for_insert: 3
    
    //let's try out lists
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(1);
    ls.emplace_front(0);
    for(list<int>::iterator it = ls.begin(); it!=ls.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<"\n";
    //0 1 2 4
    
    //let's try out stacks
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    
    cout << st.top() <<"\n"; //5
    st.pop();
    
    cout << st.top() << "\n"; //4
    cout << st.size() << "\n"; //4
    cout << st.empty() << "\n"; //0 (false)
    
    stack<int>st2;
    st.swap(st2);
    
    cout<<"Printing elements of st: "<<"\n";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"\n";
    //Printing elements of st:
    //
    
    cout<<"Printing elements of st2: "<<"\n";
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }
    cout<<"\n";
    //Printing elements of st2:
    //4 3 2 1
    
    //let's try out queues
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(5);
    
    cout<<q.back()<<"\n"; //5
    cout<<q.front()<<"\n"; //1
    
    q.back()+=5;
    
    cout<<q.back()<<"\n"; //10
    
    q.pop();
    cout<<q.front() <<"\n"; //2
    
    //priority queue
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    pq.emplace(1);
    
    priority_queue<int> pq_2(pq);
    while(!pq_2.empty()){
        cout<<pq_2.top()<<" ";
        pq_2.pop();
    }
    cout<<"\n";
    //10 8 5 2 1
    
    //min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> min_queue;
    min_queue.push(10);
    min_queue.push(100);
    min_queue.push(2);
    min_queue.push(5);
    min_queue.push(0);
    min_queue.push(-1);
    min_queue.push(6);
    min_queue.push(50);
    
    //creating a copy of min_queue
    priority_queue<int,vector<int>,greater<int>> min_queue_copy(min_queue);
    
    //printing the element of min_queue_copy
    while(!min_queue_copy.empty()){
        cout << min_queue_copy.top() << " ";
        min_queue_copy.pop();
    }
    cout<<"\n";
    //-1 0 2 5 6 10 50 100
    
    set<int> setty;
    setty.emplace(2);
    setty.emplace(1);
    setty.emplace(10);
    setty.emplace(5);
    setty.emplace(3);
    setty.insert(6);
    setty.insert(4);
    setty.insert(0);
    setty.insert(4);
    for(set<int>::iterator iterator_of_set = setty.begin(); iterator_of_set!=setty.end(); iterator_of_set++){
        cout<<*(iterator_of_set)<<" ";
    }
    cout<<"\n";
    //0 1 2 3 4 5 6 10
    
    set<int> set_copy(setty);
    
    ::set<int>::iterator iterator_of_sets_find = setty.find(5);
    cout<<*iterator_of_sets_find; //5
    cout<<"\n";
    
    iterator_of_sets_find = setty.find(15);
    cout<<*iterator_of_sets_find; //24576
    cout<<"\n";
    
    iterator_of_sets_find = setty.find(10);
    cout<<*iterator_of_sets_find; //10
    cout<<"\n";
    
    setty.erase(4);
    for(::set<int>::iterator iterator_of_set = setty.begin(); iterator_of_set!=setty.end(); iterator_of_set++){
        cout<<*(iterator_of_set)<<" ";
    }
    cout<<"\n";
    //0 1 2 3 5 6 10
    
    int countOF = setty.count(5);
    cout<<countOF<<"\n"; //1
    countOF = setty.count(15);
    cout<<countOF<<"\n"; //0

    iterator_of_sets_find = setty.find(100);
    if(*(setty.end()) == *(iterator_of_sets_find)){
        cout<<"Element doesn't exist!!\n";
    }else{
        setty.erase(iterator_of_sets_find);
    }
    //Element doesn't exist!!
    
    for(::set<int>::iterator iter = setty.begin(); iter!=setty.end(); iter++){
        cout<<*(iter)<<" ";
    }
    cout<<"\n";
    //0 1 2 3 5 6 10
    
    iterator_of_sets_find = setty.find(6);
    if(*(setty.end()) == *(iterator_of_sets_find)){
        cout<<"Element doesn't exist!!\n";
    }else{
        setty.erase(iterator_of_sets_find);
    }
    
    for(::set<int>::iterator iter = setty.begin(); iter!=setty.end(); iter++){
        cout<<*(iter)<<" ";
    }
    cout<<"\n";
    //0 1 2 3 5 10
    
    bool res = binary_search(set_copy.begin(),set_copy.end(),2);
    
    
    
    return 0;
}
