#include <stdio.h>
#include <math.h>
int main() // добавил int main
{
  float m,n,z1,z2,a,b,c,d;
  system("chcp 1251");
  system("cls");
  printf("введите два числа\n");
  scanf("%f", &m);
  scanf("%f", &n);
  a=(m-1)*sqrt(m)-(n-1)*sqrt(n);
  b=sqrt(pow(m,3)*n)+n*m+pow(m,2)-m;
  c=sqrt(m)-sqrt(n);
  if(b!=0)
  {
    z1=a/b;
    printf("значение первого выражения %f\n", z1);
  }
  else
  {
    printf("значение первого выражения не определено\n");
  }
  if(m!=0)
  {
    z2=c/m;
    printf("значение второго выражения %f\n", z2);
  }
  else
  {
    printf("значение второго выражения не определено");
  }
  return 0;
}
