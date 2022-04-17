#include <iostream>
using namespace std;

int digitSum(int n){
    
    if(n<=9)
    return n;
    return n%10+digitSum(n/10);
}


int main() {

    int n=12345;
    cout<<digitSum(n);    
    return 0;
}


