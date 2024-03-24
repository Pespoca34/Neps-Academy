#include <stdio.h>

int main() {
  int N, X, Y, Z;
  scanf("%d %d %d %d", &N, &X, &Y, &Z);
  int menor = (X < Y) ? ((X < Z) ? X : Z) : ((Y < Z) ? Y : Z);
  int maior = (X > Y) ? ((X > Z) ? X : Z) : ((Y > Z) ? Y : Z);
  int total = X + Y + Z;
  int res = 0;
  if (N >= total) {
    res = 3;
  } else {
    if (N >= total - maior) {
      res = 2;
    } else {
      if (N >= menor)
        res = 1;
    }
  }
  printf("%d\n", res);
  return 0;
}

