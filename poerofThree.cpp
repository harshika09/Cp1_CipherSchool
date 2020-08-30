class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        if(n==0)
            return false;
        int a=-1;
        int temp=n;
        while(n>0)
        {
            n=n/3;
            a++;
        }
        if(pow(3,a)==temp)
            return true;
    else 
        return false;
        
    }
};
