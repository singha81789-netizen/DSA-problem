class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();

        int xor1 = 0, xor2 = 0;

        for(int i = 0; i < N; i++) {
            xor2 = xor2 ^ nums[i];
            xor1 = xor1 ^ (i + 1);
        }

        return xor1 ^ xor2;
    }
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
      
//         vector<int> hash(nums.size() + 1,0);
//         for(int i=0;i<nums.size();i++){
//             hash[nums[i]]=1;
//         }
//     for(int i=1;i<=nums.size();i++){
//         if(hash[i] == 0){
//             return i;
//         }
//     }
//     return 0;
//     }
// };