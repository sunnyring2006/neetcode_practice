class Solution {
public:
    bool isPalindrome(string s) {
        string sorted;
        for(char c:s){
            if(isalnum(c)){
                sorted +=tolower(c);
            }
        }

        int i=0;
        int j=sorted.size()-1;

        for(auto it:sorted){
            while(i<j){
                if(sorted[i] != sorted[j]){
                    return false;
                }
                i++;
                j--;
            }
        }
        return true;    
    }
};
