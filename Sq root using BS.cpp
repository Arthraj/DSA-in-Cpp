class Solution {
public:
    long long int mySqrt(int x) {
        int s=0;
        int e=x;
        long long int ans=-1;
        long long int mid=0;
        while(s<=e){
            mid=s+(e-s)/2;
            long long int p=mid*mid;
            
            if(p==x)
                return mid;
            
            if(p<x){
                ans=mid;
                s=mid+1;
            }
            else
                e=mid-1;
              
        }
        return ans;
    }
};

//Another approach
long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;


// With precision factor
double factor=1;
        int precision=6;
        double ans=r;
        for(int i=0;i<precision;i++){
            factor/=10;
            
            for(double j=ans; j*j<x; j=j+factor){
                ans=j;
            }
        }
        cout<<ans;
