#include <iostream>
using namespace std;

bool findset(int arr[],int out[],int i,int j,int n){
    if(i==n){
        int sum=0;
        for(int i=0;i<j;i++)
            sum+=out[i];
        if(sum==0 && j!=0){
            return true;
        }
            return false;
    }
    out[j]=arr[i];
    if(findset(arr,out,i+1,j+1,n)){
        return true;
    }
    if(findset(arr,out,i+1,j,n)){
        return true;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int out[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(findset(arr,out,0,0,n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
