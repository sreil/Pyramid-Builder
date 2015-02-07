#include <iostream>

using namespace std;

int main()
{
   int rows;
   int a;
   int b;
   int c = 0, count = 0,count1=0;  

   cout << "Welcome to Pyramid builder 2001, the game where there's no limit to how big you can make your pyramid! " << endl;
   cout << "Please tell me how many rows you want your pyramid to be " << endl;
   cin >> rows;

   if(rows==0){
        cout << "Pretty bad pyramid!";
   }
   if(rows>=10){
    cout << "They should call you King Khufu the way you are creating pyramids!  Good job! " << endl;
   }
   for(a = 1; a <= rows; a++)
   {
      for(b = 1; b <= rows-a; b++)
      {
         cout<<"  ";
         count++;
      }
      while(c!=2*a-1)
      {
            if (count<=rows-1)
            {
              cout<<"*"<<" ";
              ++count;
            }
            else
            {
               ++count1;
               cout<<"*"<<" ";
            }
           c++;
        }
      count1 = count= c = 0;
      cout<<"\n";
    }
    return 0;
}
