#include <unistd.h>

void ft_print_numbers()
{
  char num = 48;

  while (num <= 57)
  {
    write(1, &num, 1);
    num++;
  }
}

int main()
{
  ft_print_numbers();
  return (0);
}