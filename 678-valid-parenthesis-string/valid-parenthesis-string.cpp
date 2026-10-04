class Solution {
public:
    bool checkValidString(string s) {
        int low = 0; // open bracket minimum
        int high = 0; // open bracket maximum

        for(char ch : s){
            if(ch == '('){
                low++; 
                high++;
            }

            if(ch == ')'){
                low--;
                high--;
            }
            if(ch == '*'){
                low--; // treat star as )
                high++; // treat star as (
            }

           if(high < 0) return false;

           low = max(low, 0);
        }

        return low == 0;
    }

};