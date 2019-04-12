#include <iostream>
#include <cstdlib>
using namespace std;

int smallest_of_two(int n1, int n2);

int main(int argc, char *argv[]) {
  if (argc != 5) {
    cerr << "Usage: " << argv[0] <<" num1 num2 num3 num4"<<endl;
    cerr << " Prints smallest of the four numbers"<<endl;
    exit(1);
  }
  int small_ab, small_cd;
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);
  small_ab = smallest_of_two(a,b);
  small_cd = smallest_of_two(c,d);
  cout << smallest_of_two(small_ab, small_cd)<<endl;
  
  return 0;
}

int smallest_of_two(int n1, int n2) {
  if (n1>n2) 
    return n2;
  else
    return n1;
}
