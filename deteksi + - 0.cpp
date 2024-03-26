#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"inputkan bilangan= ";
    cin>>x;
    
  if(x>0){
      cout<<"bilangan positif"<<endl;
  }else if(x<0){
      cout<<"bilangan negatif"<<endl;
  }else{
      cout<<"bilangan nol"<<endl;
  }
    
    return 0;
}
