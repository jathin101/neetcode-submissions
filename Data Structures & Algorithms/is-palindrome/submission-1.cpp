class Solution {
public:
    bool isPalindrome(string s) {
        string checkval;
        for (auto x:s){
            checkval+=tolower(x);
        }
        string checkval2;
        for(auto x:checkval){
            if(isalnum(x)){
                checkval2+=x;
            }
        }
        int i=0,j=checkval2.length()-1;
        while(i<j){
            if(checkval2[i]==checkval2[j]){
                i++;
                j--;
            }else{
                return false;
            }
        } 
        return true;
    }
};
