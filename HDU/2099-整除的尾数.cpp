// Copyright [2018] <mituh>
// 2099-整除的尾数.cpp 11:41->00:12

#include <cstdio>

int main() {
  int a, b, cnt = 0;
  while (scanf("%d %d", &a, &b) != EOF && a && b) {
    int sum = a * 100;
    int i = 0, find = 0;
    for ( ; i < 100; i++) {
      if ((sum + i) % b == 0) {
        find = 1;
        break;
      }
    }
    if (!find) {
      printf("\n");
    } else {   // find
      int start = i, k = (99-start) / b;    // debug01
      printf("%02d", start);
      for (int i  = 0; i < k; i++) {
        printf(" %02d", start + (i+1) * b);
      }
      printf("\n");
    }
  }
  return 0;
}

/*
#include <cstdio>

int main() {
  int a, b, cnt = 0;
  while (scanf("%d %d", &a, &b) != EOF && a && b) {
    if (cnt)
    int sum = a * 100;
    int i = 0, find = 0;
    for ( ; i < 100; i++) {
      if ((sum + i) % b == 0) {
        find = 1;
        break;
      }
    }
    if (!find) {
      printf("\n");
    } else {   // find
      int start = i, k = (100-start) / b;
      printf("%02d", start);
      for (int i  = 0; i < k; i++) {
        printf(" %02d", start + (i+1) * b);
      }
      printf("\n");
    }
  }
  return 0;
}

// WA
// 1 20
// 00 20 40 60 80 100

*/
