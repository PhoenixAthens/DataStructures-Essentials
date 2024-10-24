#include <iostream>
#include <vector>
#include <algorithm>
static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();


int main(){
    int numTC;
    std::cin >> numTC;
    while(numTC>0){
        long len,k;
        std::cin >> len >> k;
        std::vector<long> vec;
        vec.reserve(len);
        for(int i=0;i<len;i++){
            long temp;
            std::cin >> temp;
            vec.push_back(temp);
        }
        std::sort(vec.begin(),vec.end());
        int extra{0};
        long clicks{0};
        int j=0;
        while(clicks<k){
            int i=j;
            while(vec[i]==0){
                extra++;
                i++;
            }
            j=i;
            long rem = vec[i];
            clicks+=rem*(len-i);
            if(clicks>=k)break;
            for(;i<len;i++){
                vec[i]-=rem;
            }
        }
        std::cout << k+extra << "\n";
        numTC--;
    }
}
