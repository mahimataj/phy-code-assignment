#include<stdio.h>
#include<math.h>

int main()
{
    double lambda,d,theta,m;
    printf("Enter wavelength(in nm): ");
    scanf("%lf",&lambda);

   if(lambda<380 || lambda>750) {
        printf("Out of the range. Please enter a valid number.\n");
        return 0;
    }

    printf("Enter slit distance d(in µm): ");
    scanf("%lf",&d);

    printf("Enter angle θ (in degrees): ");
    scanf("%lf",&theta);

    d = d * 1000;
    double theta_rad=theta*(3.14159 / 180.0);

    m=(d*sin(theta_rad))/lambda;

    printf("%.2lf-th order maxima\n",m);

    return 0;
}
