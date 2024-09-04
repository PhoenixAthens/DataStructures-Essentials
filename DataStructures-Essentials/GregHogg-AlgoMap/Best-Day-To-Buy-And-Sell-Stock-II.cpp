#include <iostream>
#include <vector>
using std::vector;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for(int i: prices){
            minPrice = minPrice>i?i:minPrice;
            int profit = i - minPrice;
            if(profit>0){
                maxProfit+=profit;
                minPrice = i;
            }
        }
        return maxProfit;
    }
    int maxProfit_2(vector<int>& prices) {
        int maxProfit = 0;
        int high = prices[0];
        int low = prices[0];
        for(int i = 0; i < prices.size()-1; i++){
            while(i<=prices.size()-2 && prices[i]>prices[i+1])i++;
            low = prices[i];
            while(i<=prices.size()-2 && prices[i]<prices[i+1])i++;
            high = prices[i];
            maxProfit+=(high-low);
        }
        return maxProfit;
    }
};
