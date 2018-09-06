// Copyright [2018] <mituh>
// 2551-竹青遍野.cpp
/*
#include <cstdio>
#include <cmath>
using namespace std;

int db_equal(double db1, double db2) {
   return -0.0005 < (db1 - db2) && (db1 - db2) < 0.0005;
}

int main() {
  int t; scanf("%d", &t);
  while (t--) {
    int x, sum = 0; scanf("%d", &x);
    for (int i = 1; ; i++) {
      double db1 = pow((double)i, 1.0/3),
        db2 = pow((double)(x-sum), 1.0/3);
      if (db1 > db2 || (db_equal(db1, db2))) {
        printf("%d\n", i);
        break;
      }
      sum += pow((double)i, 3);
    }
  }
  return 0;
}
*/

#include <cstdio>
#include <cmath>
using namespace std;

int db_equal(double db1, double db2) {
   return -0.0005 < (db1 - db2) && (db1 - db2) < 0.0005;
}

int main() {
  int t; scanf("%d", &t);
  while (t--) {
    int x, sum = 0; scanf("%d", &x);
    for (int i = 1; ; i++) {
      double db1 = i,
        db2 = pow((double)(x-sum), 1.0/3);
      if (db1 > db2 || (db_equal(db1, db2))) {
        printf("%d\n", i);
        break;
      }
      sum += pow((double)i, 3);
    }
  }
  return 0;
}
