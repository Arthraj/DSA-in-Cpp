class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> ans;
        
        int first=firstOccurence(nums,target);
        int second=secondOccurence(nums,target);
        
        ans.push_back(first);
        ans.push_back(second);
        return ans;
    }
    
    int firstOccurence(vector<int> nums, int k){
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        int ans=-1;; 
        while(start<=end){
            if(nums[mid]==k){
                ans=mid;
                end=mid-1;
            }
            
            if(nums[mid]<k)
                start=mid+1;
            else if(nums[mid]>k)
                end=mid-1;
            
            mid=start+(end-start)/2;
        }
        return ans;
    }
    
    int secondOccurence(vector<int> nums, int k){
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        int ans=-1; 
        while(start<=end){
            if(nums[mid]==k){
                ans=mid;
                start=mid+1;
            }
            
            if(nums[mid]<k)
                start=mid+1;
            else if(nums[mid]>k)
                end=mid-1;
            
            mid=start+(end-start)/2;
        }
        return ans;
    }
};
