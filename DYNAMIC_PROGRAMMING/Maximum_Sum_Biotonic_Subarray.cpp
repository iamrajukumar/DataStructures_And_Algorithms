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

        long long sum1=0;
        long long sum2=0;
        long long maxy=0;
        
        int i=0;
        while(i<n){
            sum1=0;
            sum2=0;
            
            int j=i;
            // find the maximum length starting from index i and are in increasing order
            while(j+1<n && arr[j]<arr[j+1])
                j++;
                
            // find the maximum length starting from index j and are in decreasing order
            int k=j;
            while(k+1<n && arr[k]>arr[k+1])
                k++;
                
            int last=k;
        
            for(int l=i;l<j;l++){
                sum1+=arr[l];
            }
            for(int l=j;l<=k;l++){
                sum2+=arr[l];
            }
     
            maxy=max(maxy,sum1+sum2);
            
            // this step is for the progress of algorithm when next element is as
            // the previous element as our last variable doesnot increase its value
            // in that case
            i=max(last,i+1); 
        }

        cout<<maxy<<endl;
    }




}