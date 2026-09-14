class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum=nums[0];
        int minsum=nums[0];
        int currsum=nums[0];

        for(int i=1 ; i<nums.size(); i++)
        {
            currsum = max(currsum + nums[i] , nums[i]);
            maxsum=max(maxsum , currsum);
        }
        currsum=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            currsum= min(currsum + nums[i] , nums[i]);
            minsum= min(minsum , currsum);
        }

        return max( abs( maxsum ) , abs( minsum ));
    }
};