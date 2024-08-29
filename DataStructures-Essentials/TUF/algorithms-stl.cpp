#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using std::vector;
using std::cout;
using std::cin;
using std::for_each;
using std::count_if;
using std::all_of;
using std::sort;
using std::binary_search;
using std::tuple;
using std::make_tuple;
using std::type_info;
using std::tie;

class Foo{
private:
        int x;
public:
    Foo(int i):x(i){}
    bool operator < (const Foo& rhs) const{
        return x < rhs.x;
    }
//    bool operator > (Foo& rhs) const{
//        return x > rhs.x;
//    }
    int get() const {
        return x;
    }
};

void tripleMe(int& a){
    a*=3;
}

bool isEven(int a){
    if(a%2==0)return true;
    else return false;
}

void print(vector<int>& vec){
    for(int a: vec){
        cout<<a<<" ";
    }
    cout << "\n";
}
int main(int argc, char** argv){
    
    // Lesson1: count_if, all_of, for_each (HOFs)
    
    vector<int> vec { 8, 6, 7, 5, 3, 0, 9};
    vector<int>::iterator start = vec.begin();
    vector<int>::iterator end = vec.end();
    
    //applying for-each on a subset of the entire vector
    for_each(start, end, tripleMe);
    print(vec);//24 18 21 15 9 0 27
    
    
    //applying for-each on a subset of the vector
    for_each(start+2, end-2, tripleMe);
    print(vec);//24 18 63 45 27 0 27
    
    //trying count_if
    int evens = count_if(start, end, isEven);
    cout<<"Our vector has "<<evens<<" even numbers!\n";
    cout<<"And "<<(vec.size()-evens)<<" odd numbers!\n";
    //Our vector has 3 even numbers!
    //And 4 odd numbers!
    
    
    //trying count_if with constant iterators
    int odds = vec.size() - count_if(vec.cbegin(), vec.cend(), isEven);
    cout<<"Our vector has "<<odds<<" odd numbers!\n";
    cout<<"And "<<(vec.size()-odds)<<" even numbers!\n";
    //Our vector has 4 odd numbers!
    //And 3 even numbers!
    
    if(all_of(vec.cbegin(), vec.cend(), isEven)){
        cout<<"All numbers are even!\n";
    }else{
        cout<<"Not all numbers are even!\n";
    }
    //Not all numbers are even!
    
    //Lesson2: sort() and binary_search()
    vector<int> vector2 {27, 85, 43, 91, 12, 68, 74, 39, 56, 23};
    //using sort on the entire vector
    sort(vector2.begin(),vector2.end());
    print(vector2); //12 23 27 39 43 56 68 74 85 91
    
    
    //using sort on a subset of the vector
    vector<int> vector3 {14, 62, 37, 89, 21, 77, 48, 93, 55, 32};
    sort(vector3.begin()+2, vector3.end()-2);
    print(vector3); //14 62 21 37 48 77 89 93 55 32
    
    sort(vector3.begin(), vector3.end());
    print(vector3); //14 21 32 37 48 55 62 77 89 93
    
    if(binary_search(vector3.begin(),vector3.end(),68)){
        cout<<"Element found!\n";
    }else{
        cout<<"Element not found\n";
    }
    //Element not found
    
    if(binary_search(vector3.begin(),vector3.end(),93)){
        cout<<"Element found!\n";
    }else{
        cout<<"Element not found\n";
    }
    //Element found!
    
    if(binary_search(vector3.begin(),vector3.end(),14)){
        cout<<"Element found!\n";
    }else{
        cout<<"Element not found\n";
    }
    //Element found!
    
    if(binary_search(vector3.begin(),vector3.end(),11)){
        cout<<"Element found!\n";
    }else{
        cout<<"Element not found\n";
    }
    //Element not found
    
    //declaring a vector of custom data-type
    vector<Foo> foo_vector{
        Foo(8),Foo(6),Foo(7),Foo(1),Foo(10),Foo(-4)
    };
    
    //applying sort on a custom data-type
    sort(foo_vector.begin(), foo_vector.end());
    
    //printing the sorted vector
    for(Foo& elem: foo_vector){
        cout<<elem.get()<<" ";
    }
    cout<<"\n";
    //-4 1 6 7 8 10
    
    if(binary_search(foo_vector.cbegin(), foo_vector.cend(), Foo(6))){
        cout<<"Element found!\n";
    }else{
        cout<<"Element not found!\n";
    }
    //Element found!
    
    //Lesson 3 - Tuples
    tuple<int, double, char> t1;
    t1 = make_tuple(5,3.14,'c');
    
    cout << "Printing t1: ";
    cout << get<0>(t1)<<" ";
    cout << get<1>(t1)<<" ";
    cout << get<2>(t1)<<" ";
    cout << "\n";
    //Printing t1: 5 3.14 c
    
    auto t2 = make_tuple(1,2,3,3.14,'c',"july");
    cout << "Printing t2: ";
    cout << get<0>(t2) << " ";
    cout << get<1>(t2) << " ";
    cout << get<2>(t2) << " ";
    cout << get<3>(t2) << " ";
    cout << get<4>(t2) << " ";
    cout << get<5>(t2) << " ";
    cout << "\n";
    //Printing t2: 1 2 3 3.14 c july
    
    tuple<int, double, char> t3;
    t3 = make_tuple(3.14,'c',67);
    cout << "Printing t3: ";
    cout << get<0>(t3) << " ";
    cout << get<1>(t3) << " ";
    cout << get<2>(t3) << " ";
    cout << "\n";
    //Printing t3: 3 99 C
    //Data was parsed to fit the specified data types!!
    
    tuple<int, int, int> t4;
    //t4 = make_tuple(1,2,3,4,5,6,7,8,9,10); //Candidate function not viable: constraints not satisfied
    t4 = make_tuple(1,2,3);
    cout << "Printing t4: ";
    cout << get<0>(t4) << " ";
    cout << get<1>(t4) << " ";
    cout << get<2>(t4) << " ";
    cout << "\n";
//    cout << get<3>(t4) << " ";
//    cout << get<4>(t4) << " ";
//    cout << get<5>(t4) << " ";
//    cout << get<6>(t4) << " ";
//    cout << get<7>(t4) << " ";
//    cout << get<8>(t4) << " ";
//    cout << get<9>(t4) << " ";
//    cout << get<10>(t4) << " ";
    
    //Printing t4: 1 2 3
    
    auto t5 = make_tuple('a','b',1,2,3.14,5.67);
    cout << "Printing tuple t5: ";
    cout << get<0>(t5) << " ";
    cout << get<1>(t5) << " ";
    cout << get<2>(t5) << " ";
    cout << get<3>(t5) << " ";
    cout << get<4>(t5) << " ";
    cout << get<5>(t5) << " ";
    cout << "\n";
    //Printing tuple t5: a b 1 2 3.14 5.67
    
    get<5>(t5) = 'e';
    cout << get<5>(t5) << " "; //101
    cout << "\n";
    
    auto  t6 = t5;
    cout << "Printing tuple t6: ";
    cout << get<0>(t6) << " ";
    cout << get<1>(t6) << " ";
    cout << get<2>(t6) << " ";
    cout << get<3>(t6) << " ";
    cout << get<4>(t6) << " ";
    cout << get<5>(t6) << " ";
    cout << "\n";
    
    //cout << type_info(get<5>(t6)) << endl;
    
    auto t7 = make_tuple(1,2,3);
    tuple<int,int,int> t7_copy = t7;
    cout << "Printnig t7: ";
    cout << get<0>(t7_copy)<<" ";
    cout << get<1>(t7_copy)<<" ";
    cout << get<2>(t7_copy)<<" ";
    cout << "\n";
    
    tuple<int, int, double, double> t8 {make_tuple(1,2,4.45,9.8)};
    tuple<int, int, int, int> t9 {make_tuple(1,2,3,4)};
    //t9.swap(t8); //can't do this on t8 and t9, no room for implicit case here!
    
    tuple<int, int, double, double> t10 {make_tuple(8,7,1.12,5.77)};
    t8.swap(t10);
    cout << "Printing t8: ";
    cout << get<0>(t8) << " ";
    cout << get<1>(t8) << " ";
    cout << get<2>(t8) << " ";
    cout << get<3>(t8) << " ";
    cout << "\n";
    //Printing t8: 8 7 1.12 5.77
    
    tuple<int, int, int, int, int> t11 = make_tuple(1,2,3,4,5);
    //t11.swap(t9);
    //can't perform the above swap since the tuples are not of same size!!
    
    //unpacking a tuple - using tie
    int a, b, c, d;
    tie(a,b,c,d) = t9;
    cout << a << " " << b << " " << c << " " << d << " " << "\n";
    //1 2 3 4
    
    int w, x;
    float y, z;
    tie(w,x,y,z) = t8;
    cout << w << " " << x << " " << y << " " << z << " " << "\n";
    
    //unpacking a tuple - using structured binding
    auto [e, f, g, h] = t10;
    cout << e << " " << f << " " << g << " " << h << " " << "\n";
    //1 2 4.45 9.8
    
    return 0;
}
 
