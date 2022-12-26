#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int run[10];
class cricketer
{
public:
   string name;
   void getdata()
   {
      cout << "enter cricketer name";
      getline(cin, name);
      cout << "enter 10 match runs :" << endl;
      for (int i = 1; i < 11; i++)
      {
         cout << "Enter Match " << i << " : ";
         cin >> run[i];
      }
   }
};
class Betsmen : public cricketer
{
public:
   int total = 0;
   float average;
   int bestperfomans = 0;

   void gettotal()
   {
      for (int i = 1; i < 11; i++)
      {
         total += run[i];
      }
   }
   void getaverage()
   {
      average = total / 10;
      cout << "Average score is " << average << endl;
   }
   void getbestperfomans()
   {
      for (int i = 1; i < 11; i++)
      {

         if (run[i] > average)
         {
            cout << "best perforance score is " << run[i] << endl;
            bestperfomans++;
         }
      }
      cout << "best perfomanc of 10 match is" << bestperfomans;
   }
};

int main()
{
   Betsmen obj;
   obj.getdata();
   obj.gettotal();
   obj.getaverage();
   obj.getbestperfomans();
   getch();
   return 0;
}