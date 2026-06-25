class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> map;
        map[0]=1;  //base
        int sum = 0, count = 0;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            int need = sum - k;

            if(map.find(need) != map.end())
                count += map[need];

                map[sum]++;
        }
        return count;


    }
};