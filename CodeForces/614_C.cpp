#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	

    int n,q;
    cin>>n>>q;

   // int arr[2][201];
    vector<vector<int>> arr(2,vector<int>(n, 0));

    int x,y;
    int block=0;
    for(int i=1;i<=q;i++){
        cin>>x>>y;

        x--;
        y--;

        //int delta = (arr[x][y] == 0) ? +1 : -1;
        int delta=(arr[x][y]==0?+1:-1);

        arr[x][y]=1-arr[x][y];

        for(int dy=-1;dy<=1;dy++){
            if((y+dy)<0 || (y+dy)>n)
                continue;

            if(arr[1-x][y+dy]==1){
                block+=delta;
            }
        }
        cout << ((block == 0) ? "Yes\n" : "No\n");
        
    }

    return 0;
}

