#include <iostream>
using namespace std;

int getvalue(int arr[],int n){
    int sum=0,i=0;
    while(n>0){
        if(1&n){
            sum+=arr[i];
        }
        i++;
        n=n>>1;
    }
    return sum;
}

void findcombinations(int arr[],int n,int k){
    int range=(1<<n)-1;
    int ans=0;
    for(int i=1;i<=range;i++){
        ans=getvalue(arr,i);
        if(ans==k){
            cout<<"Yes"<<endl;
            break;
        }
    }
    if(ans!=k){
        cout<<"No"<<endl;
    }
    

}





int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        findcombinations(arr,n,k);
    }

}

