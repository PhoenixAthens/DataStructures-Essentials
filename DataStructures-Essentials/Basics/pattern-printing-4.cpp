#include <iostream>
using std::cout;
using std::cin;
using std::string;
void nForest_1_1(int n) {
    string a = "";
    for(int i = 0;i<n;i++){
        a.push_back('*');
        a.push_back(' ');
    }
    for(int i = 0;i<n;i++ ){
        cout<<a<<"\n";
    }
}
void nForest_1_2(int n) {
    for(int i = 0;i<n;i++){
        for(int i = 0;i<n;i++ ){
            cout<<"* ";
        }
        cout<<"\n";
    }
    
}
void nForest_2_1(int n) {
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void nTriangle(int n) {
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void nTriangle_2(int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
void seeding(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void seeding_2(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void nStarTriangle(int n) {
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        int end = 1+(i-1)*2;
        for(int j=0;j<end;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void nStarTriangle_2(int n) {
    for(int i=n;i>=1;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        int end = 1+(i-1)*2;
        for(int j=0;j<end;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void nStarDiamond(int n) {
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        int end = 1+(i-1)*2;
        for(int j=0;j<end;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n;i>=1;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        int end = 1+(i-1)*2;
        for(int j=0;j<end;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void nStarTriangle_3(int n) {
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void nBinaryTriangle(int n) {
    for(int i = 1; i <= n; i++){
        int start = 1;
        if(i%2==0){
            start = 0;
        }
        for(int j = 0; j < i; j++){
            cout<<start<<" ";
            start=start==0?1:0;
        }
        cout<<"\n";
    }
}
void numberCrown(int n) {
    int width = 2+(n-1)*2;
    for(int i=1;i<=n;i++){
        int currentTotal = 2+(i-1)*2;
        int spaces = width - currentTotal;
        int j = 1;
        for(;j<=i;j++){
            cout<<j<<" ";
        }
        for(int k = 1;k<=spaces;k++){
            cout<<"  ";
        }
        for(;j>0;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

void nNumberTriangle(int n) {
    int num = 1;
    for(int i = 1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<num++<<" ";
        }
        cout<<"\n";
    }
}

void nLetterTriangle(int n) {
    for(int i = 1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<(char)('A'+j)<<" ";
        }
        cout<<"\n";
    }
}

void nLetterTriangle_2(int n) {
    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<<(char)('A'+j)<<" ";
        }
        cout<<"\n";
    }
}

void alphaRamp(int n) {
    for(int i = 0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)('A'+i)<<" ";
        }
        cout<<"\n";
    }
}
void alphaHill(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int j=0;
        for(;j<i;j++){
            cout<<(char)('A'+j)<<" ";
        }
        j-=2;
        for (; j >= 0; j--) {
            cout << (char)('A' + j)<<" ";
        }
        cout << "\n";
    }
}
void alphaTriangle(int n) {
    for(int i = 1;i<=n;i++){
        int cnt = n-1;
        for(int j = 0;j<i;j++){
            cout<<(char)('A'+cnt)<<" ";
            cnt--;
        }
        cout<<"\n";
    }
}
void alphaTriangle_2(int n) {
    for(int i = 1;i<=n;i++){
        int cnt = n-i;
        for(int j = 0;j<i;j++){
            cout<<(char)('A'+cnt)<<" ";
            cnt++;
        }
        cout<<"\n";
    }
}


int main(int argc, char** argv){
    alphaTriangle_2(5);
}
