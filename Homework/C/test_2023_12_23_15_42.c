#include <stdio.h>

struct str {
  int len;
  char *s;
};

struct foo {
  struct str* a;
};

int main(int argc, char** argv) {
  struct foo f = {0};
  if (f.a->s) {
    printf("%x\n", f.a->s);
  }
  return 0;
}