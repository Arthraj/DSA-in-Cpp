/*
 * Complete the 'superDigit' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING n
 *  2. INTEGER k
 */
long long int superKey(long long int n){
    long long int sum=0;
    long long int x=n;
    while(x>0){
        int temp=x%10;
        sum+=temp;
        x=x/10;
    }
    
    if(sum<10)
    return sum;
    
    return superKey(sum);
}

int superDigit(string n, int k) {
    long long int singleSum=0;
    int temp;
    long long int l=n.size();
    for(int i=0;i<l;i++){
        temp=n[i]-48;
        singleSum+=temp;
    }
    long long int sum=singleSum*k;
    return superKey(sum);
}
