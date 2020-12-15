//                                         -------------------------rajukumarbhui-----------------------                 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

bool mycomp(pair<char,int> p1,pair<char,int> p2){
    return p1.first>p2.second;
}



int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
    int N;
    cin>>N;

    string str;
    cin>>str;
    int i=0,j=0;

    for(i=25;i>=0;i--){
        int n;
        n=str.length();

        for(j=0;j<n;j++){
            if(str[j]==(i+'a')){

                if((j!=0 && (str[j-1]==(i+'a'-1)) || (j!=n-1 && (str[j+1]==(i+'a'-1))))){
                    str.erase(str.begin()+j);
                    break;
                }
            }
        }

        if(j<n){
            i++;
        }
    }

    cout<<N-str.length()<<endl;







   

  
}

