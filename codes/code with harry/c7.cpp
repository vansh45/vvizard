#include <iostream>
using namespace std;

 //int sum( int a, int b )
 //return 0;

void swappointer(int* a, int* b){
int temp = *b;
 *b = *a;
 *a= temp;

/*void swappointer(int a, int b){
int temp = b;
b = a;
a= temp;*/
}
int main(){
    int a=4 ,b=5;
    cout<< "the value of a  is  "<<a << " and of b is "<<b<<endl;
    swappointer(&a,&b);
    cout<< "the value of a  is  "<<a << " and of b is "<<b;
    return 0;
}