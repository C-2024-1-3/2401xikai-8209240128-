#include<iostream>
using namespace std;

int main() {
    int numbers[10];
    int distinctCount = 0;

    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        bool isDistinct = true;

       
        for (int j = 0; j < distinctCount; j++) {
            if (numbers[j] == num) {
                isDistinct = false;
                break;
            }
        }

        if (isDistinct) {
            numbers[distinctCount++] = num;
        }
    }

    for (int i = 0; i < distinctCount; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
