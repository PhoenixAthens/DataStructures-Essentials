#include <unordered_map>
#include <iostream>
#include <vector>
using std::unordered_map;
using std::cout;
using std::cin;
using std::vector;
int main(){
  int n;
  cin >> n;
  vector<int> result(n);
  int index=0;
  unordered_map<int,int> mapp;
  for(int i=0;i<n;i++){
    int temp;
    cin >> temp;
    if(index==0){
      result[index++]=-1;
     // mapp[temp]=index;
    }
    else{
      if(mapp.find(temp)!=mapp.end()){
        result[index++]=mapp[temp];
      //  map[temp]=index;
      }else{
        result[index++]=-1;
       // mapp[temp]=index;
      }
    }
    mapp[temp]=index;
  }
  for(int i: result){
    cout << i << " ";
  }
  cout << "\n";
  return 0;
}
