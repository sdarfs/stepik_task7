//Первая строка входных данных содержит количество элементов в массиве N ≤ 105.
//Далее идет N целых чисел, не превосходящих по абсолютной величине 109.
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
