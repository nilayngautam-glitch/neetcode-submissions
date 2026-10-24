class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
    unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int sec = target - nums[i];
            if(mpp.find(sec) != mpp.end()) return {mpp[sec],i};
            mpp[nums[i]] = i;
        }
        return ans;
    }
};
