#include <iostream>
using namespace std;

int main(){
     int LA[] = {1, 3, 5, 7, 8};
     int item = 10, k = 3, n = 5;
     int i= 0,
     j = n;

     cout<<"Danh sach cac phan tu trong mang ban dau:" << "\n";
     for(i=0; i<n ; i++)
     {
          cout<<"LA["<<i<<"]  = "<< LA[i]<<"\n"; 
     }

       
     n = n + 1 ;
     while (j >= k)
     {
        LA[j+1] = LA[j];
        j = j - 1; 
     }
   

     LA[k] = item;

     cout<<"Danh sach cua mang sau khi chen hoat dong : "<<"\n";
     for(i=0; i<n; i++){
          cout<<"LA["<<i<<"] = " << LA[i]<<"\n";
     }
}