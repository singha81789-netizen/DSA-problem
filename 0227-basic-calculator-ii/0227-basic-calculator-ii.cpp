class Solution {
public:
    int calculate(string s) {

        stack<int> st;
        int nums = 0;
        char sign = '+';

        for(int i = 0; i < s.size(); i++) {

            char c = s[i];

            if(isdigit(c)){
                nums = nums * 10 + (c - '0');
            }

            if((!isdigit(c) && c != ' ') || i == s.size()-1){

                if(sign == '+'){
                    st.push(nums);
                }

                else if(sign == '-'){
                    st.push(-nums);
                }

                else if(sign == '*'){
                    int top = st.top();
                    st.pop();
                    st.push(top * nums);
                }

                else if(sign == '/'){
                    int top = st.top();
                    st.pop();
                    st.push(top / nums);
                }

                sign = c;
                nums = 0;
            }
        }

        int result = 0;

        while(!st.empty()){
            result += st.top();
            st.pop();
        }

        return result;
    }
};