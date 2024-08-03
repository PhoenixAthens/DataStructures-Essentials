#include <iostream>
//     1
//     1 2
//     1 2 3
//     1 2 3 4
//     1 2 3 4 5
//     1 2 3 4 5 6
//     1 2 3 4 5 6

using std::cout;

void printRightTriangleOfNumbers(){
    for(int i = 1; i <= 7; i++){
        for(int j = 1; j <= i && j<=6; j++){
            cout << j << " ";
        }
        cout<<"\n";
    }
}
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//1 2 3 4 5 6
//1 2 3 4 5 6

void printRightTriangleOfLetters(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j<=i; j++ ){
            cout<<(char)('A'+j)<<" ";
        }
        cout<<"\n";
    }
}
//A
//A B
//A B C
//A B C D
//A B C D E

void printRightTriangleOfNumbers_2(){
    for(int i = 0; i < 6; i++){
        for(int j = 0; j <= i; j++){
            cout << 10+j << " ";
        }
        cout<<"\n";
    }
}
//10
//10 11
//10 11 12
//10 11 12 13
//10 11 12 13 14
//10 11 12 13 14 15

void upsideRightTriangle(){
    for(int i = 4; i>0;i--){
        for(int j = 0; j < i; j++){
            cout << (char)('A'+j) << " ";
        }
        cout << "\n";
    }
}
//A B C D
//A B C
//A B
//A

void printRightTriangleOfNumbers_3(){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << "\n";
    }
}
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5

void printRightTriangleOfNumbers_4(){
    for(int i = 1; i <= 5; i++){
        for(int j=i; j>0; j--){
            cout << j << " ";
        }
        cout << "\n";
    }
}
//1
//2 1
//3 2 1
//4 3 2 1
//5 4 3 2 1

void printRightTriangleOfNumbers_5(){
    for(int i = 5; i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1

void printRightTriangleOfNumbers_6(){
    for(int i = 1; i <= 5; i++){
        for(int j = 0; j < i ; j++){
            cout << 5 - j << " ";
        }
        cout << "\n";
    }
}

int main(int argc, char** argv){
    printRightTriangleOfNumbers();
    cout << "\n";
    printRightTriangleOfLetters();
    cout << "\n";
    printRightTriangleOfNumbers_2();
    cout << "\n";
    upsideRightTriangle();
    cout << "\n";
    printRightTriangleOfNumbers_3();
    cout << "\n";
    printRightTriangleOfNumbers_4();
    cout << "\n";
    printRightTriangleOfNumbers_5();
    cout << "\n";
    printRightTriangleOfNumbers_6();
    return 0;
}
