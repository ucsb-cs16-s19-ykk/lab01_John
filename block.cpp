#include <iostream>
using namespace std;

int main() {
  while (true) {
    int num_row, num_col;
    cout<<"Enter number of rows and columns:"<<endl;

    cin>>num_row>>num_col;
    if ((num_row == 0)&(num_col==0)) break;
      else {
	for (int i = 0; i < num_row; i++) {
	    for (int j = 0; j < num_col; j++) 
		cout << "X.";
	    cout<<"\n";
	}
	}
}
  return 0;
}
