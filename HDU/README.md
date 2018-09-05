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
