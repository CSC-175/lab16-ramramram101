#include <iostream>
#include "./lab16.cpp"
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integer values you want to find the GCF for: ";
    cin >> a >> b;
    int result = gcf(a, b);
    cout << "The greatest common factor of " << a << " and " << b << " is " << result << endl;
    return 0;
}
