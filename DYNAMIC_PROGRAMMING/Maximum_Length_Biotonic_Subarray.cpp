#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int maxy=0;
        int left[n];
        int right[n];

        for(int i=0;i<n;i++){
            int key=arr[i];
            int j=i-1;
            int count=0;
            while(1){
                if(j>=0 && arr[j]<key){
                    count++;
                    key=arr[j];
                    j--;
                }
                else{
                    break;
                }
            }
            left[i]=count;
        }

        for(int i=0;i<n;i++){
            int key=arr[i];
            int j=i+1;
            int count=0;
            while(1){
                if(j<n && arr[j]<key){
                    count++;
                    key=arr[j];
                    j++;
                }
                else{
                    break;
                }
            }
            right[i]=count;
        }
     

        int ans=0;
        for(int i=0;i<n;i++)
            ans=max(ans,left[i]+right[i]+1);


        cout<<ans<<endl;

    }
}