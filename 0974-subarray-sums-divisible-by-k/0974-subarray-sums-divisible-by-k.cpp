class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        map[0]=1;
        int ans=0;
        int sum=0;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];

            int rem=((sum%k)+k)%k;

            if(map.count(rem)){
                ans+=map[rem];
            }
            
            map[rem]++;
        }
        return ans;
        
    }
};