class Solution {
public:
    bool isPalindrome(string s)
    {
    int n=s.length();
        int i=0;
        int j=n-1;
        if(!n)
            return true;
        while(i<=j)
        {
            while(!isalnum(s[i]) && i<j)
            {
                i++;
            }
            while(!isalnum(s[j]) && j>i)
            {
                j--;
            }
        
        if(tolower(s[i])==tolower(s[j]))
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
        }
        return true;
    }
};
