class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxweight=0;
        int totalweight=0;
        for(int i=0;i<weights.size();i++)
        {
            maxweight=max(maxweight,weights[i]);
            totalweight+=weights[i];
        }
        int start=maxweight;
        int end=totalweight;
        int mid=0;
        int ans=0;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int load=0;
            int D=1;
            for(int i=0;i<weights.size();i++)
            {
                if(load+weights[i] <= mid)
                {
                    load+=weights[i];
                }
                else{
                    load=weights[i];
                    D++;
                }
            }
            if(D <= days)
            {
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};