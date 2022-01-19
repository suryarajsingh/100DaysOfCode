#Code Link:- https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055

#solution:-

// C++ program to check whether the
// given number is Buzz Number or not.
#include <cmath>
#include <iostream>
using namespace std;

// function to check BUzz number.
bool isBuzz(int num)
{
	// checking if the number
	// ends with 7 and is divisible by 7
	return (num % 10 == 7 || num % 7 == 0);
}

// Driver method
int main(void)
{
	int i = 67, j = 770;
	if (isBuzz(i))
		cout << "Buzz Number\n";
	else
		cout << "Not a Buzz Number\n";
	if (isBuzz(j))
		cout << "Buzz Number\n";
	else
		cout << "Not a Buzz Number\n";
}
