class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max=INT_MIN;
        int min=INT_MAX;
        unordered_set<int> set;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > max)
            {
                max=nums[i];
            }
            if(nums[i] < min)
            {
                min=nums[i];
            }
            set.insert(nums[i]);
        }
        for(int i=min; i<=max; i++)
        {
            if(set.find(i) == set.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};