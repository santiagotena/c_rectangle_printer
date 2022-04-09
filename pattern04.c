void ft_putchar(char c);



void ft_pattern(int x, int y)
{
    int     x_axis;
    int     y_axis;

    x_axis = 2;
    y_axis = 2;
    //Edge cases
    if (x < 1 || y < 1)
        return ;
    if (x == 1 && y == 1)
    {
        ft_putchar('A');
        ft_putchar('\n');
        return ;
    }
    if (x == 1)
    {
        ft_putchar('A');
        ft_putchar('\n');
        while (y_axis <= y-1)
        {
            ft_putchar('B');
            ft_putchar('\n');
            y_axis++;
        }
        ft_putchar('C');
        ft_putchar('\n');
        return ;
    }
    //Header
    ft_putchar('A');
    while (x_axis <= x-1)
    {
        ft_putchar('B');
        x_axis++;
    }
    x_axis = 2;
    ft_putchar('C');
    ft_putchar('\n');
    if (y == 1)
        return ;
    //Body
    while (y_axis <= y-1)
    {
        ft_putchar('B');
        while (x_axis <= x-1)
        {
            ft_putchar(' ');
            x_axis++;
        }
        x_axis = 2;
        ft_putchar('B');
        ft_putchar('\n');
    y_axis++;
    }
    //Footer
    ft_putchar('C');
    while (x_axis <= x-1)
    {
        ft_putchar('B');
        x_axis++;
    }
    x_axis = 2;
    ft_putchar('A');
    ft_putchar('\n');
}