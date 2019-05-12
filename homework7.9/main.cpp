#include <iostream>
#include <array>
#include <iomanip>

using namespace std;
const size_t rows = 2;
const size_t columns = 3;


int main()
{
   array < array < int,columns >,rows > t1;
   t1[1][2] = 0;
   cout << t1[1][2] << endl;

   array < array < int,columns >,rows > t2 = {0};
   cout << t2[0][0] << endl;

   array < array < int,columns >,rows > t3;
   for( size_t row = 0; row < t3.size(); row++)
    for( size_t columns = 0; columns <t3[ row ].size(); columns++)
   {
       t3[ row ][ columns ] = 0;
       cout << t3[ row ][ columns ] << " " ;
   }
   cout << endl;

   array < array < int,columns >,rows > t4 = {0};
   for( auto const &row : t4 )
   {
       for( auto const &element : row )
       {
           cout << element << " ";
       }
   }
   cout << endl;

   array < array < int,columns >,rows > t5;
   for( size_t row = 0; row < t5.size(); row++)
    for( size_t columns = 0; columns <t5[ row ].size(); columns++)
   {
       cout << "Please enter number: " << endl;
       cin >> t5[ row ][ columns ];
   }
   for( size_t row = 0; row < t5.size(); row++)
    for( size_t columns = 0; columns <t5[ row ].size(); columns++)
   {
       cout << t5[ row ][ columns ] << " ";
   }
   cout << endl;

   array < array < int,columns >,rows > t6;
   for( size_t columns = 0; columns < 3; columns++)
    cout << t6[1][columns] << " ";
   cout << endl;

   array < array < int,columns >,rows > t7;
   double smallest;
   smallest = t7[0][0];
   for( auto const &row : t7 )
   {
       for( auto const &element : row )
       {
           if( element < smallest)
            smallest = element;
       }
   }
   cout << "The smallest is " << smallest << endl;

   array < array < int,columns >,rows > t8;
   double totle = 0;
   for( size_t row = 0; row < 2; row++)
    totle = totle + t8[row][2];
   cout << "The sum of row[1][2] between row[2][2] is " << totle << endl;

   array < array < int,columns >,rows > t9;
   cout << setw(20) << "[0]" << setw(20) << "[1]" << setw(15) << "[2]" <<endl;
   for ( size_t row = 0; row < 2; row++)
   {
       cout << "\n[" << row << "]";

       for( size_t columns = 0;columns < 3; columns++)
        cout << setw(17) << t9[row][columns] << setw(10);

   }
   cout << endl;





}


