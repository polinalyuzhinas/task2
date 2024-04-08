#include <iostream>
using namespace std;

int fib(int n) {
    int member_1 = 0, member_2 = 1, member_i;
    for (int i = 1 ; i < n ; i++) {
      member_i = member_1 + member_2;
      member_2 = member_1;
      member_1 = member_i;
    }
    return member_i;
}


int main()
{
    int n;
    cout << "Hello world!\n";
    cout << "Input the number of the Fibonacci sequence members you want to know: "; cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << "th member of the Fibonacci sequence - " << fib(i) << endl;
    }
}
