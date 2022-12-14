#include <stdio.h>
#include <stdlib.h>


void get_menu();
int act_plus(int,int);
int act_minus(int,int);
int act_mult(int,int);
float act_division(int,int);

void get_menu() {
    printf("Select\n");
    printf("1: Plus\n");
    printf("2: Minus\n");
    printf("3: Multiplication\n");
    printf("4: Division\n");
    printf("5: Exit\n");
    printf("->");
}

int act_plus(int a,int b)
{
  return a+b;
}

int act_minus(int a,int b)
{
  return a-b;
}

int act_mult(int a,int b)
{
  return a*b;
}

float act_division(int a,int b)
{
  return (float) a/b;
}

int main(int argc, char const *argv[]) {

  int a,b,value;

  get_menu();
  scanf("%d",&value);
  if(value>5 || value<1)
  {
    printf("\nOooops, Something wrong.....\n");
    exit(0);
  }

  printf("\nEnter values\na = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);

  switch (value) {
    case 1:
          printf("%d + %d = %d\n",a,b,act_plus(a,b));
          break;
    case 2:
          printf("%d - %d = %d\n",a,b,act_minus(a,b));
          break;
    case 3:
          printf("%d * %d = %d\n",a,b,act_mult(a,b));
          break;
    case 4:
          printf("%d / %d = %.1f\n",a,b,act_division(a,b));
          break;
    default:
          printf("\nSomething wrong.......\n");
  }

  return 0;
}
