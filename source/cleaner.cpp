#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
  if(argc != 3)
  {
    cout<<"Please use with 2 file\n";
    return 0;
  }
  ifstream s(argv[1], std::ifstream::in);
  ofstream r(argv[2], std::ofstream::out);
  char c;
  int p = 0, t = 0;
  while (s >> c)
  {
    if((c == '>') || (c == '>') || (c == '+') || (c == '-')
        || (c == '[') || (c == ']') || (c == ',') || (c == '.'))
    {
      r<<c;
      p++;
      t++;
    }
    if(p == 80)
    {
      r<<'\n';
      p = 0;
    }
  }
  return 0;
}
