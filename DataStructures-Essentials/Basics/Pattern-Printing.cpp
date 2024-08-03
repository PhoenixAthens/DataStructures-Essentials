#include <iostream>
using std::cout;
using std::cin;

void printStarPattern(){
    for(int i = 1; i<=10;i++){
        for(int j = 1; j<= 10; j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
}
void printNumberPattern(){
    for(int i = 1; i<=5;i++){
        for(int j = 1; j<= 5; j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}

void printNumberPattern_2(){
    for(int i = 0; i < 5; i++){
        for(int j = 1; j <= 5; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}

void printNumberPattern_3(){
    for(int i = 0; i < 5; i++){
        for(int j = 5; j>=1; j--){
            cout << j << " ";
        }
        cout << "\n";
    }
}

void printSquares(){
    for(int i = 0 ;i < 5; i++){
        for(int j = 1; j<=5; j++){
            cout<<j*j<<" ";
        }
        cout<<"\n";
    }
}

void printCubes(){
    for(int i = 0; i < 5; i++){
        for(int j = 1; j <= 5; j++){
            cout<<j*j*j<<" ";
        }
        cout<<"\n";
    }
}

void printCharacters(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j<5; j++){
            cout << (char)('a'+i) << " ";
        }
        cout << "\n";
    }
}

void printCharacters_2(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout<< (char)('a'+j) << " ";
        }
        cout << "\n";
    }
}

void printGridOfNumbers(){
    int num = 1;
    for(int i = 0; i <= 5; i++){
        for(int j = 0; j <= 5; j++){
            cout << num++ << " ";
        }
        cout << "\n";
    }
}

void printFours(){
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
            cout<<"4 ";
        }
        cout<<"\n";
    }
}

void printExponents(){
    for(int i = 0; i <= 5; i++){
        for(int j = 1;j<=6; j++){
            cout << j * j * j<<" ";
        }
        cout << "\n";
    }
}
int main(int argc, char** argv){
    printStarPattern();
    cout << "\n";
    printNumberPattern();
    cout << "\n";
    printNumberPattern_2();
    cout << "\n";
    printNumberPattern_3();
    cout << "\n";
    printSquares();
    cout << "\n";
    printCubes();
    cout << "\n";
    printCharacters();
    cout << "\n";
    printCharacters_2();
    cout << "\n";
    printGridOfNumbers();
    cout << "\n";
    printFours();
    cout << "\n";
    printExponents();
    cout << "\n";
    
    return 0;
}
