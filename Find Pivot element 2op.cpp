class Solution {
public:
    int pivotIndex(vector<int>& nums){
        
        int sum=0;
        for(auto it: nums)
            sum+=it;
        int psum=0;
        for(int i=0;i<nums.size();i++){
            if(sum-psum-nums[i]==psum){
                return i;
            }
                psum+=nums[i];
        }
        return -1;
        
    }
};
