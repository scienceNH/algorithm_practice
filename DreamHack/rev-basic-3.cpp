#include <iostream>

using namespace std;

int main(void) {
    int arr[50] = {0x49, 0x60, 0x67, 0x74, 0x63, 0x67, 0x42, 0x66,
                    0x80, 0x78, 0x69, 0x69, 0x7b, 0x99, 0x6d, 0x88,
                    0x68, 0x94, 0x9f, 0x8d, 0x4d, 0xa5, 0x9d, 0x45};

    for (int i = 0; i < 24; i++){
        int k = (i ^ (arr[i] - 2 * i));
        cout << (char)k << " ";
    }

    return 0;
}