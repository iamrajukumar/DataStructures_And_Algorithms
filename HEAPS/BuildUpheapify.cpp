#include <bits/stdc++.h>
using namespace std;

void upheapify(vector<int> &heap,int idx){
    if(idx==0)
        return;
    int parentidx=(idx-1)/2;
    if(heap[parentidx]<heap[idx]){
        swap(heap[parentidx],heap[idx]);
        upheapify(heap,parentidx);
    }
    return;
}


void buildheap(vector<int> &heap){
    for(int i=0;i<heap.size();i++){
        upheapify(heap,i);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> heap;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        heap.push_back(x);
    }
    buildheap(heap);
    for(int i=0;i<heap.size();i++){
        cout<<heap[i]<<" ";
    }

}
