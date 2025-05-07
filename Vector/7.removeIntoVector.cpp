#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> v1{10};
  v1.push_back(20);
  v1.push_back(30);
  for (int i = 4; i <= 10; i++)
  {
    v1.push_back(10 * i);
  }

  // remove data from 3rd index
  v1.erase(v1.begin() + 3);
  for (int i = 0; i < v1.size(); i++)
  {
    cout << "i: " << i << ": " << v1[i] << endl;
  }
  cout << "\nCapacity of v1: " << v1.capacity() << "\tSize of v1: " << v1.size() << endl;

  cout << "\n**************************** Remove Data in Range ***************************" << endl;
  // remove data in range from 3rd index to 7th index
  v1.erase(v1.begin() + 3, v1.begin() + 7);
  for (int i = 0; i < v1.size(); i++)
  {
    cout << "i: " << i << ": " << v1[i] << endl;
  }
  cout << "\nCapacity of v1: " << v1.capacity() << "\tSize of v1: " << v1.size() << endl;

  return 0;
}

/*
  Output:

  i: 0: 10
  i: 1: 20
  i: 2: 30
  i: 3: 50
  i: 4: 60
  i: 5: 70
  i: 6: 80
  i: 7: 90
  i: 8: 100

  Capacity of v1: 16      Size of v1: 9

  **************************** Remove Data in Range ***************************
  i: 0: 10
  i: 1: 20
  i: 2: 30
  i: 3: 90
  i: 4: 100

  Capacity of v1: 16      Size of v1: 5

*/