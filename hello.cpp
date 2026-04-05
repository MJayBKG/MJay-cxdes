#include <iostream>
using namespace std;

int main() {
    double x, count = 0;
    double mean = 0;
    double sum = 0;

    do {
        cin >> x;
        if (x == -1) break;  // Stop immediately if -1 is entered (don't add to sum/count)
        sum += x;
        count++;
        mean = sum / count;  // Update mean each time (optional, could move outside loop)
    } while (x != -1);

    cout << mean << endl;
    return 0;
}