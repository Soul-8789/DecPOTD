class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int rem=n*0.25;
        map<int,int> mp;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:mp){
            int fir=it.first;
            int sec=it.second;
            if(sec>rem){
                return fir;
            }
        }
        return -1;
    }
};