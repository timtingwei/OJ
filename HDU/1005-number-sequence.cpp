// Copyright [2018] <mituh>
// 1005-number-sequence.cpp

/*
#include <cstdio>

int f(int n, int a, int b) {
  if (n == 1 || n == 2) return 1;
  return (a * f(n-1, a, b) + b * f(n-2, a, b)) % 7;
}

int main() {
  int a, b, n;
  while (scanf("%d %d %d", &a, &b, &n) != EOF && a && b && n) {
    printf("%d\n", f(n, a, b));
  }
  return 0;
}

// MLE
*/

/*
#include <cstdio>

int main() {
  int a, b, n;
  while (scanf("%d %d %d", &a, &b, &n) != EOF && a && b && n) {
    long long int fa = 1;          // f2
    long long int fb = (a+b) % 7;  // f3
    long long int ft = 0;
    int k = n - 3;
    while (k--) {
      ft = fb;
      fb = (a*fb + b*fa) % 7;
      fa = ft;
    }
    printf("%lld\n", fb);
  }
  return 0;
}



// TLE
*/





// 打表, 求余
#include <cstdio>
int main() {
  int a, b, n;
  while (scanf("%d %d %d", &a, &b, &n)) {
    int i;
    int seq[1000] = {0};
    seq[1] = 1;
    seq[2] = 1;
    int t;
    if (a == 0 && b == 0 && n == 0) {
      break;
    }
    for (i = 3; i <= 49; i++) {
      seq[i] = (a * seq[i-1] + b * seq[i-2]) % 7;
    }
    t = n % 49;
    printf("%d\n", seq[t]);
  }
  return 0;
}




