class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++){
            if(st.size() > 0 &&  st.top() == s[i] ){
            st.pop();

            }
            else {
            st.push(s[i]);
            }  
        }
        string result = "";
        for(int i=0;i<s.size();i++){
            while(st.size()>0){
                result+=st.top();
                st.pop();
            }
        }
        reverse(result.begin(),result.end());
            return result;

        }
};

// Rule sirf ek hai:

// Agar current character stack ke top ke equal hai, to dono remove ho jayenge.

// Nahi to current character ko stack me push kar do.