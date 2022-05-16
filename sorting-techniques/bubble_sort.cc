
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// optimized algorithm for bubble sort
vector<int> bubbleSort(vector<int> arr)
{
    bool swapped = false;
    int i = 1, temp = 0, count = 0;
    do
    {
        swapped = false;
        for (i = 1; i < arr.size() - count; i++)
        {
            if (arr[i - 1] > arr[i])
            {
                temp = arr[i], arr[i] = arr[i - 1], arr[i - 1] = temp;
                swapped = true;
            }
        }
        count++;
    } while (swapped);
    return arr;
}

void countSwaps(vector<int> a)
{
    int temp = 0, count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size() - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                count++;
                temp = a[j + 1], a[j + 1] = a[j], a[j] = temp;
            }
        }
    }
    cout << "Array is sorted in " << count << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[a.size() - 1] << endl;
}

int main()
{
    for (auto element : bubbleSort({12, 2, 1, 6, 3, 8, 4}))
    {
        cout << element << " ";
    }
    return 0;
}