#include <iostream>
using namespace std;

int main()
{
    int fNum, sNum, sum;

    cout << "Enter two integers: ";
    cin >> fNum >> sNum;

    // sum of two numbers in stored in variable sum
    sum = fNum + sNum;

    // Prints sum
    cout << fNum << " + " <<  sNum << " = " << sum;

    return 0;
}
