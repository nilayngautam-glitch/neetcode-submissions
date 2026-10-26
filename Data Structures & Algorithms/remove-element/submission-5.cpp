class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count = n;
        int i = 0;
        int j = n-1;
        if(n==0) return 0;
        if(n==1 && nums[i]==val) return 0;
        if(n==1 && nums[i]!=val) return count;
        while(i<j){
            while(i<j && nums[j]==val){
                j--;
                count--;
            }
            if(nums[i]==val){
                swap(nums[i],nums[j]);
                j--;
                count--;
            }
            i++;
        }
        if(i==j && nums[i]==val){
            count--;
        }
        return count;
    }
};