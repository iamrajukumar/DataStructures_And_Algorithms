#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
 {
    //code
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<long long,long long> mp;
        
        long long sum=0,max_length=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.count(sum)==0)
                mp[sum]=i;
            if(sum==k) 
                max_length = i + 1;
            if(mp.count(sum-k)==1){
               // cout<<sum<<" "<<(sum-k)<<endl;
                if(max_length<(i-mp[sum-k])){
                  //  cout<<i<<" "<<mp[sum-k]<<endl;
                    max_length=i-mp[sum-k];
                }
            }
        }
        cout<<max_length<<endl;
    }
    
    
	return 0;
}