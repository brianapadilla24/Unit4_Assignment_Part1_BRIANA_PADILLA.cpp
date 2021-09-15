/* Briana Padilla, COSC 1436-57001, Replit.com, This program is a loop program that lets you enter a value and find specific equatons for that value. */

#include <iostream>
using namespace std;
int main() {

double n = 0;
int counter = 0; //starting point

while (n != -1.0) //exit condition

{
cout<<"     Please enter number (-1 to exit) "<<endl;
cin>>n;   //if you enter a char (e.g. j) the program will loop

//(n*n)
cout<<n<<"  Multiplied by "<<n<<"  is "<<n * n<<endl;
//(n/n)
cout<<n<<"  Divided by "<<n<<"  is "<<n/n<<endl;
//Output (n+3)/5
cout<<"The output of (n+3)/5 is "<<(n+3)/5<<endl;
//Output [((n+3)/5)+ ((n+7)/2)]
cout<<"The out of [((n+3)/5)+ ((n+7)/2)] is "<<((n+3)/5)+ ((n+7)/2)<<endl;
counter ++;
cout<<" This program is executed "<<counter<<" times "<<endl;
}

return 0;
}