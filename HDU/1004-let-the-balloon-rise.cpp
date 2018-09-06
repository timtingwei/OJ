// Copyright [2018] <mituh>
// 1004-let-the-balloon-rise.cpp
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


int main() {
  int N;
  unordered_map<string, int> mp;
  string s;
  while (scanf("%d", &N) && N) {
    mp.clear(); string max_s = ""; int max = 0;
    while (N--) {
      cin >> s;
      auto it = mp.find(s);
      if (it != mp.end()) {
        it->second++;
      } else {
        mp[s] = 1;
      }
      if (mp[s] > max) {
        max_s = s; max = mp[s];
      }
    }
    cout << max_s << endl;
  }
  return 0;
}
