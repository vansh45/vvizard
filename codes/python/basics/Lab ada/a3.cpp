// quick sort itterative approach and recurrsive approach { H.W. }
#include <iostream>
using namespace std;

int main(){
    int *data = new int[5];
 
for (int i = 0; i<5; i++)
   *(data + i) = i*2;
 
for (int i = 0; i<=4; i++)
   cout << data[i] << " " ;
cout << endl;   
 
delete [] data;
     return 0;
}