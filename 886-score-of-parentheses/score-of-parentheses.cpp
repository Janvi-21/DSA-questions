class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for (char ch : s) {
            if (ch == '(') {
                st.push(0);
            } 
            else {
                int inner = st.top();
                st.pop();

                int value;

                if (inner == 0)
                    value = 1;          // ()
                else
                    value = 2 * inner; // (A)

                st.top() += value;
            }
        }

        return st.top();
    }

};