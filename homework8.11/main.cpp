#include <iostream>

using namespace std;

int main()
{
  int *number;
  cout << *number << endl;;//a

   long double *realPtr;
   long double *integerPtr;
  integerPtr = realPtr;//b
  cout << realPtr << " " << integerPtr << endl;

  int *x,y;
  x = &y;//c
  cout << *x << endl;

  char s[] = "this is a character array";
  for(int i = 0;*(s + i)!= '\0'; ++i)
    cout << *(s + i) << " ";
  cout << endl;//d

  short *numPtr,result;
  auto *genericPtr = numPtr;
  result = *genericPtr + 7;//e

  double z = 19.34;
  double *zPtr;
  zPtr = &z;
  cout << *zPtr << endl;
  return 0 ;
}
