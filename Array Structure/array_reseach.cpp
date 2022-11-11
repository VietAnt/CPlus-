#include<iostream>
using namespace std;


int main()
{
     int LA[] = {1, 3, 5, 7, 8};
     int item = 5, n = 5;
     int i = 0,  j = 0;

     cout<<"Danh sach phan tu trong mang ban dau la : "<<"\n";
      
      for(i = 0; i < n; i++)
      {
          cout<<"LA["<<i<<"] = "<< LA[i] <<"\n"; 
      }

      while ( j < n)
      {
          if(LA[j] == item)
          {
               break;
          }

          j = j + 1;
      }
      
      cout<<"Tim thay phan tu "<<item <<" tai vi tri "<<j+1<<"\n";


}