#include<iostream>
using namespace std;
 
int main()
{
   string str;
   getline(cin,str);

   int len =str.length();
   int count=0;
   for(int i=0; i<=len/2; i++)
 {
      if (str[i] !=str[len-1-i])
    {
    count=1;
       break;
    }
 }
  if(count=1)
   {
     cout<<"Given String is a Palndroom";
   }
  else
   {
     cout<<"Given String is not a Palndroom";
   }
  return 0;

}
