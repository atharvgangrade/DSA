class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0 ; i<nums.size(); i++)
        {
            int count=0;
            int curr=nums[i];
            while(curr>0)
            {
                int digir=curr%10;
                curr=curr/10;
                count++;
            }
            if(count%2 == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};