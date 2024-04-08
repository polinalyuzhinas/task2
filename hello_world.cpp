#include <iostream>
using namespace std;

int fib(int n) {
        if (n <= 0) {
                return -1;
        }
        else if (n == 1) {
                return 0;
        }
	else if (n == 2) {
		return 1;
	}
        else {
                return fib(n-2) + fib(n-1);
        }
}

int main()
{
    int n;
    cout << "Hello world!\n";
    cout << "Input the number of the member of the Fibonacci sequence you want to know: "; cin >> n;
    cout << n << "th member of the Fibonacci sequence - " << fib(n) << endl;
}

