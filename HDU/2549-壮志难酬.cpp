// Copyright [2018] <mituh>
// 2549-壮志难酬.cpp
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  int T, d; string s;
  cin >> T;
  while (T--) {
    cin >> s >> d;
    int pos = s.find('.');
    int len = s.length();
    // if (len < 8) {
    //   for (int i = 0; i < 8 - len; i++) {
    //     s += '0';
    //   }
    // }
    s += "000000";
    
    printf("%c\n", s[pos+d]);
  }
  return 0;
}
