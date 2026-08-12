class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //int hash[nums.size() +1]={0};
        vector<int> hash(nums.size() + 1,0);
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=1;
        }
    for(int i=1;i<=nums.size();i++){
        if(hash[i] == 0){
            return i;
        }
    }
    return 0;
    }
};