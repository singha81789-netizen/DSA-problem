class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       unordered_set<int> st(nums.begin(),nums.end());

       int minVal = *min_element(nums.begin(), nums.end());
       int maxVal = *max_element(nums.begin(), nums.end());
       
       vector<int> missing;
       for(int i = minVal; i < maxVal; i++){
            if(st.find(i) == st.end())
            missing.push_back(i);

       }
       return missing;
    }
};