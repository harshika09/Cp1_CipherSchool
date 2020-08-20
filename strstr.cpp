class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        
        if(haystack.size()<needle.size())
            return -1;
        if(haystack.size()==0||needle.size()==0)
            return 0;
       
     int length=haystack.size();
        int length2=needle.size();
        for(int i=0;i<=(length-length2);i++)
        {
            int j=0;
            for(;j<length2;j++)
            {
                if (haystack[i+j]!=needle[j])
                    break;
            }
        
        if(j==length2)
        {
            return i;
        }
        }
  return -1;
    }
};
