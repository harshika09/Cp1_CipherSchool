class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
    int i=1;
        while(i<nums.size())
        {
            while(i+1<nums.size()&&nums[i-1]==nums[i+1])
            {
                nums.erase(nums.begin()+i);
            }
            i++;
        }
        return nums.size();
    }
};
