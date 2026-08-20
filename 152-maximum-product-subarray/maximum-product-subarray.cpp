class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int Max = nums[0], Min= nums[0], ans = nums[0];
            for(int i = 1; i < nums.size(); i++){
            int x = nums[i];

            int a = x;
            int b = x * Max;
            int c = x * Min;
            Max = max(a, max(b, c));
            Min = min(a, min(b, c));

            ans = max(ans, Max);
        }
        return ans;
    }
};