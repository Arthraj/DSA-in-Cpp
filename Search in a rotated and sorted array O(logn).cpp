class Solution {
public:
    int getPivot(vector <int>& nums){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        
        while(s<e){
            if(nums[mid]>=nums[0])
                s=mid+1;
            else
                e=mid;
            
            mid=s+(e-s)/2;
        }
        return mid;
    }
    
    int BS(vector <int> &nums, int start, int end, int k){
        int n=nums.size();
        int s=start;
        int e=end;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==k)
                return mid;
            if(nums[mid]<k)
                s=mid+1;
            else
                e=mid-1;
            
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int pivot=getPivot(nums);
        int n=nums.size();
        
        if(nums[pivot]<= target && target<= nums[n-1])
            return BS(nums,pivot,n-1,target);
        else
            return BS(nums,0,pivot-1,target);
        
        return -1;
    }
};
