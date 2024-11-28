#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n,h;
    cin >> n >> h;
    int width{0};
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i: arr){
        if(i<=h)width++;
        else if(i%h==0)width+=i/h;
        else width+=((i/h)+1);
    }
    cout << width << "\n";
}
