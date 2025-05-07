#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v1{10, 55, 9, 18, 1, 15, 6};

  cout << "\nBefore Sort Data\n";
  for (int i = 0; i < v1.size(); i++)
  {
    cout << v1[i] << " ";
  }

  for (int i = 0; i < v1.size() - 1; i++)
  {
    for (int j = 0; j < v1.size() - i - 1; j++)
    {
      if (v1[j] > v1[j + 1])
      {
        int temp = v1[j];
        v1[j] = v1[j + 1];
        v1[j + 1] = temp;
      }
    }
  }

  cout << "\n\nAfter Sort Data\n";
  for (int i = 0; i < v1.size(); i++)
  {
    cout << v1[i] << " ";
  }

  cout << endl;

  return 0;
}

/*
  Output:

  Before Sort Data
  10 55 9 18 1 15 6

  After Sort Data
  1 6 9 10 15 18 55
*/