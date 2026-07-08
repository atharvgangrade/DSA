class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max_num=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                count++;
                max_num=max(max_num,count);
            }
            else if(s[i]==')')
            {
                count--;
            }
        }
        return max_num;
    }
};