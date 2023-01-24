// knapsack greedy 

#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    float profit[] ={25,24,15};
    float weight[] ={18,15,10};
    int n= sizeof(weight)/sizeof(weight[0]);
    float p_w_ratio[]={0};
    


    for(int i=0; i<n; i++){
     p_w_ratio[i] = profit[i]/weight[i];
    //  cout<<p_w_ratio[i]<<endl;
    }
  
    for(int i=0;i+1<n;i++){
  if(p_w_ratio[i]<p_w_ratio[i+1])
  swap(p_w_ratio[i], p_w_ratio[i+1]);
}
   for(int i=0; i<n; i++)
cout<<p_w_ratio[i]<<endl;


     return 0;
}