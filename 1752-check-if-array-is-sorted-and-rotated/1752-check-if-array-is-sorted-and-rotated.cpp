class Solution {
public:
    // bool check(vector<int>& nums) {
    //     int n=nums.size();
    //     int count =0;
    //     for(int i=0;i<n;i++){
    //         if(nums[i]>nums[i+1]){
    //         count++;
    //         }
    //     }
    //     if(nums[n-1]>nums[0])
    //     count++;
    //     return count<=1;
    // }
    bool check(vector<int>& nums) {
    int n = nums.size();
    int drops = 0;

    for(int i = 0; i < n-1; i++) {
        if(nums[i] > nums[i+1]) {
            drops++;
        }
    }

    // Last element aur first element check
    if(nums[n-1] > nums[0]) drops++;

    return drops <= 1;
}

};