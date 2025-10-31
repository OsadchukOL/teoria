#include <iostream>
#include <cstdlib>  
using namespace std;

int main() {
    srand(999); 

    const int SIZE = 10;
    int arr[SIZE];

    cout << "--------------------------------------:\n";
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 100;
        cout << arr[i] << "\t";
        if ((i + 1) % 5 == 0)  
            cout << "\n";
    }

    
    int minElem = arr[0];
    int maxElem = arr[0];

    for (int i = 1; i < SIZE; ++i) {
        if (arr[i] < minElem)
            minElem = arr[i];
        if (arr[i] > maxElem)
            maxElem = arr[i];
    }

    
    cout << "\n min element: " << minElem << endl;
    cout << "Max ELEM: " << maxElem << endl;

    return 0;
}
