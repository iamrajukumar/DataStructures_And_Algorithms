#include<bits/stdc++.h>
using namespace std;

//    UPHEAPIFY
void upheapify(vector<int> &heap,int id){
    if(id==0){
        return;
    }
    int parentid=(id-1)/2;
    if(heap[parentid]<heap[id]){
        int temp=heap[parentid];
        heap[parentid]=heap[id];
        heap[id]=temp;
        upheapify(heap,parentid);
    }
    else{
        return;
    }
}

//  INSERT IN THE HEAP
void insertinheap(vector<int> &heap,int x){
    heap.push_back(x);
    upheapify(heap,heap.size()-1);
}

//    DOWNHEAPIFY
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

//  DELETE FUNCTION
void delete_peek_element(vector<int> &heap){
    swap(heap[0],heap[heap.size()-1]);
    heap.pop_back();
    downheapify(heap,0);
}

//     DISPLAY FUNCTION
void display(vector<int> heap){
    int n=heap.size();
    for(int i=0;i<n;i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> heap;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        insertinheap(heap,x);
    }
    display(heap);
    delete_peek_element(heap);
    display(heap);
}