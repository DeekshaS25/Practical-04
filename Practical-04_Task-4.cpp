#include<iostream>
using namespace std;
namespace first{
  int add(int a,int b){
   return(a+b);
  }
 }
 namespace second{
  float add(float a,float b){
   return(a+b);
  }
 }
 
 int main(){
  cout<<add(1,2)<<endl;
  cout<<add(1,1.2f)<<endl;
  cout<<add(1.2f,2.5f)<<endl;
  return 0;
}

