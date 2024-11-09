#include<iostream>
using namespace std;
int main() { 
 int n;
 int sum = 0;
 int i = 1;

    cout << "Enter a number ";
    cin >> n;

    while (i <= n) {
        if (i%2 == 1) {
            sum += i;
        }
        i++;
    }

    cout << "The sum of all odd numbers between 1 and " << n << " is: " << sum << endl;

return 0;
}