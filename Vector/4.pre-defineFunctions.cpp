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

  cout << "\nValue At Index->3: " << v1.at(3) << endl; // geting the 3 index value using "at"

  cout << "\nFirst Value is: " << v1.front() << endl; // geting the first value
  cout << "Last Value is: " << v1.back() << endl;     // getting the last value

  return 0;
}

/*
  Value At Index->3: 40

  First Value is: 10
  Last Value is: 70
*/