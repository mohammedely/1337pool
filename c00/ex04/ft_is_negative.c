#include <unistd.h>

void ft_is_negative(int n)
{
  if (n > -1)
  {
    write(1, "Positive", 9);
  }
  else
  {
    write(1, "Negative", 9);
  }
}

int main()
{
  ft_is_negative(-5);
}