#include <bits/stdc++.h>
using namespace std;

void downheapify(vector<int> &heap,int idx){
    int lidx=2*idx+1;
    int ridx=2*idx+2;
    int n=heap.size();
    if(lidx<n && heap[lidx]>heap[idx]){
        swap(heap[idx],heap[lidx]);
        downheapify(heap,lidx);
    }
    if(ridx<n && heap[ridx]>heap[idx]){
        swap(heap[idx],heap[ridx]);
        downheapify(heap,ridx);
    }
    return;
}


void buildheap(vector<int> &heap){
    for(int i=heap.size()-1;i>=0;i--){
        downheapify(heap,i);
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
