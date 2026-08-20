class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = nums[0];

        int Best = nums[0];
        int bestAns = nums[0]; 

        int Worst = nums[0];
        int worstAns = nums[0];

        for(int i =1; i < nums.size(); i++) {
            
                bestAns = max(nums[i], bestAns + nums[i]);
                Best = max (Best, bestAns);

                worstAns = min(nums[i], worstAns + nums[i]);
                Worst = min (Worst , worstAns);
                
                total += nums[i];
        }
        if (Best < 0 ){
            return Best;
        }
        return max(Best, total - Worst);
    }
};