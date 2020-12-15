#include<bits/stdc++.h>
using namespace std;

bool isvalid(int arr[],int n,int k,int mid){
    int curr_page=0,student=1;
    for(int i=0;i<n;i++){
        if((curr_page+arr[i])>mid){
            student++;
            if(student>k){
                return false;
            }
        }
        else{
            curr_page+=arr[i];
        }

    }
    return true;
}

void binarysearcharray(int arr[],int n,int k){
    int sum=0,s=0,e=0,ans=0,mid=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    s=arr[n-1],e=sum;
    while(s<=e){
        mid=(s+e)/2;
        if(isvalid(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<ans<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        binarysearcharray(arr,n,k);
        
    }
    return 0;
}

