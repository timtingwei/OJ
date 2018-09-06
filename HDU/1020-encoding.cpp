// Copyright [2018] <mituh>
// 1020-encoding.cpp       10:42->11:13 = 32min
#include <cstdio>
#include <cstring>
char s[10050];

int main() {
  int T; scanf("%d", &T);
  while (T--) {
    scanf("%s", s);
    s[strlen(s)] = '0';
    char pChar = s[0];
    int i = 1;
    while (i < strlen(s)) {
      int cnt = 1;
      while (s[i] == pChar && i < strlen(s)) {
        i++; cnt++;
      }
      if (cnt > 1) printf("%d", cnt);
      printf("%c", pChar);
      pChar = s[i++];
    }
    printf("\n");
  }
  return 0;
}
