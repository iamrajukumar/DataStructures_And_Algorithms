#include<iostream>
using namespace std;


long long count(int n){
    long long arr[n+1];
    arr[1]=1;
    arr[2]=2;
    for(int i=3;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}

int main()
 {
    //code
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        cout<<count(n)<<endl;
    }
    
    
	return 0;
}