
/*
Problem number: 1

Approach: Used hashmap to store the index of the visited elements
check if target-the number is present in the map or not

Time complexity=O(n)
Space complexity=O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l= nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<l;i++){
            int comp=target-nums[i];
            if(m.find(comp)!=m.end()){
                return {m[comp],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};