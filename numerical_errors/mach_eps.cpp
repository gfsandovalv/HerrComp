#include<iostream>
#include<iomanip>

int main(int argc, char *argv[])
{
  float eps_f=1.0 , one_f=1.0;
  double eps_d=1.0 , one_d=1.0;
  int n1=0,n2=0;
  do
    {
      eps_f=eps_f/2;
      one_f=1.0 + eps_f;
      n1++;

    } while (one_f!=1);
    do
    {
      eps_d=eps_d/2;
      one_d=1.0 + eps_d;
      n2++;

    } while (one_d!=1);

  std::cout<<"eps_float"<<"\t\t\t"<<"eps_double"<<"\n";
  std::cout<<std::scientific<<std::setprecision(20)<<eps_f<<" "<<eps_d<<"\n";  
  return 0;
}
