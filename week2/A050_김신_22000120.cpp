#include <cstdio>
char c;

int main()
{
  while (~scanf(" %c", &c))
  {
    if (c == 'A')
      c = 'X';
    else if (c == 'B')
      c = 'Y';
    else if (c == 'C')
      c = 'Z';
    else
      c = c - 3;
    putc(c, stdout);
  }
  return 0;
}