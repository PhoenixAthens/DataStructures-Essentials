#include <iostream>
int main(){
    int numOfTests;
    std::cin >> numOfTests;
    int len{0};
    std::string input;
    
    while(numOfTests>0){
        std::cin >> len;
        std::cin >> input;
        bool flag = 1;
        int i = len-1;
        bool result = (input[i]=='0'?0:1) && (input[--i]=='0'?0:1);
        bool result2 = 
//        while(i<len){
//            if(flag){
//                result =
//            }else{
//                
//            }
//        }
        
        
        numOfTests--;
    }
}
static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();
