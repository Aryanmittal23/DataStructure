/* Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.
Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.

Constraints
0<= 'n' <=10000 */

#include<iostream>
using namespace std;

int main() {
// Write your code here
int evensum=0;
int oddsum=0;
int n;
cin>>n;
while(n>0){
int d=n%10;
n=n/10;
if(d%2==0){
evensum+=d;
}
else{
oddsum+=d;
}
}
cout<<evensum<<" " <<oddsum;
}