
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *ans=new int[2];
        int i=0;
        while(i<n){
        while(arr[i] !=(arr[arr[i]-1]) && i<n)
            swap(arr[i], arr[arr[i]-1]);
            i++;
        }
        for(int i=0; i<n; i++){
            if(arr[i] !=i+1){
                ans[0]=arr[i];
                ans[1]=i+1;
            }
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#