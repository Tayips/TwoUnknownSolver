#include <stdio.h>
#include <math.h>
void TwoUnknownsSolver(int a, int b, int c){
    double determinat = (b*b)- (4*a*c);
    if(determinat == 0){
        printf("Denklemimizin tek gercek kökü var: %d",(-b)/(2*a) );
    }
    else if(determinat > 0){
        printf("Denklemimizin iki kökü vardir:\nx1:%.2f\nx2:%.2f\n",(-b-sqrt(determinat)/(2*a)) ,(-b+sqrt(determinat)/(2*a)));
    }
    else
        printf("Denklemimizin gercek kökü yok \n");
}
int main(void)
{
    int x,y,z;
    printf("Denklemimizin kat sayilarini giriniz(ax^2 + bx + c):\n");
    scanf("%d%d%d",&x,&y,&z);
    TwoUnknownsSolver(x,y,z);
}
