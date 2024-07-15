#include <iostream>
#include <format>
#include <string>
using std::cout;
using std::cin;
using std::format;
using std::string;

void reverse(char* arr, int size);
void reverse(string& arr);

int main(int argc, char** argv){
    char arr[] = "hello world";
    char arr2[] = "abcde";
    char arr3[] = "abcdef";
    string s1 = "hello world";
    string s2 = "abcde";
    string s3 = "abcdef";
    
    reverse(arr, sizeof(arr));
    reverse(arr2, sizeof(arr2));
    reverse(arr3, sizeof(arr3));
    
    reverse(s1);
    reverse(s2);
    reverse(s3);
    cout<<format("reversed arr: {}\n",arr);
    cout<<format("reversed arr2: {}\n",arr2);
    cout<<format("reversed arr3: {}\n",arr3);
    cout<<format("reversed s1: {}\n",s1);
    cout<<format("reversed s2: {}\n",s2);
    cout<<format("reversed s3: {}\n",s3);
    
    
    
}

void reverse(char* arr, int size){
    int s = 0;
    int e = size-2;
    while(s<e){
        *(arr+s) = *(arr+s) ^ *(arr+e);
        *(arr+e) = *(arr+s) ^ *(arr+e);
        *(arr+s) = *(arr+s) ^ *(arr+e);
        s++;
        e--;
    }
}
void reverse(string& arr){
    int s = 0;
    int e = arr.length()-1;
    while(s<e){
        arr[s] = arr[s] ^ arr[e]; //you can also use std::swap() instead
        arr[e] = arr[s] ^ arr[e];
        arr[s] = arr[s] ^ arr[e];
        s++;
        e--;
    }
}

