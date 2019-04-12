#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

    int n;
    while (true) {
	double pi = 0;
	cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;
	cin >> n;
	if (n != -1) {
            for (int i=1; i<=n;i++) {
	        pi += pow(-1.0,i) / (2*i+1);
	    }
	    pi = (pi + 1)*4;

	    if (n != 0)
                cout << "The approximate value of pi using "<<n+1<<" terms is: "<<pi<<endl;
	    else
                cout << "The approximate value of pi using "<<n+1<<" term is: "<<pi<<endl;

}

        else if (n == -1)
	    return 0;
	    }
      return 0;
	    }
