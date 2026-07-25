class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]<2)
            {
                nums[k]=nums[i];
                k++;
                m[nums[i]]++;
            }
        }
        return k;
    }
};