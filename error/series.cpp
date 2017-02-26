#include<iostream>
#include<cmath>
using namespace std;
float sum1(int N);
float sum2(int N);
float sum_e(int N);
float dif(float s, int N);
typedef float flotante;
int main(){
  int N=7000;
  cout<<"#N"<<" "<<"dS1"<<" "<<"dS2"<<endl;
 
 
  for(int a=1;a<=N;a++)
    {
      float ds1= fabs((sum1(a)-sum_e(a))/(sum_e(a))), ds2=fabs((sum2(a)-sum_e(a))/(sum_e(a)));
      cerr<<a<<" "<<std::scientific<<ds1<<" "<<ds2<<endl;
      cout<<a<<" "<<std::scientific<<sum1(a)<<" "<<sum2(a)<<" "<<sum_e(a)<<endl;
    }
}

float sum1(int N){
  float sum =0.0;
  int sign= -1;
  for(int n=2*N; n>=1;n--)
    {
      sum += sign*(n)/(n+1.0);
      //sum += pow(-1,n)*(n)/(n+1);
      sign*=-1;
    }
  return sum;
}

float sum2(int N){
  float sum_a= 0.0, sum_b = 0.0;
  for(int n=N; n>=1;n--)
    {
      sum_a += (2*n-1)/(2.0*n);
    }
  for(int n=N; n>=1;n--)
    {
      sum_b += (2*n)/(2.0*n+1);
    }
  return -sum_a+sum_b;
}

float sum_e(int N){
  float sum=0.0;
  for(int n=N; n>=1;n--)
    {
      sum += (1)/(2.0*n*(2.0*n+1));
    }
  return sum;
}

float dif(float s,int N){
  return std::fabs((s-sum_e(N))/sum_e(N));
}
