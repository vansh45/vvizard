#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int main(){
    
    char first_name [20] {};
    char last_name [20] {};
    char fullname [40] {};
    cout<< " enter your first name ";
    cin>>first_name;
   //or  cin.getline(first_name,40);
    cout<< " enter your last name ";
    cin>>last_name;
    strcpy(fullname,first_name);
    strcat(fullname," ");
    strcat(fullname,last_name);

    for(size_t i=0; i<strlen(fullname);i++)
    fullname[i] = toupper(fullname[i]);
    cout<<" Your full name is "<<fullname<<" and has "<<strlen(fullname)<<
    " characters";
     return 0;
}