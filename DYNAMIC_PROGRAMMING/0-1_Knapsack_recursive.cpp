#include<bits/stdc++.h>
using namespace std;

int knapsack(int weight[],int value[],int w,int n){
    if(n==0 || w==0)
        return 0;

    if(weight[n-1]>w){
        return knapsack(weight,value,w,n-1);
    }

    int temp=max((value[n]+knapsack(weight,value,w-weight[n],n-1)),knapsack(weight,value,w,n-1));
    return temp;
}

int main(){
    int t;
    cin>>t;
    while(t--){

    int n,w;
    cin>>n>>w;

    int weight[n];
    int value[n];
    for(int i=0;i<n;i++)
        cin>>value[i];
    for(int i=0;i<n;i++)
        cin>>weight[i];

    cout<<knapsack(weight,value,w,n)<<endl;
    
    }

}