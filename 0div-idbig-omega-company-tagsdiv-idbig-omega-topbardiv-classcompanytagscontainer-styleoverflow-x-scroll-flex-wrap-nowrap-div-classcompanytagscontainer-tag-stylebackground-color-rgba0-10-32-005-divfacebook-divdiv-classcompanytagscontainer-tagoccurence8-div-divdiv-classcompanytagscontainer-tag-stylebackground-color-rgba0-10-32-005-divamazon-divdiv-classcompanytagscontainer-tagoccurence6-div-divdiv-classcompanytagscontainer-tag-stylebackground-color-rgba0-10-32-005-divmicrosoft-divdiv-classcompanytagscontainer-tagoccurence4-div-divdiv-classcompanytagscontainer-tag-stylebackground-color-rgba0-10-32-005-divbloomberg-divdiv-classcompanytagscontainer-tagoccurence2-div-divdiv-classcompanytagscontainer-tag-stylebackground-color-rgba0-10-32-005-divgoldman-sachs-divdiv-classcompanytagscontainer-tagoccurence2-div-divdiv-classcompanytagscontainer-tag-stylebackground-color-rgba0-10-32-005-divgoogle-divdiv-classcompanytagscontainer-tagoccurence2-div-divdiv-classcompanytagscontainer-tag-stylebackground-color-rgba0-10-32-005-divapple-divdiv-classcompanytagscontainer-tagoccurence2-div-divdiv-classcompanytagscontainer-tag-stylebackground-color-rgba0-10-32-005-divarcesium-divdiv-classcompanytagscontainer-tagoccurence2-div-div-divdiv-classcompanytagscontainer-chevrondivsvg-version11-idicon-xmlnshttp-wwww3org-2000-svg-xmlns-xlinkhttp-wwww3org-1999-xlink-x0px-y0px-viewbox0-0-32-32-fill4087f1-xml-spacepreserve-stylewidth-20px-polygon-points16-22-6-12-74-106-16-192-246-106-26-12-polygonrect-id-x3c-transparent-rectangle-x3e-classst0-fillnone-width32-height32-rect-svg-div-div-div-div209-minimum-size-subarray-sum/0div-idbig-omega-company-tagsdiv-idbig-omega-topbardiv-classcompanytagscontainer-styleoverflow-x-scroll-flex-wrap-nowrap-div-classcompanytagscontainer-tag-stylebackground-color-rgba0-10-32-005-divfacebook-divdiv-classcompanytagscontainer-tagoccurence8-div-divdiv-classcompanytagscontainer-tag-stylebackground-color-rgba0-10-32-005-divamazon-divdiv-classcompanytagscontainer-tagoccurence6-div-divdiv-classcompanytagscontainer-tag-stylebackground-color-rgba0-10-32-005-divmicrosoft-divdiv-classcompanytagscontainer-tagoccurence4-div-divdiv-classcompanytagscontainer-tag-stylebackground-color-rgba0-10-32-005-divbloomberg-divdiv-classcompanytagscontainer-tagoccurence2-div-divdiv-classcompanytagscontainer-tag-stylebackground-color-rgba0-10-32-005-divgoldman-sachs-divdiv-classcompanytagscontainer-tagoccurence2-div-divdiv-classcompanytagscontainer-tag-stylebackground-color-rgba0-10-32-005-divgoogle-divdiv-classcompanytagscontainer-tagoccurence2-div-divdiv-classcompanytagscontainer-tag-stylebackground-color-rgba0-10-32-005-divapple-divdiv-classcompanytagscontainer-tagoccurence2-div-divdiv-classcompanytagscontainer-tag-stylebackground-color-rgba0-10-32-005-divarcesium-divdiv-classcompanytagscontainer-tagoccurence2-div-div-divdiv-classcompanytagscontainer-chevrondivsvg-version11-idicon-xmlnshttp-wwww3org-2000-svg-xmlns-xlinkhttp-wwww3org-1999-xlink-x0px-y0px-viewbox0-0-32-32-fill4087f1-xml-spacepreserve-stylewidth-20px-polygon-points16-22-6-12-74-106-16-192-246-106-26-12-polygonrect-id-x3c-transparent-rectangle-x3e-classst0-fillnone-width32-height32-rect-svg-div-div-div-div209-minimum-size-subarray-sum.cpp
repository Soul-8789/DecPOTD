class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0,res=INT_MAX;
        int curr_sum=0;
        
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
            if(curr_sum>=target){
                while(curr_sum>=target){
                    res=min(res,i-start+1);
                    curr_sum-=nums[start];
                    start++;
                }
            }
        }
        return res==INT_MAX?0:res;
    }
};