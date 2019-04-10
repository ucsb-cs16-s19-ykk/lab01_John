/*
Code originally by John Chen, 2019
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int smallest_of_two(int n1, int n2);

int main(int argc, char *argv[]) {
   int result;
   int a = atoi(argv[1]);
   int b = atoi(argv[2]);
   int c = atoi(argv[3]);
   int d = atoi(argv[4]);
   result = smallest_of_two(smallest_of_two(a,b),smallest_of_two(c,d));
   cout<<result<<endl;
   return 0;
}

int smallest_of_two(int n1, int n2) {

    if (n1 > n2)
	return n2;
    else
	return n1;
}
