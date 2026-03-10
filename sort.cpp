#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Using std::sort to sort the vector
    sort(arr, arr+n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}
