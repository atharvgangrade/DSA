class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int>st;
        for(int i=0;i<arr.size();i++)
        {
            st.insert(arr[i]);
        }
        int missing=0;
        int current=1;
        while(true)
        {
            if(st.find(current) == st.end())
            {
                missing++;
                if(missing==k)
                {
                   return current;
                }
            }
            current++;
        }
    }
};