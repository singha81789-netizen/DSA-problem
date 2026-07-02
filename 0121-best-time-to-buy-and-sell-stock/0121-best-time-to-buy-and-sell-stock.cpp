class Solution {
public:
    int maxProfit(vector<int>& prices) {

       int maxprofit = 0;
      int  bestbuy = prices[0];

     for(int i=1;i<prices.size();i++){

        if(prices[i]>bestbuy){
        maxprofit=max(maxprofit,prices[i]-bestbuy);
     }

     bestbuy=min(prices[i],bestbuy);

     }
     return maxprofit;
    }
};









// class Solution {
// public:
//     int maxProfit(vector<int>& Prices) {
//         int minPrices = Prices[0];
//         int maxProfit = 0;

//         for(int i = 0; i < Prices.size(); i++){
//             if(Prices[i] < minPrices){
//                 minPrices = Prices[i];

//             } else if (Prices[i]-minPrices > maxProfit){
//                 maxProfit = Prices[i]-minPrices;
//             }


//         }
//         return maxProfit;
//     }
// };