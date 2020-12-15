#include <iostream>
#include<deque>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        deque<int> q(k);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0;

        // PROCESS FOR THE FIRST K ELEMENT
        for(i=0;i<k;i++){
            while((!q.empty())&&(arr[i]>=arr[q.back()])){
                q.pop_back();
            }
            q.push_back(i);
        }

        // PROCESS FOR THE ALL THE ELEMENTS AFTER K
        for(;i<n;i++){
            cout<<arr[q.front()]<<" ";

            // REMOVE THE ELEMENTS WHICH ARE NOT THE PART OF THE WINDOW
            while(!q.empty() && q.front()<=(i-k)){
                q.pop_front();
            }
            // REMOVE ALL THE ELEMENTS WHICH ARE NOT USEFUL AND ARE IN THE WINDOW
            while((!q.empty())&&(arr[i]>arr[q.back()])){
                q.pop_back();
            }

            //ADD NEW ELEMENTS
            q.push_back(i);
        }
        cout<<arr[q.front()]<<endl;
    }

}
