#include<iostream>
using namespace std;
#define x 1000000007

long long count(int n,int m){
    long long arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        if(i>m)
            arr[i]=(arr[i-1]+arr[i-m])%x;
        else if(i<m)
            arr[i]=1;
        else
            arr[i]=2;
    }
    return arr[n]%x;
}

int main()
 {
    //code
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n;
        cin>>m;
        cout<<count(n,m)<<endl;
    }
    
    
	return 0;
}