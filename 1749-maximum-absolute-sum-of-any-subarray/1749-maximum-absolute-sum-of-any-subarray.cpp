class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currMax=0, maxsum=0;
        int currMin=0, minsum=0;

        for(int i=0;i<nums.size();i++){
            int x=nums[i];

            currMax=max(currMax,0)+x;
            maxsum=max(currMax,maxsum);

            currMin=min(currMin,0)+x;
            minsum=min(currMin,minsum);
        }
            return max(maxsum,-minsum);
        
    }
};