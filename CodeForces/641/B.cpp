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
	
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> a(n);
        vector<int> b(n);

        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++)
            cin>>b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        stack<int> st1;
        stack<int> st2;
        for(int i=0;i<n;i++){
            st1.push(a[i]);
            st2.push(b[i]);
        }

        int x=max(0,n-k);

        ll sum=0;

        for(int i=1;i<=x;i++){
            sum+=st1.top();
            st1.pop();
        }

        //  cout<<sum<<endl;
        //  cout<<x<<endl;

        
        for(int i=x+1;i<=n;i++){
         //   cout<<a[i-1]<<" "<<b[i-1-x]<<endl;
            if(st1.top()>=st2.top()){
                sum+=st1.top();
                st1.pop();
            }
            else{
                sum+=st2.top();
                st2.pop();
            }

        }

        cout<<sum<<endl;




        

        
    
    
    
    

    
    }
  
}

