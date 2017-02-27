#include<iostream>
#include<cmath>
#include<iomanip>
double cosine(double x,int N);
int main(int argc, char *argv[])
{
  double x=2*M_PI;
  double cos_ref=std::cos(x);

  double dif=0.0;
  //  std::cout<<std::scientific<<std::setprecision(20)<<std::cos(x)<<" "<<cosine(x,100)<<" "<<std::cos(x)-cosine(x,100)<<"\n";
  double x_0=0.0;
  double dx=0.1;
    std::cout<<"set terminal gif animate"<<"\n";
    std::cout<<"set output 'cosine.gif'"<<"\n";
    std::cout<<"set yr [0:1.0]"<<"\n";
  do
    {
      int n=1; //el valor 0-ésimo ya fue calculado en la definición.
      std::cout<<"plot '-'" <<" "<< "u 1:2 t "<<"'"<<x_0<<"'"<<"\n";
      do
	{
	  double a=cosine(x_0,n);
	  dif=std::fabs((a-cos_ref)/(cos_ref));
	
	  std::cout<<n<<"\t"<<std::scientific<<std::setprecision(17)<<dif<<"\n";
	  n++;
	} while (n<20);
      x_0+=dx;
      std::cout<<"e"<<"\n";
    } while (x_0<=x);
  return 0;
}

double cosine(double x, int N){
  double a_n=1; //a_0=1, el valor inicial de la sucesión
  double sum=0;
  for (int i = 0; i < N; ++i)
    {
      sum += a_n;
      a_n=-x*x*a_n/(2*i+2)/(2*i+1);
    }
  return sum;
}
