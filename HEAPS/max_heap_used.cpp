//                                         -------------------------rajukumarbhui-----------------------                 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	
	freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n+1];

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    priority_queue<int> pq;

    for(int i=2;i<=n;i++){
        pq.push(arr[i]-arr[i-1]);
    }

    while(k>=1){
        k--;
        int t=pq.top();
        pq.pop();
        if(t==1 || t==0)
            break;

        int temp=(t%2)==0?t/2:t/2+1;
        pq.push(t/2);
        pq.push(temp);
    }

    cout<<abs(pq.top()-x)<<endl;


}

