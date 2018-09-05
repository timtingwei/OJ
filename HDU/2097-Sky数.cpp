// Copyright [2018] <mituh>
// 2097-Sky数.cpp     // 22:50->23:20
#include <cstdio>
using namespace std;

/*
int main() {
  int num;
  while (scanf("%d", &num) && num) {
    int a = num, b = num, c = num, r1 = 0, r2 = 0, r3 = 0;
    int ok = 1, sky = 0;
    while (a) {
      r1 += a % 10;
      a /= 10;
    }
    sky = r1;
    // if (r1 == 22) {   // debug01
    if (r1 == sky) {
      while (b) {
        r2 += b % 16;
        b /= 16;
      }
      if (r2 == sky) {
        while (c) {
          r3 += c % 12;
          c /= 12;
        }
        if (r3 != sky) {
          ok = 0;
        }
      } else {
        ok = 0;
      }
    } else {
      ok = 0;
    }
    if (ok) {
      printf("%d is a Sky Number.\n", num);
    } else {
      printf("%d is not a Sky Number.\n", num);
    }
  }
  return 0;
}
*/

int main() {
  int n = 0;
  while (scanf("%d", &n) && n) {
    int sum = n, a = 0, b = 0, c = 0;
    while (sum) {
      a += sum % 10;
      sum /= 10;
    }
    sum = n;
  }
  return 0;
}
