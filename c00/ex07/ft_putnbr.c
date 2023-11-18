#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  int divisor;
  int digit;

  if (nb == -2147483648)
  {
    write(1, "-2147483648", 11);
  }
  else
  {
    if (nb < 0)
    {
      ft_putchar('-');
      nb = -nb;
    }
    divisor = 1;
    while (nb / divisor >= 10)
    {
      divisor *= 10;
    }
    while (divisor > 0)
    {
      digit = (nb / divisor) % 10;
      ft_putchar('0' + digit);
      divisor /= 10;
    }
  }
}

int main()
{
  ft_putnbr(42);
  return (0);
}