#include <unistd.h>

void ft_print_alphabet()
{
  char alpha = 'a';
  while (alpha <= 'z')
  {
    write(1, &alpha, 1);
    alpha++;
  }
}

int main()
{
  ft_print_alphabet();
  return (0);
}