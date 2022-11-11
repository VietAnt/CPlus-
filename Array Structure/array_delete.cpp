#include<iostream>
using namespace std;

//*->Hoạt động xóa phần tử từ mảng
int main(){
     int LA[] = {1, 3, 5, 7, 8};
     int k = 3,  n = 5;
     int i, j;

     cout<<"Danh sach phan tu trong mang ban dau : "<<"\n";

      for(i= 0; i < n; i++)
      {
          cout<<"LA["<<i<<"] = "<< LA[i]<<"\n";
      }

      j = k;

      while (j<n)
      {
          LA[j-1] = LA[j];
          j = j + 1;
      }
      
      n = n-1 ;

      cout<<"Danh sach phan tu mang sau khi xoa : "<<"\n";

      for(i = 0; i < n; i++)
      {
          cout<<"LA["<<i<<"] ="<< LA[i]<<"\n";  
      }

}