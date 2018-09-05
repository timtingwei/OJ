// Copyright [2018] <mituh>
// 2097-Sky数.cpp     // 22:50->23:20
#include <cstdio>
using namespace std;

int main() {
  int n = 0;
  while (scanf("%d", &n) && n) {
    int sum = n, a = 0, b = 0, c = 0;
    while (sum) {
      a += sum % 10;
      sum /= 10;
    }
    sum = n;
    while (sum) {
      b += sum % 16;
      sum /= 16;
    }
    sum = n;
    while (sum) {
      c += sum % 12;
      sum /= 12;
    }
    (a == b && b == c) ? printf("%d is a Sky Number.\n", n) :
        printf("%d is not a Sky Number.\n", n);
  }
  return 0;
}
