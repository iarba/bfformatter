#include <iostream>
#include <fstream>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
using namespace std;
int r1, r2;
int check(char *f1, char *f2)
{
  char c;
  ifstream s1(f1, std::ifstream::in);
  while (s1 >> c)
  {
    if(c != '\n')
    {
      r1++;
    }
  }
  s1.close();
  ifstream s2(f2, std::ifstream::in);
  while (s2 >> c)
  {
    if(c == '#')
    {
      r2++;
    }
  }
  s2.close();
  if(r1 <= r2)
  {
    return r1;
  }
  return 0;
}
int main(int argc, char *argv[])
{
  if(argc != 4)
  {
    cout<<"Please use with 3 file\n";
    return 0;
  }
  int t = check(argv[1], argv[2]);
  if(!t)
  {
    cout<<"The pattern doesn't have enough positions for the source to fit in.\n";
    cout<<r2<<" < "<<r1<<'\n';
    return 0;
  }
  ifstream s(argv[1], std::ifstream::in);
  ifstream p(argv[2], std::ifstream::in);
  ofstream r(argv[3], std::ofstream::out);
  char c;
  int q;
  srand(time(NULL));
  while(p.get(c))
  {
    if(c == '#')
    {
      q = rand() % 100;
      c = '>';
      if(q<50)
      {
        c = '+';
      }
      if(q>80)
      {
        c = '-';
      }
      if(t)
      {
        c = '\n';
        while(c == '\n')
        {
          s.get(c);
        }
        t--;
      }
    }
    r<<c;
  }
  return 0;
}
