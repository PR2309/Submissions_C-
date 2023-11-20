#include<bits/stdc++.h>
using namespace std;
int main(){
  int numerator,denominator;
  cout<<"Enter values of numerator and the of denominator:\n";
  cin>>numerator>>denominator;
  try{
    if(denominator==0){
      cout<<"Exception caught: ";
      throw denominator;}
    else{
      int result=(numerator/denominator);}
  }
  catch(int a){
    cout<<"Denominator shouldn't be zero.";}
  return 0;}
