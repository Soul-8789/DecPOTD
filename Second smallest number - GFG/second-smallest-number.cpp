//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
      string secondSmallest(int s, int d){
        // code here 
         if(9*d<=s)return "-1";
        string str(d,'9');
        for(int i=0;i<d;i++){
            
            int val;
            if(i==0)val=1;
            else val=0;
            for( val;val<10;val++){
                if(s-val<=(d-i-1)*9)break;
            }
            s-=val;
            str[i]=val+'0';
        }
        
        int j=0;
        for(int i=d-1;i>=0;i--)if(str[i]>'0'){
            j=i-1;
            str[i]-=1;
            break;
        }
        for(;j>=0;j--){
            if(str[j]<'9'){
                str[j]+=1;
                sort(str.begin()+j+1,str.end());
                return str;
            }
        }
        return "-1"; 
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends