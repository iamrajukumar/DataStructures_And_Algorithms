#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int sum1=0;
        int sum2=0;
        int maxy=0;
        
        int i=0;
        while(i<n){
            sum1=0;
            sum2=0;
            
            int j=i;
            while(j+1<n && arr[j]<arr[j+1])
                j++;
                
            int k=j;
            while(k+1<n && arr[k]>arr[k+1])
                k++;
                
            int last=k;
        //    cout<<"j : "<<j<<" "<<"K : "<<k<<endl;
        //     sum1=accumulate(arr+i,arr+j+1,0);
        //    sum2=accumulate(arr+j,arr+k,0);
            for(int l=i;l<j;l++){
        //        cout<<l<<" ";
                sum1+=arr[l];
            }
            for(int l=j;j<=k;l++){
                sum2+=arr[l];
         //       cout<<l<<" ";
            }
       //     cout<<endl;
        //    cout<<sum1<<" "<<sum2<<endl;
            maxy=max(maxy,sum1+sum2);
            
            i=max(last,i+1); 
        }

        cout<<maxy<<endl;
    }




}