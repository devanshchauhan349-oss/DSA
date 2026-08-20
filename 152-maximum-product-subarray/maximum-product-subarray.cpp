class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int Max = nums[0], Min= nums[0], ans = nums[0];
            for(int i = 1; i < nums.size(); i++){
            int a = nums[i];
            int b = a * Max;
            int c = a * Min;
            Max = max(a, max(b, c));
            Min = min(a, min(b, c));

            ans = max(ans, Max);
        }
        return ans;
    }
};