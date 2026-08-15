class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int left=0;
        int ans=0;
        for(int right=0; right<nums.size(); right++)
        {
            freq[nums[right]-1]++;
            while(freq[nums[right]-1] > k)
            {
                freq[nums[left] - 1]--;
                left++;
            }  
            ans=max(ans , right-left+1);
        }
        return ans;
    }
};