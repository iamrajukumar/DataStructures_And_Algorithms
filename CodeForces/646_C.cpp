//                                         -------------------------rajukumarbhui-----------------------                 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

void inout(){	
	freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    inout();

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        int arr[n+1]={0};

        int a,b;
        for(int i=1;i<=n-1;i++){
            cin>>a>>b;
            arr[a]++;
            arr[b]++;
        }

        if(arr[x]<=1){
            cout<<"Ayush"<<endl;
        }
        else{
            cout<<((n%2==0)?"Ayush\n":"Ashish\n");
        }

    
    
    }
  
}

