#include<iostream>
#include<iomanip>
using namespace std;

int main(){
     int i;

     cout<<"In ra cac so chan : "<<endl;
     for(i=1; i<=10; i++)
     {
          if(i%2 == 0)
          {
               cout<<i<<endl;
          }
     }
     return 0;
}