#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i) { 
    int largest = i; 
    int l = 2 * i + 1;
    int r = 2 * i + 2; 
  
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
    if (largest != i) { 
        swap(arr[i], arr[largest]); 
        heapify(arr, n, largest); 
    } 
}

void buildheap(vector<int> &arr){
    int n=arr.size();
    for(int i=arr.size()-1;i>=0;i--){
        heapify(arr,n,i);
    }
}

void dispaly(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}


void heapsort(vector<int> &arr){
    for(int i=arr.size()-1;i>=0;i--){
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }

}




int main() {
    int n;
    cin>>n;
    vector<int> arr;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }    
    buildheap(arr);
    heapsort(arr);
    dispaly(arr);
}
