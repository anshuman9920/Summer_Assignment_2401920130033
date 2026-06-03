class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n-1;
        vector<int> ans(n);
        for(int i=n-1 ; i>=0 ;i--){
            int v;
            if(abs(nums[left]) < abs(nums[right])){
                v = nums[right];
                right--;
            }
            else{
                v = nums[left];
                left++;
            }
            ans[i] = v*v;
        }
        return ans;
    }
};