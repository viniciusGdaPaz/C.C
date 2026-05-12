#include <stdio.h>
#include <math.h>

int main(){
    float x, y, z;
    printf("Informe o x:\n");
    scanf("%f", &x);
    printf("Informe o y:\n");
    scanf("%f", &y);

    z = sqrt(pow(x, 2)+ pow(y, 3))/fabs(x+y);

    printf("resultado : %.2f", z);

return 0;
}
