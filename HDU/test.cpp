// Copyright [2018] <mituh>

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
