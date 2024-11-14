#include <stdio.h>

int iterativeGDC(int a, int b);
int recursiveGDC(int a, int b);

int iterativeGDC(int a, int b){
  int temp;
  while(b != 0){
    temp = b;
    b = a%b;
    a = temp;
  }
  return a;
}

int recursiveGDC(int a, int b){
  if(b == 0){
    return a;
  }
  else{
    return(recursiveGDC(b, a%b));
  }
}

int main(){
  int a, b, error;
  printf("Please enter two positive integers:\n");
  error = scanf("%d %d", &a, &b);
  if (error!=2){
    printf("Please enter two integers\n");
    return 1;
  }

  if (a<=0 || b<=0){
    printf("Please enter positive integers\n");
    return 1;
  }

  printf("IterativeGDC(%d, %d) = %d\n", a, b, iterativeGDC(a,b));
  printf("RecursiveGDC(%d, %d) = %d\n", a, b, recursiveGDC(a,b));

  return 0;
}
