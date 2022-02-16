/*TIME: O(n); MEMORY: O(1)
  Algo: remove leading or trailing spaces. reduce multiple spaces between two words to a single space.
  reverse string; reverse each word in string;
*/
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
        s = s.substr(l, s.size()-k-l); //remove leading or trailing spaces
        l = 0;
        k = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == ' '){
                if (k == 0) l = i;
                k++;
            }
            else{
                if(k > 1){
                    s.erase(l,k-1); //reduce multiple spaces between two words to a single space
                    i -= k-1;
                }
                k = 0;
            }
        }
        reverse(s.begin(), s.end()); //reverse full string
        l = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == ' '){
                reverse(s.begin()+l, s.begin()+i); //reverse each word
                l = i+1;
            } 
        }
        reverse(s.begin()+l, s.end()); //reverse last word
        return s;
    }
};