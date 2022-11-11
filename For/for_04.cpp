//*->In bảng nhân bất kỳ từ 1->10, hiển thị ra kết quả

#include<iostream>
using namespace std;
#include <iomanip>
int main(){
     int i, n;

     n = 6;
     cout<<"Bang nhan : "<<endl;

     for(i = 1; i<= 10; i++)
     {
          cout<<setw(2) << n << "x" <<setw(2)
          << i << "=" <<setw(2) << n*i <<endl;

     }
}