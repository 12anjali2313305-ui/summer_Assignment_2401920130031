class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg = INT_MIN;

        for(int i = 0; i <= nums.size()-k; i++) {
            int sum = 0;

            for(int j = i; j < i+k; j++) {
                sum += nums[j];
            }

            maxAvg = max(maxAvg, (double)sum/k);
        }

        return maxAvg;
    }

    
};
