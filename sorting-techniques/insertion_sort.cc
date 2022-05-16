#include <vector>

std::vector<int> insertionSort(std::vector<int> arr)
{
    int i = 0, j = 0, element = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        element = arr[i];
        j = i - 1;
        while (j > -1 && arr[j] > element)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = element;
    }
    return arr;
}

