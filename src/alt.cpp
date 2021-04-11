#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

int alt()
{
  using namespace std;
  vector<int> v;
  v.reserve(10);
  generate_n(back_inserter(v), 10, [](){
      static int i=1;
      return i++;
      });
  return accumulate(v.begin(), v.end(), 0);
}
