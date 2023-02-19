class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n = prices.size();
      vector<int> inner;
      if(n == 1){   
          return 0;
      }
        for(int i=0;i<n-1;i++){
            int start = i+1;
            int max = *max_element(prices.begin()+start,prices.end());
            if(max > prices[i]){
                int profit = max - prices[i];
                inner.push_back(profit);
            }
        }
        if(!inner.empty()){
            return *max_element(inner.begin(),inner.end());
        }else{
            return 0;
        }
        
        
    }
};