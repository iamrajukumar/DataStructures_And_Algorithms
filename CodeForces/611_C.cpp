#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int arr[n+1];
    vector<int> v;
    int mark[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        mark[arr[i]]=1;
    }

    for(int i=1;i<=n;i++){
        if(mark[i]==0){
            v.push_back(i);
        }
    }

    int count=0;
    int len=v.size();
    int used[len+1]={0};

    for(int i=0;i<len;i++)
        cout<<v[i]<<" ";
    cout<<endl;


    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            int z=5;
            while(v[count]==i){
                count++;
                if(count==len)
                    count=0;
            }
            while(used[count]==1){
                count++;
                if(count==len)
                    count=0;
            }
            cout<<v[count]<<" ";
            used[count]=1;
            count++;
            if(count==len)
                    count=0;
        }
        else{
            cout<<arr[i]<<" ";
        }
    }





    




}