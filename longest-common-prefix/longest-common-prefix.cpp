/*Algo: save first string then for all elemts in strs
  check if there is a difference between first string and i-th string as soon as you find it
  break subcycle and reduce ans size to 0..k where k is last itteration of subcycle */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        int max=INT_MAX;
        for(auto &s:strs){
            if(s.length()==0) return "";
            int i=0;
            for(i=0;i<ans.length()&&i<s.length();i++){
                if(s[i]!=ans[i])
                break;
            }
            ans = ans.substr(0,i);
        }

        return ans;
    }
};