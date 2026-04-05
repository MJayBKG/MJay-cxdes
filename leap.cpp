#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
  double tempc;
  double tempf;
  string c_f;
  cout <<" is your temp C/F" << endl;
  cin >> c_f ;
  if (c_f == "C" || c_f == "c" ){
      cin >> tempc ; 
      tempf = (tempc * 9/5) + 32 ;
      cout << "your F temp is : " << tempf << "˚F" << endl;
    }
 
 else if (c_f ==  "F" ||c_f == "f" ){
      cin >> tempf;
      tempc = (5*(tempf -32))/9 ;
      cout << "your C temp is : " << tempc <<"˚C" << endl;
    }
 else { 
   cout << "invalid temp input" << endl;
 }
 
  return 0;
}


