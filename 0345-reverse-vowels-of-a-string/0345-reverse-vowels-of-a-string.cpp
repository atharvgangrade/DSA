class Solution {
public:
    bool isvowel(char ch)
    {
        ch=tolower(ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            while(i<j && isvowel(s[i])==false)
            {
                i++;
            }
            while(i<j && isvowel(s[j])==false)
            {
                j--;
            }
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};