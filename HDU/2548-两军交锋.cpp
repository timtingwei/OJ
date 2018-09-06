// Copyright [2018] <mituh>
// 2548-两军交锋.cpp
#include <cstdio>

int main() {
  int T; scanf("%d", &T);
  double u, v, w, l;
  while (T--) {
    scanf("%lf %lf %lf %lf", &u, &v, &w, &l);
    printf("%.3lf\n", w*(l/(u+v)));
  }
  return 0;
}
