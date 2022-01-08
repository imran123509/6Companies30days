
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        vector<int> ans;
        multiset<int> st;
        for(int i=0; i<k; i++){
            st.insert(arr[i]);
        }
        ans.push_back(*st.rbegin());
        for(int i=k; i<n; i++){
            st.erase(st.find(arr[i-k]));
            st.insert(arr[i]);
            ans.push_back(*st.rbegin());
        }
        return ans;
    }
};
int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}