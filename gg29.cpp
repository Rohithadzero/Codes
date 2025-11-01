#include <iostream>
using namespace std;
class mply
{
private:
   int a[100], pro = 1, n, max;

public:
   int multi();
   int chk_max(int);
   int read();
};
int mply ::multi()
{
   for (int i = 0; i < n; i++)
   {
      if (a[i] == 0)
      {
         break;
      }
      pro = pro * a[i];
   }

   chk_max(pro);
   cout << max;
   return 0;
}
int mply ::read()
{
   cout << "enter no of elements " << "\n";
   cin >> n;
   cout << "enter the elements " << "\n";
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }

   return 0;
}
int mply ::chk_max(int u)
{
   max = 1;
   if (u > max)
   {
      max = u;
   }
   return max;
}
int main()
{
   mply t;
   t.read();
   t.multi();
}