#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >>n;
    vector <int> array(n);
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    sort(array.begin(),array.end());
    for (auto now : array) cout<<now<<" ";
    return 0;
}