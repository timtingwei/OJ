## HDOJ

### 2095 find your present (2) - HDOJ -u

#### Problem Description
In the new year party, everybody will get a "special present".Now it's your turn to get your special present, a lot of presents now putting on the desk, and only one of them will be yours.Each present has a card number on it, and your present's card number will be the one that different from all the others, and you can assume that only one number appear odd times.For example, there are 5 present, and their card numbers are 1, 2, 3, 2, 1.so your present will be the one with the card number of 3, because 3 is the number that different from all the others.

#### Input
The input file will consist of several cases. 
Each case will be presented by an integer n (1<=n<1000000, and n is odd) at first. Following that, n positive integers will be given in a line, all integers will smaller than 2^31. These numbers indicate the card numbers of the presents.n = 0 ends the input.

#### Output
For each case, output an integer in a line, which is the card number of your present.
 

#### Sample Input
5
1 1 3 2 2
3
1 2 1
0
 

#### Sample Output
3
2

#### Hint:
use scanf to avoid Time Limit Exceeded
 

#### Author
8600
 

#### Source
HDU 2007-Spring Programming Contest - Warm Up （1）

#### Recommend
8600   |   We have carefully selected several similar problems for you:  2097 2099 2096 2094 1008 

#### Solution:

在所有奇数中, 找出不同的那个数, 用^异或运算累计, 初始值为0, 全相等为0; 若有唯一一个不等, ans就是那个值。

```cpp
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
```



### 2097 Sky数 - HDOJ -u
tags: [HDOJ, 算法, 进制转换]
#### Problem Description
Sky从小喜欢奇特的东西，而且天生对数字特别敏感，一次偶然的机会，他发现了一个有趣的四位数2992，这个数，它的十进制数表示，其四位数字之和为2+9+9+2=22，它的十六进制数BB0，其四位数字之和也为22，同时它的十二进制数表示1894，其四位数字之和也为22，啊哈，真是巧啊。Sky非常喜欢这种四位数，由于他的发现，所以这里我们命名其为Sky数。但是要判断这样的数还是有点麻烦啊，那么现在请你帮忙来判断任何一个十进制的四位数，是不是Sky数吧。
 

#### Input
输入含有一些四位正整数，如果为0，则输入结束。
 

#### Output
若n为Sky数，则输出“#n is a Sky Number.”，否则输出“#n is not a Sky Number.”。每个结果占一行。注意：#n表示所读入的n值。
 

#### Sample Input
2992
1234
0
 

#### Sample Output
2992 is a Sky Number.
1234 is not a Sky Number.


#### Solution:

16进制中B在转换中, 被当作11来计算.
可以只用sum一个临时变量来做进制的转换.

坑点:
> * 这个相同的数不一定是22, 只要是三种结果一致都满足

实际代码:
```cpp
#include <cstdio>
using namespace std;

int main() {
  int n = 0;
  while (scanf("%d", &n) && n) {
    int sum = n, a = 0, b = 0, c = 0;
    while (sum) {
      a += sum % 10;
      sum /= 10;
    }
    sum = n;
    while (sum) {
      b += sum % 16;
      sum /= 16;
    }
    sum = n;
    while (sum) {
      c += sum % 12;
      sum /= 12;
    }
    (a == b && b == c) ? printf("%d is a Sky Number.\n", n) :
        printf("%d is not a Sky Number.\n", n);
  }
  return 0;
}
```

### 2099 整除的尾数 - HDOJ -u

#### Problem Description
一个整数，只知道前几位，不知道末二位，被另一个整数除尽了，那么该数的末二位该是什么呢？
 

#### Input
输入数据有若干组，每组数据包含二个整数a，b（0<a<10000, 10<b<100），若遇到0 0则处理结束。
 

#### Output
对应每组数据，将满足条件的所有尾数在一行内输出，格式见样本输出。同组数据的输出，其每个尾数之间空一格，行末没有空格。
 

#### Sample Input
200 40
1992 95
0 0
 

#### Sample Output
00 40 80
15
 

#### Source
2007省赛集训队练习赛（2）
 

#### Recommend
lcy   |   We have carefully selected several similar problems for you:  2098 2096 2091 2081 2017 

#### Solution:

找到0~99之间的第一个满足的条件的末尾两个数, 然后用一个等差数列寻找其他符合条件的值, 不完全遍历100个数.

坑点:
> * debug01把区间扩大成了[0, 100], 这样子的话, 造成100成为尾数, 不可能的。

代码:
```cpp
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
      int start = i, k = (99-start) / b;   // debug01:
      printf("%02d", start);
      for (int i  = 0; i < k; i++) {
        printf(" %02d", start + (i+1) * b);
      }
      printf("\n");
    }
  }
  return 0;
}
```


### 2096 小明A+B -uw

#### Problem Description
小明今年3岁了, 现在他已经能够认识100以内的非负整数, 并且能够进行100以内的非负整数的加法计算.
对于大于等于100的整数, 小明仅保留该数的最后两位进行计算, 如果计算结果大于等于100, 那么小明也仅保留计算结果的最后两位.

例如, 对于小明来说:
1) 1234和34是相等的
2) 35+80=15

给定非负整数A和B, 你的任务是代表小明计算出A+B的值.
 

#### Input
输入数据的第一行为一个正整数T, 表示测试数据的组数. 然后是T组测试数据. 每组测试数据包含两个非负整数A和B(A和B均在int型可表示的范围内).
 

#### Output
对于每组测试数据, 输出小明A+B的结果.
 

#### Sample Input
2
35 80
15 1152
 

#### Sample Output
15
67


#### Solution:

```cpp
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
```
