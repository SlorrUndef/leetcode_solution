/*TIME: O(n); MEMORY: O(n)
  Algo: abs of lowest element might be a maximum of vector
  two pointers l and r that point on first and last element
  we will start inserting element in new vector from the end
  first we need to check either abs(nums[0]) > abs(nums[nums.size()-1])
  if true -> last res element will be nums[0]*nums[0] 
  else last res element will be nums[nums.size()-1]*nums[nums.size()-1]
  increase or decrease l and r */
class Solution {
public:
     vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int l=0,r=nums.size()-1;
        for(int k=r;k>=0;k--){
            res[k]=(abs(nums[l])>abs(nums[r])) ? nums[l]*nums[l++] : nums[r]*nums[r--];
        }
        
        return res;
    }
};
