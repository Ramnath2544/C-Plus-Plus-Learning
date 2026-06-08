#include <iostream>
using namespace std;

int main() {
    int arr[5];   // Array of fixed size 5

    cout << "Enter 5 elements:" << endl;

    // Taking input from the user
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    
    cout<<arr[i]<<" ";
    }
    // // Printing the array
    // cout << "\nYou entered: ";
    // for (int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // }

    return 0;
}
