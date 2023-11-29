#include <bits/stdc++.h>
using namespace std;


void fn(vector<string> arr) {
    int l = arr.size();
    for(int i=0; i<l; i++) {
        for(int j=i+1; j<l-1; j++) {
            if (arr[i].compare(0, arr[j].size(), arr[j]) == 0 || arr[j].compare(0, arr[i].size(), arr[i]) == 0) {
                cout << "BAD PASSWORD" << endl;
                return;
            }
        }
    }
    cout << "GOOD PASSWORD" << endl;
}

int main() {
    string user;
    getline(cin, user);
    string s;
    stringstream ss(user);
    vector<string> arr;
    while (getline(ss, s, ' ')) {
        arr.push_back(s);
    }
    
    fn(arr);
    return 0;
}
                                                                                                                            
