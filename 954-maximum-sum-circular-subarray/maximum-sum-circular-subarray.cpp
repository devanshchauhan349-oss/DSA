class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = nums[0];

        int Best = nums[0];
        int currBest = nums[0]; 

        int Worst = nums[0];
        int currWorst = nums[0];

        for(int i =1; i < nums.size(); i++) {
            
                currBest = max(nums[i], currBest + nums[i]);
                Best = max (Best, currBest);

                currWorst = min(nums[i], currWorst + nums[i]);
                Worst = min (Worst , currWorst);
                
                total += nums[i];
        }
        if (Best < 0 ){
            return Best;
        }
        return max(Best, total - Worst);
    }
};