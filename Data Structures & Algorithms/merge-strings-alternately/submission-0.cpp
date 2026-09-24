class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length(),m=word2.length();
        int i=0,j=0;
        string merges;
        while(i<n && j<m){
            merges+=word1[i];
            merges+=word2[j];
            i++,j++;
        }
        if(i<n){
            for(int size=i;size<n;size++){
                merges+=word1[size];
            }
        }

        if(j<m){
            for(int size=j;size<m;size++){
                merges+=word2[size];
            }
        }
        return merges;
    }
};