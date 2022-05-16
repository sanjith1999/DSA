#include <bits/stdc++.h>

using namespace std;

//TWO-WAY MERGING (M-WAY MERGING IS OF SIMILAR IDEA)
vector<int> mergeArr(vector<int> A, vector<int> B)
{
    int m = A.size(), n = B.size(), i = 0, j = 0, k = 0;
    vector<int> C;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
            C.push_back(A[i++]);
        else
            C.push_back(B[j++]);
    }
    for (; i < m; i++)
        C.push_back(A[i]);
    for (; j < n; j++)
        C.push_back(B[j]);
    return C;
}

int main()
{
    for (auto element : mergeArr({1, 2, 3}, {3, 4, 6}))
        cout << element << " ";
    cout << endl;
    cout << "CODE TERMINATION...!" << endl;
    return 1;
}