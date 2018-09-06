// Copyright [2018] <mituh>
// 2550-百步穿杨.cpp
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
  int a, b;
};

bool cmp(Node n1, Node n2) {
  return n1.a < n2.a;
}

int main() {
  int T, flag = 0; cin >> T;
  while (T--) {
    vector<Node> v;
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
      Node node;
      int a, b; cin >> node.a >> node.b;
      v.push_back(node);
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < N; i++) {
      string s = ">++>", add = "";
      for (int j = 0; j < v[i].a-2; j++) {
        add += '-';
      }
      s.insert(2, add);
      for (int j = 0; j < v[i].b; j++) {
        cout << s << endl;
      }
      cout << endl;
    }
  }
  return 0;
}
