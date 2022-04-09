void ft_putchar(char c);

void ft_single_row(int y_axis, int y)
{
    ft_putchar('/');
    ft_putchar('\n');
    while (y_axis <= y-1)
    {
        ft_putchar('*');
        ft_putchar('\n');
        y_axis++;
    }
    ft_putchar('\\');
    ft_putchar('\n');
}

void ft_header(int x_axis, int x)
{
    ft_putchar('/');
    while (x_axis <= x-1)
    {
        ft_putchar('*');
        x_axis++;
    }
    x_axis = 2;
    ft_putchar('\\');
    ft_putchar('\n');
}

void ft_body(int y_axis, int y, int x_axis, int x)
{
    while (y_axis <= y-1)
    {
        ft_putchar('*');
        while (x_axis <= x-1)
        {
            ft_putchar(' ');
            x_axis++;
        }
        x_axis = 2;
        ft_putchar('*');
        ft_putchar('\n');
    y_axis++;
    }
}

void ft_footer(int x_axis, int x)
{
    ft_putchar('\\');
    while (x_axis <= x-1)
    {
        ft_putchar('*');
        x_axis++;
    }
    x_axis = 2;
    ft_putchar('/');
    ft_putchar('\n');
}

/*
The ft_pattern function checks for potential edge cases and solves them
as early as possible. The printing of characters go from left to right and 
line after line. In most cases secondary functions are used to fill the figure. 
*/
void ft_pattern(int x, int y)
{
    int     x_axis;
    int     y_axis;

    x_axis = 2;
    y_axis = 2;
    if (x < 1 || y < 1)
        return ;
    if (x == 1 && y == 1)
    {
        ft_putchar('/');
        ft_putchar('\n');
        return ;
    }
    if (x == 1)
    {
        ft_single_row(y_axis, y);
        return ;
    }
    ft_header(x_axis, x);
    if (y == 1)
        return ;
    ft_body(y_axis, y, x_axis, x);
    ft_footer(x_axis, x);
}
