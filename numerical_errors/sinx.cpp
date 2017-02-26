#include<iostream>
#include<cmath>

int const Nmax=50;
const double dx=0.1;
double sinx(int N, double x);
double delta(double a ,double b);
int main(int argc, char *argv[])
{
  double x=0.2;
  

  for (int i = 1; i <= 30; ++i)
    {
      double a=sinx(Nmax,x);
      double b=std::sin(x);
      std::cout<<x<<"\t"<<delta(a,b)<<std::endl;
      x+=dx;
    }

  return 0;
}

double sinx(int N, const double x){
  double sum=x;
  double term=x;
  for (int i = 1; i <= N; i++)
    {
      term *=-x*x/(2*i+1)/(2*i);
      sum+=term;
    }
  return sum;
}

double delta(double a ,double b){
  double delta=std::abs((a-b)/b);
  return delta;
}
