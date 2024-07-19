#include <iostream>
using std::cout;
using std::cin;

//Sum from 0 to n
int recursiveSum_ascending(int from, int till){
    if(from == till)
        return till;
    return from + recursiveSum_ascending(from+1, till);
}
int recursiveSum_descending(int from, int till){
    if(till == from)
        return till;
    return from + recursiveSum_descending(from-1,till);
}

int main(int argc, char** argv){
    int sum_0_5 = recursiveSum_ascending(0, 5);
    int sum_5_0 = recursiveSum_descending(10, 0);
    cout<<sum_0_5<<"\n";
    cout<<sum_5_0<<"\n";
    return 0;
}

