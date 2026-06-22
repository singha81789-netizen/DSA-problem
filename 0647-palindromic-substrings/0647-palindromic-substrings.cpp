// class Solution {
// public:
//  int count = 0;
//         void expand(string s, int left, int right){
            
//            // while(left < right){
//                 while(left >= 0 && right < s.size() && s[left] == s[right]){
//                 count++;
//                 left--;
//                 right++;
//             }
//         }
//     int countSubstrings(string s) {
//         int n=s.size();
        
//         for(int i=0 ; i<s.size(); i++){
//                 expand(s,i,i);
//                 expand(s,i,i+1);

//         }
//         return count;
//     }
// };
class Solution {
public:
    int count = 0;

    void expand(string &s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    }

    int countSubstrings(string s) {
        int n = s.size();

        for (int i = 0; i < n; i++) {
            expand(s, i, i);
            expand(s, i, i + 1);
        }

        return count;
    }
};