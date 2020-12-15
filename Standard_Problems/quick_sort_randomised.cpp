#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void shuffle(int arr[],int s,int e){
    int i,j;
    srand(time(NULL));
    for(i=e;i>0;i--){
        j=rand()%(i+1);
        swap(arr[i],arr[j]);
    }
}

int partition(int arr[],int s,int e){
    int i=s-1;
    int pivot=arr[e];
    for(int j=s;j<=e;j++){
        if(pivot>arr[j]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}

void quicksort(int arr[],int s,int e){
    if(s>=e)
        return;

    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int n=6;
    // int arr[]={10,9,1,3,6,2};
    shuffle(arr,0,n-1);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
