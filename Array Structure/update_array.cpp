#include<iostream>
using namespace std;

int main(){

     int LA[] = {1, 3, 5, 7, 8};
     int k = 3, n = 5, item = 10;
     int i, j;

     cout<<"Danh sach cac phan tu trong mang ban dau : "<<"\n";

     for(i = 0; i <n; i++ )
     {
          cout<<"LA["<<i<<"] = "<< LA[i] <<"\n";
     }

     LA[k-1] = item;

     cout<<"Danh sach cac phan tu trong mang sau update : "<<"\n";
     for(i = 0; i<n ; i++)
     {
          cout<<"LA["<<i<<"] = "<< LA[i] <<"\n"; 
     }
}