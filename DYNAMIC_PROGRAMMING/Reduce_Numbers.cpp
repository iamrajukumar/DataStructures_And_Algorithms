
// reduce a number to 1 by using one of three operatio----
//  1.divide by 3 if divisible
//  2.divide by 2 if divisible
//  3.subtract the number by 1
//  find the minimum number of operation 

#include<bits/stdc++.h>
using namespace std;
int memo[10000];
int reduce_num_topdown(int n){
    if(n==1)
        return 0;
    if(memo[n]!=(-1))
        return memo[n];

    int q1=INT_MAX;
    int q2=INT_MAX;
    int q3=INT_MAX;

    if(n%3==0){
        q1=1+reduce_num_topdown(n/3);
    }
    if(n%2==0){
        q2=1+reduce_num_topdown(n/2);
    }
    q3=1+reduce_num_topdown(n-1);
    memo[n]=min(q1,min(q2,q3));
    return memo[n];
}


int reduce_num_bottomup(int n){
    int vis[10000];
    vis[0]=0;
    vis[1]=0;
    vis[2]=1;
    vis[3]=1;

    
    for(int i=4;i<=n;i++){
        int q1=INT_MAX;
        int q2=INT_MAX;
        int q3=INT_MAX;
        if(i%3==0){
            q1=1+vis[i/3];
        }
        if(i%2==0){
            q2=1+vis[i/2];
        }
        q3=1+vis[i-1];
    //    cout<<q1<<" "<<q2<<" "<<q3<<endl;
        vis[i]=min(q1,min(q2,q3));
    }
    return vis[n];
}









int main(){
    int n;
    cin>>n;
    fill(memo,memo+n+1,-1);
    cout<<reduce_num_topdown(n)<<endl;
    cout<<reduce_num_bottomup(n)<<endl;
}
