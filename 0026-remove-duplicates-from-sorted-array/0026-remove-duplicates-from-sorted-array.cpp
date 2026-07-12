class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
   int i = 1;   // unique element ki next position

    for(int j = 1; j < nums.size(); j++) {

        // naya element mila?
        if(nums[j] != nums[i-1]) {
            nums[i] = nums[j];   // unique jagah pe rakho
            i++;                  // next unique position
        }
    }

     return i;   // total unique elements

}
};

    