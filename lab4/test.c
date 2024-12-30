#include<stdio.h>

// test1: 计算 Fibonacci
// int main()
// {
//     int a = 0, b = 1, i = 0, n;
//     scanf("%d", &n);
//     while (i < n)
//     {
//         int c = a + b;
//         printf("%d\n", b);
//         a = b;
//         b = c;
//         i = i + 1;
//     }
//     return 0;
// }

// test2: 计算阶乘
// int fact(int n)
// {
//     if (n == 1)
//         return n;
//     else
//         return (n * fact(n - 1));
// }

// int main()
// {
//     int m, result;
//     scanf("%d", &m);
//     if (m > 1)
//         result = fact(m);
//     else
//         result = 1;
//     printf("%d\n", result);
//     return 0;
// }

// self_test: 
int mod(int a, int b) {
  return a - (a / b) * b;
}

int do_work(int n) {
  n = mod(n, 5);
  return n;
}

int main() {
  int t1 = 2;
  int t2 = 5;
  int t3 = 10;
  int i = 3 * (t2 * t3) - 100 / 5;
  int j = 42 - (t1 * t2) * (t1 * (t2 * t3) / 32) + 100;
  int k = 3 * 4 * 5 - 10 - (-(t1 * t2) * 3) - (t1 * t2) - (t1 * t2) + 3 + 2 + 1;
  int cnt = 0;
  int sum = 0;
  int len = t1 * t2;
  int array[10];
  int brray[10];
  printf("%d\n%d\n%d\n", i, j, k);
  while (cnt < k) {
    sum = sum + 1;
    array[mod(cnt, len)] = i;
    i = i + 1;
    cnt = cnt + 1;
  }
  cnt = 0;
  while (cnt < 100) {
    brray[mod(cnt, len)] = i;
    i = i + 1;
    cnt = cnt + 1;
  }
  return 0;
}