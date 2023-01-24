#include <iostream>
using namespace std;

int main(){
    int arr[] = {20, 40, 60};
    cout<<*arr<<endl; // will give 20
    
    int *ptr = arr;
    for(int i=0; i<3; i++){
        cout<<*(ptr+i)<<endl;
    }
    
    
    return 0;

}