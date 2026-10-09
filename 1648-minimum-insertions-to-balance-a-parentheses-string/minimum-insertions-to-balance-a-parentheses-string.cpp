class Solution {
public:
    int minInsertions(string s) {

         int open = 0;
        int insertions = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                open++;
            } else {
                // If the next character is not ')',
                // insert one ')' to complete the pair.
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    i++;  // Consume the second ')'
                } else {
                    insertions++;  // Insert missing ')'
                }

                // Match this '))' pair with an opening '('.
                if (open > 0) {
                    open--;
                } else {
                    insertions++;  // Insert missing '('
                }
            }
        }

        // Each unmatched '(' needs two ')'.
        return insertions + 2 * open;
    }
};