#include <bits/stdc++.h>
using namespace std;


int f(vector<int> arr) {
    int c = 0;
    for(int l=0; l<arr.size(); l++) {
        if(arr[l] == 0) {
            c++;
        }
        
        for(int r=l+1; r<arr.size(); r++) {
            // cout << "check from " << l << " to " << r << endl;
            int flag = false;
            for(int i=l; i<=r; i++) {
                if(arr[i] != 0) {
                    flag = true;
                    break;
                }
            }
            if(flag == false) {
                c++;
            }
        }
    }
    return c;
}


int main() {
    string user;
    getline(cin, user);
    vector<int> arr;
    for (char i: user) {
        if(i >= '0' && i <= '9') {
            arr.push_back(i - '0');
        }
    }
    
    cout << f(arr) << endl;
    return 0;
}
                                                                                                                            
