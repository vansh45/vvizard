#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    
    string w1 = "thisissample";

    sort (w1.begin(), w1.end());  // passing the whole string
    cout<<w1<<endl;           // ie from 1st l to last l

 // convert into upper case

 cout<< 'a' - 'A'<<endl;

 for(int i=0; i<w1.size(); i++){
     if (w1[i]>='a' && w1[i]<='z')
     w1[i] -=32;

 }
 cout<<"w1- "<<w1<<endl;

 string w2 = "PINEAPPLE";
 transform( w2.begin() , w2.end() , w2.begin(), :: tolower );
cout <<"w2 - "<<w2;
    return 0;
}