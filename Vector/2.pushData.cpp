#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> v1{10};
  cout << "Index Value->0: " << v1[0] << "\tCapacity of v1: " << v1.capacity() << endl; // capacity is used to get the total length of vector

  v1.push_back(20);
  cout << "Index Value->0: " << v1[0] << "\tIndex Value->1: " << v1[1] << "\tCapacity of v1: " << v1.capacity() << endl;

  v1.push_back(30);
  cout << "Index Value->0: " << v1[0] << "\tIndex Value->1: " << v1[1] << "\tIndex Value->2: " << v1[2] << "\tCapacity of v1: " << v1.capacity() << endl;

  for (int i = 4; i <= 10; i++)
  {
    v1.push_back(10 * i);
  }

  cout << "\nCapacity of v1: " << v1.capacity() << "\tSize of v1: " << v1.size() << endl; // size is used to get total element exist into v1

  return 0;
}

/*
  Output:

  Index Value->0: 10      Capacity of v1: 1
  Index Value->0: 10      Index Value->1: 20      Capacity of v1: 2
  Index Value->0: 10      Index Value->1: 20      Index Value->2: 30      Capacity of v1: 4

  Capacity of v1: 16      Size of v1: 10
*/