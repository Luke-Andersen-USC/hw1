#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

#include "ulliststr.h"

//Use this file to test your ulliststr implementation before running the test suite

int main(int argc, char* argv[])
{
  ULListStr list = ULListStr();

  list.push_front("alo");
  list.push_front("i");
  list.push_front("exp");
  list.push_front("ist");
  list.push_front("il");
  list.push_front("frag");
  list.push_front("i");
  list.push_front("cal");
  list.push_front("er");
  list.push_front("sup");

  cout << list.get(0) << endl;
  cout << list.get(1) << endl;
  cout << list.get(2) << endl;
  cout << list.get(16) << endl;
}
