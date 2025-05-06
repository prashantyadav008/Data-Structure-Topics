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

  v1.pop_back();
  v1.pop_back();
  v1.pop_back();

  vector<int>::iterator it = v1.begin();

  v1.insert(it + 3, 35);
  for (int i = 0; i < v1.size(); i++)
  {
    cout << "i: " << v1[i] << endl;
  }
  cout << "\nCapacity of v1: " << v1.capacity() << "\tSize of v1: " << v1.size() << endl;

  return 0;
}

/*
  Output:
  i: 10
  i: 20
  i: 30
  i: 35
  i: 40
  i: 50
  i: 60
  i: 70

  Capacity of v1: 16      Size of v1: 8

*/