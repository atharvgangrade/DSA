class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<bool> arr(nums.size());
        for(int i=0; i<nums.size(); i++)
        {
            arr[i]=false;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] > 0 && nums[i] <=nums.size())
            {
                arr[nums[i] - 1]=true;
            }
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(arr[i] == false)
            {
                return i+1;
            }
        }
        return nums.size()+1;
    }
};