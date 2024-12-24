#include <iostream>
using namespace std;

// test_d1
int mod(int a, int b)
{
  return a - (a / b) * b;
}

int do_work(int n)
{
  int x1, x2, x3;
  n = mod(n, 5);
  x1 = 2 * n;
  x2 = n + n;
  x3 = 4 * 4;
  x1 = x3 + x2 + x1;
  x2 = x1 + (x1 + 1) * (x2 + 1) * (x3 + 1);
  x3 = x1 * (x1 + 1) + (x2 + 1) * (x2 + 1) + (x3 + 1) * (x3 + 1);
  x1 = (x1 + 1) + (x2 + 1) + (x3 + 1);
  return x1 + x2 + x3;
}

int main()
{
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
  while (cnt < k)
  {
    sum = sum + 1;
    array[mod(cnt, len)] = i;
    i = i + 1;
    cnt = cnt + 1;
  }
  cnt = 0;
  while (cnt < 100)
  {
    brray[mod(cnt, len)] = i;
    i = i + 1;
    cnt = cnt + 1;
  }

  cnt = 0;
  while (cnt < mod(do_work(10), 30))
  {
    j = array[mod(cnt, len)];
    sum = sum + (-1) * cnt + do_work(j);
    j = j + 2 * cnt;
    j = j + 2 * cnt;
    j = j + 2 * cnt;
    if (mod(do_work(10), 10) == mod(do_work(j), 10))
    {
      j = mod(j, 10);
    }
    else
    {
      j = mod(j, 20);
    }
    array[mod(cnt, len)] = j * j;
    cnt = cnt + 1;
  }
  j = j + array[0] + array[1];
  j = j + array[0] + array[1];
  j = j + array[0] + array[1];
  j = j + array[0] + array[1];
  cout << j << endl;
  for (int i = 0; i < 5; i++)
    cout << array[i] << endl;
  return 0;
}

// test_o1
// struct Operands
// {
//   int o1;
//   int o2;
// };

// int add(struct Operands temp)
// {
//   return (temp.o1 + temp.o2);
// }

// int main()
// {
//   int n;
//   struct Operands op;
//   op.o1 = 1;
//   op.o2 = 2;
//   n = add(op);
//   cout << n << endl;
//   return 0;
// }

// test_o2
// int add(int temp[2])
// {
//   return (temp[0] + temp[1]);
// }

// int main()
// {
//   int op[2];
//   int r[1][2];
//   int i = 0, j = 0;
//   while (i < 2)
//   {
//     while (j < 2)
//     {
//       op[j] = i + j;
//       j = j + 1;
//     }
//     r[0][i] = add(op);
//     cout << r[0][i] << endl;
//     i = i + 1;
//     j = 0;
//   }
//   return 0;
// }

// test_o3
// int func1(int a[2])
// {
//   int idx = 0;
//   int len = 2;
//   int m = 0;
//   while (idx < len)
//   {
//     if (a[idx] > m)
//     {
//       m = a[idx];
//     }
//     idx = idx + 1;
//   }
//   return m;
// }

// int func2(int p1, int p2)
// {
//   int t1 = p1 / p2;
//   int t2 = t1 * p2;
//   int t3 = p1 - t2;
//   return t3;
// }

// int main()
// {
//   int arr_len = 2;
//   int arr[2][2];
//   int sum_arr[2];
//   int idx1 = 0;
//   int idx2 = 0;

//   while (idx1 < arr_len)
//   {
//     idx2 = 0;
//     while (idx2 < arr_len)
//     {
//       arr[idx1][idx2] = func2(idx1 + idx2, arr_len);
//       idx2 = idx2 + 1;
//     }
//     sum_arr[idx1] = func1(arr[idx1]);
//     idx1 = idx1 + 1;
//   }
//   cout << arr[0][0] << endl;
//   cout << arr[0][1] << endl;
//   cout << arr[1][0] << endl;
//   cout << arr[1][1] << endl;
//   cout << sum_arr[0] << endl;
//   cout << sum_arr[1] << endl;
//   return 0;
// }

// test_o4
// struct S1
// {
//   int a;
//   int b;
// };

// struct S2
// {
//   int c;
//   struct S1 arr[2];
// };

// int func1(struct S1 p1, struct S1 p2)
// {
//   int a1 = p1.a * p2.a;
//   int b1 = p1.b * p2.b;
//   cout << p1.b << endl;
//   cout << p2.b << endl;
//   cout << b1 << endl;
//   return a1 + b1;
// }

// int func2(int p)
// {
//   int idx = 0;
//   while (idx <= p)
//   {
//     int i = idx * idx;
//     int j = (idx + 1) * (idx + 1);
//     if ((p >= i) && (p < j))
//     {
//       return idx;
//     }
//     idx = idx + 1;
//   }
//   return -1;
// }

// int func3(struct S1 pp1, struct S1 pp2)
// {
//   int t1 = func1(pp1, pp2);
//   return func2(t1);
// }

// int main()
// {
//   int arr_len = 2;
//   struct S2 arrS[2];
//   int idx1 = 0;
//   int idx2 = 0;
//   while (idx1 < 2)
//   {
//     idx2 = 0;
//     while (idx2 < 2)
//     {
//       arrS[idx1].arr[idx2].a = idx1 * idx2 + idx2;
//       arrS[idx1].arr[idx2].b = idx1 * idx1 * idx2 + idx2;
//       idx2 = idx2 + 1;
//     }
//     arrS[idx1].c = func3(arrS[idx1].arr[0], arrS[idx1].arr[1]);
//     idx1 = idx1 + 1;
//   }
//   cout << arrS[0].c + arrS[1].c << endl;
//   return 0;
// }

// test_o5
// 已经给出了

// test1
// int main()
// {
//     int n;
//     cin >> n;
//     if (n > 0) cout << 1 << endl;
//     else if (n < 0) cout << -1 << endl;
//     else cout << 0 << endl;
//     return 0;
// }

// test2
// int fact(int n)
// {
//   if (n == 1)
//     return n;
//   else
//     return (n * fact(n - 1));
// }
// int main()
// {
//   int m, result;
//   cin >> m;
//   if (m > 1)
//     result = fact(m);
//   else
//     result = 1;
//   cout << result << endl;
//   return 0;
// }

// test_d1
// 500
// 0
// 121
// 256
// 361
// 64

// test_o1
// 3

// test_o2
// 1
// 3

// test_o3
// 0
// 1
// 1
// 0
// 1
// 1

// test_o4
// 0
// 1
// 0
// 0
// 2
// 0
// 0

// test_o5
// 34744
// 4249
// 16334
// 15750
// 37979
// 13261
// 29011

// test1
// 正数: 1, 负数: -1, 0: 0

// test2
// 递归计算阶乘