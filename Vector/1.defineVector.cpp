#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> vi{10, 19, 18};
  vector<string> vs{"Prashant", "Yadav"};
  vector<string> vs1{"Aditya", "Yadav"}; // set the capacity of vector 4 and intialize value in 1st place
  vector<char> vc(5);                    // set the capacity of vector 5
  vector<char> vc1(4, 'a');              // set the capacity of vector 4 and intialize value in 1st place

  cout << "First value is: " << vi[1];
  cout << "\nFirst string is: " << vs[1];
  cout << "\nFirst char is: " << vc[1];
  cout << "\nFirst char1 is: " << vc1[3];

  cout << "\nCheck Char Data: " << (vs == vs1);

  return 0;
}

/*
  Output:
  First value is: 19
  First string is: Yadav
  First char is:
  First char1 is: a
  Check Char Data: 0
*/