// Copyright [2018] <mituh>
// 2095-find-your-present-2.cpp
#include <cstdio>
int main() {
  int n = 0;
  while (scanf("%d", &n) != EOF && n) {
    int ans = 0, temp = 0;
    while (n--) {
      scanf("%d", &temp);
      ans ^= temp;
    }
    printf("%d\n", ans);
  }
  return 0;
}
