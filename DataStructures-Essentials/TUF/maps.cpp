#include <iostream>
#include <map>
#include <utility>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <array>

using std::map;
using std::cout;
using std::string;
using std::pair;
using std::make_pair;
using std::for_each;
using std::iota;
using std::begin;
using std::end;
using std::array;
using std::binary_search;
using std::lower_bound;
using std::upper_bound;
using std::multiset;

class Contact{
private:
    string name, phone;
public :
    Contact(string name, string ph): name(name), phone(ph){}
    string getName() const {
        return name;
    }
    string getPhone() const {
        return phone;
    }
    bool operator < (const Contact& con) const{
        return phone < con.phone;
    }
};

//the parameter to method below has to be 'const', otherwise the function wouldn't work!!
void printer(const pair<string, string>& p){
    cout << p.first << " : " << p.second << "\n";
}
void printer_2(const int& a){
    cout << a << " ";
}

int findOccurence(array<int,9>& arr, int elem){
    int* pointsAt = lower_bound(begin(arr),end(arr),elem);
    int ret = pointsAt!=end(arr)? std::distance(begin(arr),pointsAt): -1;
    return ret;
}

int findLastOccurence(array<int, 9>& arr, int elem){
    int* pointAt = upper_bound(begin(arr), end(arr), elem);
    int dist = std::distance(begin(arr),pointAt)-1;
    if(dist>=0 && arr.at(dist)==elem)return dist;
    else return -1;
}

int findLargestNumberSmallerThan(array<int,9>& arr, int elem){
    int index = std::distance(begin(arr),lower_bound(begin(arr), end(arr), elem))-1;
    if(index>=0)return arr.at(index);
    else return -1;
    //say we have an array {1,4,4,4,4,9,9,10,11}
    //if we search for 2, the result would be index=0, and our logic would reutrn 1
    //had our array been {1,2,4,4,4,4,9,9,10,11}
    //and our search value had been again 2, the result would be index=0, and our logic would still reutrn 1
}

int findSmallestNumberGreaterThan(array<int,9>& arr, int elem){
    int* index = upper_bound(begin(arr),end(arr),elem);
    if(index != end(arr)) return *index;
    else return -1;
}
int main(int argc, char** argv){
    map<string, string> name_ph {{"AB","9891-09001"}, {"BC", "1122-12345"}, {"CD", "8989-10234"}};
    
    //printing the size of the map
    cout << "Size of map: "<< name_ph.size() << "\n";
    //Size of map: 3
    
    //retrieve the value associated with certain key
    cout << "Value associated with 'BC': " << name_ph.at("BC") << "\n";
    //Value associated with 'BC': 1122-12345
    
    //using empty to see if the map is empty
    cout << "Is the map empty: " << (name_ph.empty()?"y":"n") << "\n";
    //Is the map empty: n
    
    //using range based for-loop to iterate over the map
    for(pair<string,string> elem: name_ph){
        cout << "KEY: " << elem.first << ", VALUE: " << elem.second << "\n";
    }
    /*
     KEY: AB, VALUE: 9891-09001
     KEY: BC, VALUE: 1122-12345
     KEY: CD, VALUE: 8989-10234
     */
    
    name_ph["DE"] = "9009-32234";
    for(pair<string,string> elem: name_ph){
        cout << "KEY: " << elem.first << ", VALUE: " << elem.second << "\n";
    }
    /*
     KEY: AB, VALUE: 9891-09001
     KEY: BC, VALUE: 1122-12345
     KEY: CD, VALUE: 8989-10234
     KEY: DE, VALUE: 9009-32234
     */
    
    //using insert method to insert a pair into map (part-1)
    pair<string, string> temp_pair = make_pair("Adobe","1111-99999");
    name_ph.insert(temp_pair);
    
    //using insert method to insert a pair into map (part-2)
    name_ph.insert(make_pair("Utopia","2222-77523"));
    
    //using emplace to insert a value into the map
    name_ph.emplace("Gene","5419-88888");
    for_each(name_ph.begin(),name_ph.end(),printer);
    /*
    AB : 9891-09001
    Adobe : 1111-99999
    BC : 1122-12345
    CD : 8989-10234
    DE : 9009-32234
    Gene : 5419-88888
    Utopia : 2222-77523
    */
    
    // if we use `.at()` to access a key that doesn't exist, the compiler throws an exception, we can get behind that issue by using the `.count()` method
    //like so:
    if(name_ph.count("steven")){
        cout << "Key: "<< "steven" << ", Value: " << name_ph.at("steven") << "\n";
    }else{
        cout << "Key doesn't exist!\n";
    }
    //Key doesn't exist!
    
    //using a traditional while loop to print the elements of the map
    map<string, string>::iterator it = name_ph.begin();
    while(it!=name_ph.end()){
        cout << "Key: "<<it->first<<", Value: "<<it->second<<"\n";
        it++;
    }
    /*
     Key: AB, Value: 9891-09001
     Key: Adobe, Value: 1111-99999
     Key: BC, Value: 1122-12345
     Key: CD, Value: 8989-10234
     Key: DE, Value: 9009-32234
     Key: Gene, Value: 5419-88888
     Key: Utopia, Value: 2222-77523
     */
    
    
    //map of custom data-type
    map<string,Contact> map_of_contacts_1 {
        {"steve",Contact("steve","12345")},
        {"rolly",Contact("rolly","25192")},
        {"jacob",Contact("jacob","45280")}
    };
    //for the above map, we don't need to overload the '<' operator in our class, since the comparison is being done lexically baed on key which is of type string!

    map<string, Contact>::iterator iter = map_of_contacts_1.begin();
    while(iter!=map_of_contacts_1.end()){
        cout <<"Name: "<<iter->second.getName()<<", Ph: "<<iter->second.getPhone()<<"\n";
        iter++;
    }
    
    //however if create a map like so
    map<Contact,int> map_of_contacts_2 {
        {Contact("youn","25310"),1},
        {Contact("jin","32352"),2},
        {Contact("simn","24521"),3}
    };
    //this map will fail, unless we overload the `<` operator in class definition
    map<Contact,int>::iterator iter2 = map_of_contacts_2.begin();
    while(iter2!=map_of_contacts_2.end()){
        cout << iter2->first.getName()<<" : "<<iter2->first.getPhone() << "\n";
        iter2++;
    }
    /*
     simn : 24521
     youn : 25310
     jin : 32352
     */
    
    //raw arrays v STL arrays
    
    //raw arrays
    int ids[100];
    
    //filling the raw array with values starting at 11
    iota(begin(ids),end(ids),11);
    
    //printing the elements of the
    int* ids_it = begin(ids);
    while(ids_it!=end(ids)){
        cout << *ids_it << " ";
        ids_it++;
    }
    cout<<"\n";
    /*
     11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 108 109 110
     */
    
    //STL arrays
    array<int,100> roll;
    iota(roll.begin(),roll.end(),1);
    for_each(roll.begin(),roll.end(),printer_2);
    cout<<"\n";
    /*
     1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
     */
    
    cout << "Size of STL array: "<<roll.size()<<"\n";
    cout << "Max-Size of STL array: "<< roll.max_size()<<"\n";
    /*
     Size of STL array: 100
     Max-Size of STL array: 100
     */
    
    //unlike `[]` operators, `.at` performs bound checking when accessing the elements
    
    /*
    cout << "Accessing an invalid syntax: "<<roll.at(120)<<"\n";
     */
    
    //thus when the above code runs, compiler throws an exception:
    //Accessing an invalid syntax: libc++abi: terminating due to uncaught exception of type std::out_of_range: array::at
    
    array<int, 6> sorted_arr{1,3,4,5,8,9};
    bool res = binary_search(begin(sorted_arr),end(sorted_arr),3);
    cout << "Element found? (3): "<<res<<"\n"; //Element found? (3): 1
    res = binary_search(begin(sorted_arr),end(sorted_arr),7);
    cout << "Element found? (7): "<<res<<"\n"; //Element found? (7): 0
    
    //lower-bound
    array<int, 6> arr_copy_1(sorted_arr); //1,3,4,5,8,9
    //lower bound returns the iterator pointing at the the value equal to or greater than given value
    int* point_at = lower_bound(begin(arr_copy_1),end(arr_copy_1),5);
    int index_of_lowerbound = point_at - begin(arr_copy_1);
    //subtracting from the iterator, the iterator pointing at the beginning of the array, will give us the index at which the iterator (returned by lower_bound) points
    cout <<"Iterator points at -> "<<*point_at<<", at index: "<<index_of_lowerbound<<".\n";
    //OUTPUT: Iterator points at -> 5, at index: 3.
    
    
    point_at = lower_bound(begin(arr_copy_1), end(arr_copy_1), 6);
    index_of_lowerbound = point_at-begin(arr_copy_1);
    cout <<"Iterator points at -> "<<*point_at<<", at index: "<<index_of_lowerbound<<".\n";
    //OUTPUT: Iterator points at -> 8, at index: 4.
    
    
    point_at = lower_bound(begin(arr_copy_1), end(arr_copy_1), 11);
    index_of_lowerbound = point_at-begin(arr_copy_1);
    cout <<"Iterator points at -> "<<*point_at<<", at index: "<<index_of_lowerbound<<".\n";
    //OUTPUT: Iterator points at -> 0, at index: 6.
    
    //upper bound, returns the upper-bound of an element, i.e., the element greater than the specified element
    array<int, 6> copy_array_2{1,3,4,5,8,9};
    point_at = upper_bound(begin(copy_array_2), end(copy_array_2), 5);
    int index_of_upperBound = point_at - begin(copy_array_2);
    cout <<"Iterator points at -> "<<*point_at<<", at index: "<<index_of_upperBound<<".\n";
    //Iterator points at -> 8, at index: 4.
    
    point_at = upper_bound(begin(copy_array_2), end(copy_array_2), 9);
    index_of_upperBound = point_at - begin(copy_array_2);
    cout <<"Iterator points at -> "<<*point_at<<", at index: "<<index_of_upperBound<<".\n";
    //Iterator points at -> 11, at index: 6.
    
    point_at = upper_bound(begin(copy_array_2), end(copy_array_2), -10);
    index_of_upperBound = point_at - begin(copy_array_2);
    cout <<"Iterator points at -> "<<*point_at<<", at index: "<<index_of_upperBound<<".\n";
    //Iterator points at -> 1, at index: 0.
    
    cout << copy_array_2.data()[6] << "\n"; //11
    
    //using std::distance
    cout <<"Size of copy_array_2: "<<std::distance(begin(copy_array_2),end(copy_array_2))<<"!\n";
    //Size of copy_array_2: 6!
    
    //problem related to upper/lower bound
    //Q1: Find the first occurence of a X in a sorted array. If it does not exists, print -1.
    //A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}
    
    array<int, 9> A {1, 4, 4, 4, 4, 9, 9, 10, 11};
    cout << "Find occurence of '4': "<<findOccurence(A,4)<<"\n"; //Find occurence of '4': 1
    cout << "Find occurence of '4': "<<findOccurence(A,2)<<"\n"; //Find occurence of '4': 1
    cout << "Find occurence of '4': "<<findOccurence(A,12)<<"\n"; //Find occurence of '4': -1
    
    //Q2: Find the last occurence of a X in a sorted array. If it doesn't exist, print -1.
    cout << "Find last occurence of '4': "<<findLastOccurence(A,4)<<"\n"; //Find last occurence of '4': 4
    cout << "Find last occurence of '2': "<<findLastOccurence(A,2)<<"\n"; //Find last occurence of '2': -1
    cout << "Find last occurence of '0': "<<findLastOccurence(A,0)<<"\n"; //Find last occurence of '0': -1
    
    //Q3: Find the largest number smaller than X in a sorted array. If no such number exists print -1.
    cout << "Find largest element smaller than '4': "<<findLargestNumberSmallerThan(A,4)<<"\n"; //Find largest element smaller than '4': 1
    cout << "Find largest element smaller than '2': "<<findLargestNumberSmallerThan(A,2)<<"\n"; //Find largest element smaller than '2': 1
    cout << "Find largest element smaller than '1': "<<findLargestNumberSmallerThan(A,1)<<"\n"; //Find largest element smaller than '1': -1
    
    //Q4: Find the smallest element greater than X in a sorted array. If no number exists print -1.
    cout << "Find smallest element greater than '4': "<<findSmallestNumberGreaterThan(A,4)<<"\n"; //Find smallest element greater than '4': 9
    cout << "Find smallest element greater than '2': "<<findSmallestNumberGreaterThan(A,2)<<"\n"; //Find smallest element greater than '2': 4
    cout << "Find smallest element greater than '1': "<<findSmallestNumberGreaterThan(A,1)<<"\n"; //Find smallest element greater than '1': 4
    cout << "Find smallest element greater than '12': "<<findSmallestNumberGreaterThan(A,12)<<"\n"; //Find smallest element greater than '12': -1
    cout << "Find smallest element greater than '11': "<<findSmallestNumberGreaterThan(A,11)<<"\n"; //Find smallest element greater than '11': -1
    
    
    //multisets in C++
    //multisets are also ordered, but these can also contain duplicates, as shown below
    
    
    
    return 0;
}
