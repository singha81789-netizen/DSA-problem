class Solution {
public:

    bool ispalin(string &s, int left, int right){
        while( left < right){
        if( s[left] != s[right])
            return false;
            left++;
            right--;
        }
        return true;

    }
    bool validPalindrome(string s) {
        int left = 0, right = s.size()-1;

        while( left < right){
            if(s[left] == s[right]){
                left++;
                right--;
                
            }else{
            return ispalin(s,left + 1,right) || ispalin(s,left,right - 1);

            }
        }
        return true;
        
    }
};