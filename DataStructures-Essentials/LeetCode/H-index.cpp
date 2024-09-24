#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::cin;
using std::sort;
using std::vector;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int j=1;
        for(int i=citations.size()-1;i>=0;i--){
            if(j>citations[i]){
                break;
            }
            j++;
        }
        return j-1;
    }
    int hIndex_2(vector<int> citations){
        sort(citations.begin(), citations.end());
        int low = 0;
        int high = citations.size()-1;
        int ans = 0;
        int n = citations.size();
        while(low<=high){
            int mid = low + (high-low)/2;
            int idx = n - mid;
            if(idx > citations[mid]){
                low = mid+1;
            }else{
                ans = idx;
                high = mid-1;
            }
        }
        return ans;
    }
    //O(n^2) complexity-approach
    int hIndex_3(vector<int> citations){
        int n = citations.size();
        for(int i=1;i<=n;i++){
            int count = 0;
            for(int j=0; j<n;j++){
                if(citations[j]>=i)count++;
                if(count==i)break;
            }
            if(count<i)
                return i-1;
        }
        return 0;
    }
    //Counting the papers with maximum number of citations
    int hIndex_4(vector<int> citations){
        int number_of_papers = citations.size();
        int paper_citations[number_of_papers + 1];
        for(int& i: paper_citations)i=0;
        for(int i: citations){
            if(i>number_of_papers){
                paper_citations[number_of_papers]++;
            }else{
                paper_citations[i]++;
            }
        }
        int cites = 0;
        for(int i=number_of_papers;i>0;i--){
            cites+=paper_citations[i];
            if(cites>i){
                return i;
            }
        }
        return 0;
    }
};
int main(int argc, char** argv){
    Solution s;
    vector<int> mainVec {3,0,6,1,5};
    vector<int> mainVec2 {1,3,1};
    cout << s.hIndex(mainVec) << "\n";
    cout << s.hIndex(mainVec2) << "\n";
    
    cout << s.hIndex_2(mainVec) << "\n";
    cout << s.hIndex_2(mainVec2) << "\n";
    
    cout << s.hIndex_3(mainVec) << "\n";
    cout << s.hIndex_3(mainVec2) << "\n";
    
    
}
