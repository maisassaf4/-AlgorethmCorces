#include <iostream>

#include <chrono>

using namespace std;

typedef long long ull,

ull iterative Factorial(int);

ull recursiveFactorial(int);

int main()

{

}

int num,

cin >> num;

// iterative calculation

auto start chrono high_resolution_clock.now();

cout << iterativeFactorial(num) << endl;

auto end chrono: high_resolution_clock.now();

3/2

auto duration chrono duration_cast<chrono microseconds(end-start);

cout << "iterativeFactorial of"<<num <<< "is <<< duration.count() << "\n";

// recursive calculation

start chrono high_resolution_clock.now();

cout << recursiveFactorial(num) << endl;

end chrono high_resolution_clocknow();

duration chrono duration_cast<chrono microseconds(end-start),

cout << "recursiveFactorial of"<<num <<"is" duration.count() << "\n";

return 0;

ull iterative Factorial(int n)

{

}

ull sum = 1;

while (n)

sumn-

return sum

ull recursiveFactorial(int n) (

if (n <= 1)

return 1;

return n recursiveFactorial(n-1);