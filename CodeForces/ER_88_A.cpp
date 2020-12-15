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
        int n,m,k;
        cin>>n>>m>>k;

        int x=n/k;
        if(m<=x){
            cout<<m<<endl;
        }
        else{
            int left=m-x;
            int maxy=0;
            if(left%(k-1)==0){
                maxy=left/(k-1);
            }
            else{
                maxy=left/(k-1)+1;
            }
            cout<<x-maxy<<endl;
        }
       

    
    }
  
}

