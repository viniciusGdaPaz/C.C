#include<stdio.h>



int main(){
int x,y,s,c,v,d,f,t,u,cin,vin,dec,cinc,um;

scanf("%d.%d", &x, &y);

s = x/100;
x = x%100;
c = x/50;
x = x%50;
v = x/20;
x = x%20;
d = x/10;
x = x%10;
f = x/5;
x = x%5;
t = x/2;
x = x%2;
u = x;
cin = y/50;
y = y%50;
vin = y/25;
y = y%25;
dec = y/10;
y = y%10;
cinc = y/5;
y = y%5;
um = y/1;






printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",s,c, v, d, f, t, u, cin, vin, dec, cinc, um);



return 0;
}
