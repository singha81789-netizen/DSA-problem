class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       // int maxSubarraySumCircular(vector<int>& nums) {

    int totalSum = 0;
    int maxSum = nums[0], curMax = nums[0];
    int minSum = nums[0], curMin = nums[0];

    for(int i = 1; i < nums.size(); i++) {

        // normal max subarray
        curMax = max(nums[i], curMax + nums[i]);
        maxSum = max(maxSum, curMax);

        // min subarray (circular case ke liye)
        curMin = min(nums[i], curMin + nums[i]);
        minSum = min(minSum, curMin);

        totalSum += nums[i];
    }
    totalSum += nums[0];

    // edge case: sab negative
    if(maxSum < 0) return maxSum;

    return max(maxSum, totalSum - minSum);

    }
};