#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::swap;
using std::vector;

//printing 1 to n
void printAscending(int start, int end){
    if(start>end){
        return;
    }
    cout<<start++<<" ";
    printAscending(start,end);
}

//printing 1 to n (backtracking)
void printAscending_2(int end){
    if(end<1)
        return;
    printAscending_2(end-1);
    cout << end << " ";
}

//printing n to 1
void printDescending(int start){
    if(start<1)
        return;
    cout << start-- <<" ";
    printDescending(start);
}

//printing n to 1 (backtracking)
void printDescending_2(int low, int high){
    if(low>high)
        return;
    printDescending_2(low+1, high);
    cout << low << " ";
}

//summation till n (parameterized recusion)
void printSum(int high, int sum){
    if(high<1){
        cout << sum << "\n";
        return;
    }
    printSum(high-1,sum+high);
}

//summation till n (functional recursion)
int printSum_2(int n){
    if(n==1)
        return 1;
    return n + printSum_2(n-1);
}
/*
                f(6) return 21
                /
            6+f(5) 6 + 15
            /
         5+f(4) 5 + 10
          /
      4+(3) 4 + 6
       /
    3+f(2) 3 + 2 + 1
    /
  2+f(1) = 2 + 1
 
*/

//factorial
int factorial(int n){
    if(n==1)
        return 1;
    return n * factorial(n-1);
    
}

//factorial (parameterized)
void factorial(int prod, int n){
    if(n==1){
        cout << prod << "\n";
        return;
    }
    factorial(prod*n,n-1);
}

void reverseArray(int i, vector<int>& vec){
    if(i==(vec.size()/2))return;
    else{
        swap(vec[i],vec[vec.size()-i-1]);
        reverseArray(++i, vec);
    }
}

void printAllSubArrays(int index, vector<int> mainArrays, vector<int> emptArr){
    if(index >= mainArrays.size()){
        for(int i: emptArr){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    emptArr.push_back(mainArrays[index]);
    printAllSubArrays(index+1, mainArrays, emptArr);
    
    printAllSubArrays(index+1, mainArrays, emptArr);
}

int main(int argc, char** argv){
    printAscending(1, 5);
    cout <<"\n";
    printAscending_2(5);
    cout <<"\n";
    printDescending(5);
    cout << "\n";
    printDescending_2(1,10);
    cout << "\n";
    printSum(10,0);
    cout << printSum_2(10) << "\n";
    cout << factorial(10) << "\n";
    factorial(1, 10);
    
    
    vector<int> v1{1};
    vector<int> v2;
    vector<int> v3{1,2,3,5,6};
    vector<int> v4{1,2,3,4,5,6};
    reverseArray(0, v1);
    reverseArray(0, v2);
    reverseArray(0, v3);
    reverseArray(0, v4);
    for(int i: v1)cout<<i<<" ";
    cout<<"\n";
    for(int i: v2)cout<<i<<" ";
    cout<<"\n";
    for(int i: v3)cout<<i<<" ";
    cout<<"\n";
    for(int i: v4)cout<<i<<" ";
    cout<<"\n";
    
    return 0;
}
