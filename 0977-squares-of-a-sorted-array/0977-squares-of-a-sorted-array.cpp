class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         vector<int>ans(nums.size());
        int start=0;
        int end=nums.size()-1;
        int idx=nums.size()-1;
        while(start<=end)
        {
            if(nums[start]*nums[start] > nums[end]*nums[end])
            {
                ans[idx]=nums[start]*nums[start];
                start++;
            }
            else{
                ans[idx]=nums[end]*nums[end];
                end--;
            }
            idx--;
        }
        return ans;
    }
};