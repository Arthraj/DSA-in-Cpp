#include <iostream>
using namespace std;

int countSubsets(int arr[],int target , int n){

    if(n==0){
        return (target==0)?1:0;
    }
    return allSubsets(arr,target,n-1)+allSubsets(arr,target-arr[n-1],n-1);
    
}



int main() {

int arr[5]={2,5,4,9,6};
int target=9;
int n=4;
cout<<countSubsets(arr,target,n);

}
