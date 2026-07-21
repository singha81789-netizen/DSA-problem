class Solution {
public:
    int scoreOfParentheses(string s) {
       
    stack<int> st;

    for(char c : s) {

        if(c == '(') {
            st.push(0);        // placeholder

        } else {
            // ')' aaya

            if(st.top() == 0) {
                // "()" mila
                st.pop();
                st.push(1);

            } else {
                // "(A)" mila
                int sum = 0;

                // saare numbers nikalo jab tak 0 na mile
                while(st.top() != 0) {
                    sum += st.top();
                    st.pop();
                }

                st.pop();           // 0 bhi hatao
                st.push(2 * sum);   // 2*A daalo
            }
        }
    }

    // stack ke sab add karo
    int result = 0;
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;

    }
};