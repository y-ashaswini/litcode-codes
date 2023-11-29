#include <bits/stdc++.h>
using namespace std;

int max_num = INT_MIN;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    int m;
    cin >> m;
    string user;
    getline(cin, user);
    
    
    for(int i=0; i<m; i++) {
        
        string user;
        getline(cin, user);
        string s;
        stringstream ss(user);
        vector<string> temp;
        while (getline(ss, s, ' ')) {
            temp.push_back(s);
        }
        
        vector<int> comm(3, 0);
        
        for(int k=0; k< 3; k++) {
            comm[k] = stoi(temp[k]);
            // cout << comm[k] << " ";
        }
        
        // cout << endl;
        
        // comm[0] = left
        // comm[1] = right
        // comm[2] = to add
        
         for(int l = comm[0]-1; l <= comm[1]-1; l++) {
            arr[l] += comm[2];
        }
       
    }
    
    // find max in array
    for(int k : arr) {
        // cout << k << " ";
        max_num = max(max_num, k);
    }
    
    cout << max_num << endl;
    return 0;
}
                                                                                                                            
