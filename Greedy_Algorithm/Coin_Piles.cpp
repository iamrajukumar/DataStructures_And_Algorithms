#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        sort(arr,arr+n);
        int remove=0;
        int pr=0;
        int miny=1000000000;
        for(int i=0;i<n-1 && pr<miny;i++){
            remove=pr;
            for(int j=i+1;j<n;j++){
                if((arr[j]-arr[i])>k){
                    remove+=abs(arr[i]-arr[j])-k;
                }
            }
            if(remove<miny)
                miny=remove;
            pr+=arr[i];
        }
        cout<<miny<<endl;



    }
}
