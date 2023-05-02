//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
      bool canP(int mid,vector<int>&arr,int k){
        int per=0,sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum>=mid){
                per++;
                sum=0;
            }
        }
        return per>=k+1;
    }
    int maxSweetness(vector<int>& sweetness, int N, int K) {
    int low = INT_MAX;
    int high=0,mid;
    for(int i=0;i<N;i++){
        low=min(sweetness[i],low);
        high+=sweetness[i];
    }
    int ans=0;
    while(low<=high){
        mid=(low+high)/2;
        if(canP(mid,sweetness,K)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends