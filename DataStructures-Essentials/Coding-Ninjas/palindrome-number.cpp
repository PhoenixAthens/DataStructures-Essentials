bool palindrome(int n){
    int n_copy = n;
    int result=0;
    while(n!=0){
        result = result * 10 + (n%10);
        n/=10;
    }
    return n_copy==result;
}
