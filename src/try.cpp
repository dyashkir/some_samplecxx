#include <iostream>
using namespace std;
void f(int gfunc(int a,int b),int x, int y)
{
   int u = gfunc(x,y);
   cout<<u;
}

int g(int x,int y)
{
     return x+y;
}

int main()
{
    int x = 2;
    int y = 7;
    f(g,x,y);
}
