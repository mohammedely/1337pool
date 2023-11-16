#include <unistd.h>

void ft_print_reverse_alphabet()
{
  char alpha = 'z';
  while (alpha >= 'a')
  {
    write(1, &alpha, 1);
    alpha--;
  }
}

int main()
{
  ft_print_reverse_alphabet();
  return (0);
}