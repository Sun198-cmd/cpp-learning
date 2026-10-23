#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i=1;
    while (i<=5) {
        sum += i;
        cout << "i=" << i << "  sum=" << sum << endl;
        i++;
    }
    cout << "done, sum=" << sum << endl;
    return 0;
}
