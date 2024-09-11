#include <unistd.h>
void ft_putchar(char c)
{
        write(1, &c, 1);
}
void ft_print_comb2(void)
{
       int c = 0;
       
       
       while (c < 100)
       {
         int b = c + 1;
         
         while (b < 100)
         {
           ft_putchar(c / 10 + 48);
           ft_putchar(c % 10 + 48);
           ft_putchar(' ');
           ft_putchar(b / 10 + 48);
           ft_putchar(b % 10 + 48);
	   if (c != 98 || b != 99)
	   {
		   ft_putchar(',');
		   ft_putchar(' ');
	   }
           b++;
         }
         c++;
       }
}

/*int main()
{
        ft_print_comb2();
}*/
