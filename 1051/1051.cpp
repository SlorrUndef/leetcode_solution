/*TIME: O(n); MEMORY: O(1)
  Algo: is commented in code
*/
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> f(101,0); //vector of frequency 
        int i = 0, j = 0, k = 0;
        for(auto &x : heights){ //frequency of heights
            f[x]++; 
        }
        while(i < 101){
            if(f[i] == 0){ //if there no this height => continue
                i++;
            } else{
                if(i != heights[j]){ //if index of frequency not equal to heights => heights[j] in wrong pos
                    k++;
                }
                j++;
                f[i]--;
            }
        }
        return k;
    }
};
