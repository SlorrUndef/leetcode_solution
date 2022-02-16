class Solution {
public:
    string reverseWords(string s) {
        int l = 0, k = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] != ' ') break;
            else l++;
        }
        for(int i = s.size()-1; i>=0; i--){
            if(s[i] != ' ') break;
            else k++;
        }
        s = s.substr(l, s.size()-k-l);
        l = 0;
        k = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == ' '){
                if (k == 0) l = i;
                k++;
            }
            else{
                if(k > 1){
                    s.erase(l,k-1);
                    i -= k-1;
                }
                k = 0;
            }
        }
        reverse(s.begin(), s.end());
        l = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == ' '){
                reverse(s.begin()+l, s.begin()+i);
                l = i+1;
            } 
        }
        reverse(s.begin()+l, s.end());
        return s;
    }
};