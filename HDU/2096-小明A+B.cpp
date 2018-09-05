// Copyright [2018] <mituh>
// 2096-小明A+B.cpp        12:19->00:30(WA)->01:02

/*
#include <cstdio>

int main() {
  int T; scanf("%d", &T);
  while (T--) {
    int a, b; scanf("%d %d", &a, &b);
    int sum, ans = 0;
    sum = a + b;
    if (sum >= 100) {
      ans += sum % 10;
      ans += (sum/10%10) * 10;
    } else {
      ans = sum;
    }
    printf("%02d\n", ans);   // 改了也没ac
  }
  return 0;
}

// WA
*/

// 推测溢出, 只加后两位
#include <cstdio>
#include <cstring>
// #include <cmath>

int arr_a[1005], arr_b[1005], len_a, len_b;

int K = 2;

int main() {
  int T; scanf("%d", &T);
  while (T--) {
    int a, b; scanf("%d %d", &a, &b);
    memset(arr_a, 0, sizeof(arr_a));
    memset(arr_b, 0, sizeof(arr_b));
    len_a = 0, len_b = 0;

    while (a && len_a < K) {
      arr_a[len_a++] = a % 10;
      a /= 10;
    }

    while (b && len_b < K) {
      arr_b[len_b++] = b % 10;
      b /= 10;
    }

    int ans = 0, carry = 0, temp = 0, s = 1;
    for (int i = 0; i < K; i++) {
      temp = arr_a[i] + arr_b[i] + carry;
      ans += (temp % 10) * s;
      s *= 10;
      carry = temp/10;
    }
    printf("%d\n", ans);
  }

  return 0;
}
