class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        int n=nums.size();
         int maxsum = INT_MIN;

        for(int start=0;start<n;start++)
        {
           int currsum=0;
            for(int end=start;end<n;end++)
            {
                currsum+=nums[end];
                maxsum = max(currsum,maxsum);
            }
        }
        return maxsum;
        
    }
};
