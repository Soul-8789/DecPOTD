//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  int binfun(int v[],int low,int high,int x)
  {
      if(low>high){
          return -1;
      }
      int mid=low+(high-low)/2;
      if(v[mid]==x) return mid;
      else if(x<v[mid]) return binfun(v,low,mid-1,x);
      return binfun(v,mid+1,high,x);
  }
    int binarysearch(int v[], int n, int x) {
        // code here
        int low=0;
    int high=n-1;
    // while(low<=high)
    // {
    //     int mid=low+(high-low)/2;
    //     if(v[mid]==x) return mid;
    //     else if(x<v[mid]) high=mid-1;
    //     else low = mid+1;
    // }
    // return -1;
    return binfun(v,low,high,x);
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