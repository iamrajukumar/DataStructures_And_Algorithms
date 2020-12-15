#include<bits/stdc++.h>
using namespace std;

// bool cmp(pair<int,int> &p1, pair<int,int> &p2){
//     int len1=p1.second-p1.first;
//     int len2=p2.second-p2.first;
//     if(len1==len2)
//         return p1.first<p2.first;

//     return len1>len2;
// }
struct cmp {
	bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
		int lena = a.second - a.first  ;
		int lenb = b.second - b.first ;
		if (lena == lenb) return a.first < b.first;
		return lena > lenb;
	}
};




int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];

        set<pair<int, int>, cmp> st;
        st.insert({1,n});

        for(int i=1;i<=n;i++){
            pair<int,int> it=*st.begin();
            st.erase(st.begin());
           
            int x=it.first;
            int y=it.second;
            int dif=y-x+1;
            
            if(dif%2!=0){
                int mid=(x+y)/2;
                arr[(x+y)/2]=i;
               if(x<mid){
                    st.insert({x,mid-1});
                }
                if(y>mid){
                    st.insert({mid+1,y});
                }
                
            }
            else{
             //   cout<<i<<" ";
                int mid=(x+y-1)/2;
             //   cout<<mid<<endl;
                arr[(x+y-1)/2]=i;
                if(x<mid){
                    st.insert({x,mid-1});
                }
                if(y>mid){
                    st.insert({mid+1,y});
                }
            }

        }

        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

        


    }
}