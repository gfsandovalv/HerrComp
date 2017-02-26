#include<iostream>
#include<cmath>
int main()
{
  double under=1;
  double over=1;
  int N=0;
  int M=0;
  do{
    under=under/2;
    N++;
  }while(under>0);
  
  do{
    over=over*2;
    M++;
  }while(std::isinf(over)==false);
  

  std::cout<<"underflow steps: "<<N<<"\n";
  std::cout<<"overflow steps: "<<M<<"\n";
  return 0;

}
