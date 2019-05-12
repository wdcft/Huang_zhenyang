#include <iostream>

using namespace std;

int main()
{
   unsigned int values[5];
   unsigned int SIZE = 5;
   for(unsigned int i = 0;i < SIZE;i++)
   {
       values[i] = 2 + i * 2;
       cout << values[i] << " ";
   }
   cout << endl;//a

   unsigned int *vPtr = &values[0];//b

   for(unsigned int j = 0;j < SIZE;j++)
   {
       cout << values[j] << " ";
   }
   cout << endl;//c

   unsigned int a = values[0];
   vPtr = &a;//d1
   vPtr = &values[0];//d2

   for( unsigned k = 0;k < SIZE; k++)
   {

       cout << *(vPtr++) << " ";
   }
   cout << endl;//e

   for(unsigned int l = 0;l < SIZE; l++)
   {
       cout << *(&values[l]) << " ";
   }
   cout << endl;//f


   for(unsigned int p = 0;p < SIZE; p++)
   {
       vPtr = &values[p];
       cout << vPtr[0] << " ";

   }
   cout << endl;//g

   cout << values[4] << " " << *(values + 4) << " " << vPtr[0] << " " << *(&values[4]);//h
   cout << endl;
}
