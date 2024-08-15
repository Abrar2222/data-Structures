#include <iostream>

using namespace std;

// Function to calculate and print the average of numbers in an array
void printAverage(const int numbers[], int size) {
    if (size == 0) {
        cout << "Array is empty, cannot calculate average." << endl;
        return;
    }

    int sum = 0;

   
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }

  
    double average = static_cast<double>(sum) / size;

   
    cout << "The average of the numbers is: " << average << endl;
}

int main() {
   
    int numbers[10] = {5, 11, 25, 19, 35, 30, 33, 20, 46, 50};

  
    printAverage(numbers, 10);

    return 0;
}
