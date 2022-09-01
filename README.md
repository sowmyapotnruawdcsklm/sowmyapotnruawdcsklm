#include<stdio.h>
int main()
{
int i,n;
  for (int i = 1;; i++) {
    if (n % i == 0) {
      n /= i;
    }
    else {
      break;
    }
  }
  
  if (n == 1) {
    return true;
  }
  else {
    return false;
  }
}
 
