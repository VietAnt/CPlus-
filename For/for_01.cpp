#include<iostream>
using namespace std;

//* In ra các sô theo thứ tự 1-10 theo thứ tự tăng dần
int main(){
     int i, start, end;
     
     start = 1;
     end   = 10;

    cout<<"In ra cac so theo thu tu tang dan : \n";
    for(i= start; i <= end; i++ )
    {
       cout << i << endl;
    }
   
    return 0; 
}