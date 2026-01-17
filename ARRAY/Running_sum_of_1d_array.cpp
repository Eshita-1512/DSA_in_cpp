/*
Problem number:
*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int l=nums.size();
        int a=0;
        vector<int> ans(l);
        for(int i =0;i<l;i++){
            a=a+nums[i];
            ans[i]=a;

        }
        return ans;
    }
};