//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int LIS(int H[],int n){
      vector<int>temp;
      temp.push_back(H[0]);
      for(int i=0;i<n;i++){
          if(H[i]>temp.back()){
              temp.push_back(H[i]);
          }
          else {
              int idx=lower_bound(temp.begin(),temp.end(),H[i])-temp.begin();
              temp[idx]=H[i];
          }
      }
      return temp.size();
  }
    int removeStudents(int H[], int N) {
        // code here
        int seqLen=LIS(H,N);
        return N-seqLen;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends