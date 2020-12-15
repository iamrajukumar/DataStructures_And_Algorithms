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

    int arr[n];
    int brr[n];
    int win=0;

    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int j=0;j<n;j++){
        cin>>brr[j];
        if(brr[j]==1)
            win++;
    }
    win++;


    for(int i=0;i<n;i++){
        if(arr[i]==1 && brr[i]==1){
            win--;
        }
    }

  //  cout<<win<<endl;

    int left=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1 && brr[i]==0){
            left++;
        }
    }

    if(left==0){
        cout<<-1<<endl;
    }
    else{
        int ans=0;
        if(win%left==0){
            ans=win/left;
        }
        else{
            ans=win/left+1;
        }
        cout<<ans<<endl;
    }


    

   



        
    
    






    
  
}

