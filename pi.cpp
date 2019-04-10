#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    double pi=0;
    int n;
    cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;
    cin>>n;
    if (n!=-1) {
	for (int i = 1; i<=n; i++) {
            pi+=pow(-1.0,i)/(2*i+1);
	}
	pi = (pi+1)*4;
	cout<<"The approximate value of pi using "<<n<<"terms is: "<<pi<<endl;
	return 0;
     }
    else if (n == -1)
	return 0;
}
