class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int sec = target - nums[i];
            ans.push_back(i);
            int flag = 0;
            for(int j=0;j<n;j++){
                if(j==i) continue;
                if(nums[j]==sec) {
                    ans.push_back(j);
                    flag = 1;
                    break;
                }
            }
            if(flag==1) break;
            else ans.pop_back();
        }
        return ans;
    }
};
