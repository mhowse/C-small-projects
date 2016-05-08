/**
*Fizzbuzz.cpp
*mhowse 2016 
*
*
*/

#include <iostream>

using namespace std;

/** The classic fizz buzz problem.Print numbers from 1 *to 100. If the number is a multiple of 3, print "Fizz" *instead. If it is a multiple of 5 print "Buzz", if both, *print "FizzBuzz".
*/

int main (){

for(int i=1; i<101; i++){
if( (i%3)==0){
cout<<"Fizz";
}
if( (i%5)==0){
cout<<"Buzz";
}
else
cout<<i<<"\n";

}

return 0;
}