/*T O(n);M O(1)
  Algo: go through string if we find ' ' reverse word;
*/
class Solution {
public:
    void reverseString(string &s,int i, int j){
        for(int k=i; k<(j+i)/2; k++){
            char c=s[k];
            s[k]=s[j-k+i-1];
            s[j-k+i-1]=c;
        }
    }
    
    string reverseWords(string s) {
        int i = 0;
        int j = 0;
        int n = s.size();
        while(i<n){
            if(s[i] == ' ') {reverseString(s,j,i); j = i+1;}
            if(i == n-1){reverseString(s,j,i+1);}
            i++;
        }
        return s;
    }
};