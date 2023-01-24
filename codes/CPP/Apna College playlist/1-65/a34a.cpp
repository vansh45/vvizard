// largest no. to be formed from given string
#include <iostream>
using namespace std;



int main(){
    string s = "145680359";
    for(int i=0; i<s.length(); i++ ){

 for(int i=0; i<s.length()-1;i++){
      for(int j= i+1; j<s.length();j++){
          if(s[i]<s[j])  // first ke baad ke elements arrj
   {
       int temp;
       temp = s[j] ;
       s[j] = s[i];
       s[i] = temp;
   }
   
     }

  }

        }
         cout<<"largest no. from given string is  ";
        for (int i=0 ; i<s.length(); i++ ){
       cout<<s[i];}
        cout<<endl;

 

    
     return 0;
}