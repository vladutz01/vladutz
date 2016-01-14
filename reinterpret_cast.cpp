#include <iostream>
#include <exception>

using namespace std;

class A { /* ... */ };
class B { /* ... */ };
int main()
{

	A * a = new A;
	B * b = reinterpret_cast<B*>(a);

}