#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand( static_cast< unsigned int >( time(0)) );
   array < int,20 > number;
   array < int,91 > frequency ={0};
   for(size_t i = 0;i < number.size(); i++)
   {
       number[i] = 11+rand() % 90;
   }
   for(size_t k = 0;k < number.size(); k++)
   {
     ++frequency[number[k]];
   }
   for(size_t l = 0;l < number.size(); l++)
   {
       if(frequency[l] != 1)
       {
           cout << number[l] << " ";
       }

   }



}
