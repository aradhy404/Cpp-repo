class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int k = 0;
        int j = prices[0];
        for(int i = 0 ; i<prices.size();i++){
            if(j>prices[i]){
                j = prices[i];
            }
            else{
                if(k<prices[i]-j)
                k =prices[i]-j; 
            }
        }
        return k;
        
    }
};
