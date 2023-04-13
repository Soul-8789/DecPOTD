//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}




// } Driver Code Ends


string sort(string s){
    //complete the function here
    // map<char,int> mp;
    // for(auto x:s)
    // {
    //     mp[x]++;
    // }
    // string res="";
    // for(auto x:mp)
    // {
    //     int t=x.second;
    //     for(int i=0;i<t;i++)
    //     {
    //         res+=x.first;
    //     }
    // }
    // return res;
    sort(s.begin(),s.end());
    return s;
}