#include<iostream>
#include<string>
using namespace std;
int main()
{
   string a,b;
   cout<<"Enter the first string";
   getline(cin,a);
   cout<<"Enter the second string";
   getline(cin,b);
   
   if (a.length() !=b.length())
   {
      cout<<"Not equal";
   }
   else
  {
    int flag=0;
    for(int i=0;i<a.length(); i++)
       {
          if(a[i]!=b[i])
            {flag=1;
            break;}
       }
     if(flag==1)
      {
        cout<<"Not Equal";
      }
     else
      {
         cout<<"Equal";
      }
  }

return 0;
}
