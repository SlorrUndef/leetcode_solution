class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int k = 0, p = INT_MAX;
        int sum = 0, first = 0, last = 0, i = 0;
        while(i < nums.size()){
            if(sum < target){
                if(k == 0) first = i; 
                sum += nums[i++];
                k++;
            } else{
                while(sum >= target){
                    sum -= nums[first++];
                    k--;
                }
                p = min(p,k+1);
            }
        }
        if(sum >= target) {
            while(sum >= target){
                    sum -= nums[first++];
                    k--;
                }
                p = min(p,k+1);
        }
        return (p == INT_MAX ? 0 : p);
    }
};