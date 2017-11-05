
#include <iostream>
#include <complex> 
#include <cmath>
using namespace std;
typedef std::complex<float> complexFloat;
int main()
{
	int a,b,c;
	cout<<"Enter a, then b, and then c:"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	complexFloat x1 = (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
	complexFloat x2 = (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
	cout<<"The roots are:\n"
		<<x1.real()<<" "<<x1.imag()<<" "
		<<x2.real()<<" "<<x2.imag()<<" "
		<<endl;
    return 0;
}
