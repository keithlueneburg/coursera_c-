/* X  Convert this program to C++
*  X  change to C++ io
*  :) change to one line comments
*  X  change defines of constants to const
*  X  change array to vector<>
*  X  inline any short function
*/

#include <iostream>
#include <vector>

using namespace std;

const int N = 40;

inline void sum(int &p, vector<int> d) {
    p = 0;
    for(int i = 0; i < d.size(); ++i) {
        p = p + d[i];
    }
}


int main() {
    int accum = 0;
    vector<int> data(N);

    for(int i = 0; i < N; ++i) {
        data[i] = i;
    }

    sum(accum, data);

    cout << "sum is " << accum << endl;
    return 0;
}