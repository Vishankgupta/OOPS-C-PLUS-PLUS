#include<iostream>
#include<string>
using namespace std;
int main()
{
   string str= "Hello";
   string *ptr1=&str;
   
   str[4]='o';
   string *ptr2=&str;
   cout<<ptr1<<"  "<<ptr2;
   return 0;
}
