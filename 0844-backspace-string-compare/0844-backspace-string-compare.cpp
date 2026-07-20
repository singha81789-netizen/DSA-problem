class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2;

        //s;

        for(int i = 0; i <s.size(); i++){
                if(s[i] != '#'){
                    st1.push(s[i]);
                }
                else if (st1.size() > 0){
                    st1.pop();
                } 
        }
        //t
          for(int i = 0; i <t.size(); i++){
                if(t[i] != '#'){
                    st2.push(t[i]);
                }
                else if (st2.size() > 0){
                    st2.pop();
                } 
          }

          return st1 == st2;
    }
};