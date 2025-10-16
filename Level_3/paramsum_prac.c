void putnbr(int num)
{
    if (num > 9)
        putnbr(num / 10);
    write(1, &"0123456789"[num % 10], 1);
}

int main(int ac, char **av)
{
    (void) av;
    int sum = ac - 1;
    putnbr(sum);
}
