#include <iostream>
#include <typeinfo>
#include <type_traits>
#include <vector>
using std::cout;
using std::is_same_v;

//to declare function return type
template<typename F,typename T>
auto apply(F&& f, T value){
    return f(value);
}

int main(){
    
    // using `auto name = expression`
    auto i = 42;
    auto d = 42.5;
    auto s = "text";
    const auto v = {1,2,3};
    cout << i << "\n";
    cout << d << "\n";
    cout << s << "\n";
    i = 42.34;
    cout << i << "\n"; // 42
    cout << typeid(v).name() << "\n"; //St16initializer_listIiE
    
    if constexpr (is_same_v<decltype(v),const std::initializer_list<int>>){
        cout<<"v is of type std::initializer_list<int>"<<"\n";
    }else{
        cout<<"v type = unknown!\n";
    }
    //v is of type std::initializer_list<int>
    
    // using `auto name = type-id{expression}`
    auto b = new char[10]{0};            // char*
    auto s1  = std::string{"text"};      // std::string
    auto v1 = std::vector<int>{1,2,3};   // std::vector<int>
    auto p = std::make_shared<int>(42);  // std::shared_ptr<int>
        
    cout << typeid(b).name()  << "\n";   //Pc
    cout << typeid(s1).name() << "\n";   //NSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
    cout << typeid(v1).name() << "\n";   //NSt3__16vectorIiNS_9allocatorIiEEEE
    cout << typeid(p).name()  << "\n";   //NSt3__110shared_ptrIiEE
    
    //using `auto name = lambda-expression`
    auto upper = [](char c){return toupper(c);};
    cout << (char)upper('c') << "\n"; // C
    
    //to declare lambda params and ret vals
    auto add = [](auto const a, auto const b){return a+b;};
    cout << add(2,3) << "\n"; //5
    cout << add('a','d') << "\n"; //197
    
    auto add2 = [](auto a, auto b){return a+b;};
    cout << add2(2,3) << "\n"; //5
    cout << add2('k','a') << "\n"; //204
    
    
    
    
    
    
}
