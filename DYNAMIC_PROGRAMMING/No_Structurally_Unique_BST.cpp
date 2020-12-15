#include<bits/stdc++.h>
using namespace std;
unsigned long int binomialCoeff(unsigned int n, unsigned int k) { 
    unsigned long int res = 1; 
    if (k > n - k) 
        k = n - k;  
    for (unsigned int i = 0; i < k; ++i){ 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
}

unsigned long long catalan_no(unsigned int n){
    return binomialCoeff(2*n,n)/(n+1);
}



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<catalan_no(n)<<endl;
    }    
    return 0;
}
