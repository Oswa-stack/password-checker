#include<iostream>
using namespace std;
int main()
{
  string passward;
  cout<< "enter your passward: ";
  cin>> passward;
    if(passward.length()<8){
        cout<< " weak passward! try again.";
    }
    else{
        cout<< "strong passward! welcome.";
    }
    return 0;
}