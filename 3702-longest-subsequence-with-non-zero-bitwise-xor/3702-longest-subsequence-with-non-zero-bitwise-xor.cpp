class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int currxor=nums[0];
        bool nonzero=0;
        for(int i=1 ;i<nums.size(); i++)
        {
            currxor=currxor^nums[i];
            if(nums[i] > 0)
            {
                nonzero=1;
            }
        }
        if(currxor != 0)
        {
            return nums.size();
        }
        else if( currxor == 0 && nonzero == 1)
        {
            return nums.size() - 1; 
        }
        else{
            return 0;
        }
    }
};