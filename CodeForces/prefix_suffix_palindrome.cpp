#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string r) 
{ 
    string p = r; 
  
    // reverse the string to 
    // compare with the  
    // original string 
    reverse(p.begin(), p.end()); 
  
    // check if both are same 
    return (r == p); 
} 





string solvepalindrome(string s){
    int l = s.length(); 
  
    // check all prefix substrings 
    int i; 
    for (i = l; i>=2; i--) { 
        if (isPalindrome(s.substr(0, i))) 
           return s.substr(0,i); 
    } 
      
    // If we did not find any palindrome prefix 
    // of length greater than 1. 
    //if (i == (l+1)) 
    return s.substr(0,1); 

}







int main(){


	freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n=str.length();
        
        int k=0;
        while(k<=(n/2-1)){
            if(str[k]==str[n-k-1]){
                k++;
            }
            else{
                break;
            }
        }

        string a=str.substr(0,k);
        cout<<a;
        
        int l=k;
        int len=n-2*k;

        string s=str.substr(l,len);
        
        if(len>0){
            string b=solvepalindrome(s);
            reverse(s.begin(),s.end());
            string c=solvepalindrome(s);

            if(b.length()>c.length()){
                cout<<b;
            }
            else{
                cout<<c;
            }
        }

        reverse(a.begin(),a.end());
        cout<<a<<endl;





    }





}