//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
   bool isvalid(int mid,int arr[],int k)
  {
      return arr[mid]<k?true:false;
  }


  // FFFFTTTTT

    int binarysearch(int arr[], int n, int k) {
        // code here
        int l=0,r=n-1;
        while(r-l>1)
        {
            int mid=l+(r-l)/2;
            if(isvalid(mid,arr,k)){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        if(arr[r]==k){
            return r;
        }
        if(arr[l]==k){
            return l;
        }
        else return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends