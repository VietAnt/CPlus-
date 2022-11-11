#include <iostream> 
#include <iomanip>
using namespace std; 
  
//*IN ra bang so 1->100
//* Gom 10 hang va 10 cot  
int main() {
   int i, j, count;
     
   cout<<"In ra bang : \n";
   for(i=1; i<= 10; i++){
     for( j= i; j<=100; j += 10)
     {
          cout<<setw(5) << j ;
     }
     cout<<endl;
   }
   return 0;
}

//*->Vòng lặp ngoài: điều khiển hàng
//*->Vòng lặp trong: điều khiển cột