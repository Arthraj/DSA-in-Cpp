int main() {
    int max=nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max)
            max=i;
    }
    return max;
}
// Use linear search simply and find max element
