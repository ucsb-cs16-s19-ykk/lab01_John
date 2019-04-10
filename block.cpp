#include <iostream>
using namespace std;

int main() {
    int num_col,num_row;
    cout<<"Enter number of rows and columns:"<<endl;
    cin>>num_row>>num_col;
    for (int i = 0; i < num_row; i++) {
	for (int j = 0; j < num_col; j++) {
	    cout<<"X.";
	}
	cout<<"\n";
    }
    return 0;
}
