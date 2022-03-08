https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1#

// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int A[],int n,int mid, int m){
        int students=1;
        int pagesum=0;
        
        for(int i=0;i<n;i++){
            if(pagesum+A[i]<=mid){
                pagesum+=A[i];
            }
            else{
                students++;
                if(students>m || A[i]>mid)
                    return false;
                pagesum=A[i];
            }
            
        }
        return true;
    }
    
    int findPages(int A[], int n, int m) 
    {
        if(n<m)return -1;
        
        int s=1;
        int e=0;
        int ans=-1;
        for(int i=0;i<n;i++)e+=A[i];
        
        int mid=s+(e-s)/2;
        while(s<=e){
            
            if(isPossible(A,n,mid,m)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
            
        }
        return ans;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends
