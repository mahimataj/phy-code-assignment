#include<stdio.h>
#include<math.h>
int main()
{
  double theta_degree=45,theta_radient,ratio,pi=3.1416;
  theta_radient=theta_degree*pi/180;
  ratio=1.0/sin(theta_radient);
  printf("The ratio a/lemda = %lf\n",ratio);
  return 0;
}
