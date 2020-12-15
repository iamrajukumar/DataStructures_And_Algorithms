//                                         -------------------------rajukumarbhui-----------------------                 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
    int n;
    cin>>n;

    float sum=0.0;

    int x=n-1;

    for(int i=n;i>=1;i--){
        float t=(float)1/i;
        sum+=t;
    }

    cout << fixed << setprecision(12) << sum<<endl; 
  
}

