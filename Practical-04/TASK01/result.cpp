#include<iostream>
#include "first.h"
#include "second.h"

using namespace std;

int main()
{
   cout<<first::add(5,7)<<"\n";
   cout<<second::add(23.5,26.5)<<"\n";

}
