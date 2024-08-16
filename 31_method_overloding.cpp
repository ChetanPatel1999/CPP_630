#include <iostream>
using namespace std;
class display
{
public:
  void disp(int a)
  {
    cout << a << endl;
  }
  void disp(float a)
  {
    cout << a << endl;
  }
  void disp(string a)
  {
    cout << a << endl;
  }
  void disp(char a)
  {
    cout << a << endl;
  }
};

int main()
{
  display d1;
  d1.disp(12.89f);
  d1.disp("hi bro");
  d1.disp('U');
  return 0;
}