#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "You entered " << n << " indices!" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "loading ..." << endl;
    
    cout << "After reversing each index at even positions: ";
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            int index = arr[i], reverse = 0;
            while (index > 0) {
                reverse = reverse * 10 + (index % 10);
                index /= 10;
            }
            arr[i] = reverse;
        }
        cout << arr[i] << " ";
    }
    cout << endl << "loading ..." << endl;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Total summation: " << sum << endl;
    cout << "_________________" << endl;
    cout << "Done, Thanks" << endl;
    
    return 0;

}