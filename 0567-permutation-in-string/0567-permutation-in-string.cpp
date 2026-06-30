class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s2.size();
        int m = s1.size();
        
        vector<int> freq1(26, 0);
        vector<int> window(26, 0);

        for (char c : s1)
            freq1[c - 'a']++;

        for (int i = 0; i < n; i++) {

            window[s2[i] - 'a']++;

            if (i >= m)
                window[s2[i - m] - 'a']--;

            if (i >= m - 1 && window == freq1)
                return true;
        }

        return false;
    }
};


 