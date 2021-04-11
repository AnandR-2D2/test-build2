#include <iostream>

extern int alt();
int main (int argc, char* argv[])
{
  using namespace std;
  if(argc > 2) {
    cout << "Too many options entered! Don't know what to do. Quitting" << endl;
    return 1;
  }
  else if (argc < 2) { 
    cout << "Enter your name!" << endl;
    return 1;
  }
  cout << "Hello, " << argv[1] << "!\n";
  cout << "Sum of 1st 10 numbers is: " << alt() << endl;
}
