
//  it is used to find largest subarray having maximum sum

#include<bits/stdc++.h>
using namespace std;
int main(){
    //code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
            
        int max_sofar=-10000;
        int curr_max=-10000;
        for(int i=0;i<n;i++){
            curr_max=max(arr[i]+curr_max,arr[i]);
            max_sofar=max(max_sofar,curr_max);
        }
        cout<<max_sofar<<endl;
    }
    
	return 0;
}