#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main(){
   string s = "456";
   cout<<s[2];
   int x =2;
  // cout<<s[2].dtype();
   cout << typeid(x).name() << endl;
     return 0;
}


for(int i=s.length()-1; i>=0; i--){
    
    if (s[i] == ' ')
            continue;
    if(s[i]>='0' && s[i]<=9){

        int j =i , num =0;

        while(i<s.length() && s[i]>='0' && s[i]<=9){
            
        }
    }





    if (isdigit(s[i])) {
           
 
            double num = 0, j = i;
            while (i < s.size() && isdigit(s[i]))
                i--;
            i++;
 

            for (int k = i; k <= j; k++)
                num = num * 10 + int(s[k] - '0');
 
            st.push(num);
        }