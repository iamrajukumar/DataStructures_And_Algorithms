#include <bits/stdc++.h>
using namespace std;

vector<int> kadens(int arr[],int n){
    vector<int> v(2);
    v[0]=0;
    v[1]=0;

    int s=0,e=0;
    int curr_max=0;
    int max_so_far=0;
    for(int i=0;i<n;i++){
        curr_max=curr_max+arr[i];
        //max_so_far=max(max_so_far,curr_max);
        if(max_so_far<curr_max){
            max_so_far=curr_max;
            v[0]=s;
            v[1]=i;
        }
        //curr_max=max(0,curr_max);
        if(curr_max<0){
            curr_max=0;
            s=i+1;
        }
    }

    return v;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int brr[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)
                count++;
            if(arr[i]==1)
                brr[i]=-1;
            else
                brr[i]=1;
        }

        vector<int> temp=kadens(brr,n);

        int c1=0,c2=0;
        if(temp[0]!=temp[1]){
            for(int i=temp[0];i<=temp[1];i++){
                if(arr[i]==0)
                    c1++;
                else
                    c2++;
            }
        }

        //cout<<c1<<" "<<c2<<endl;
        count=count+abs(c1-c2);
        cout<<count<<endl;
    }
    
}
