int main()
{
    int A[100];
    for (int i = 0; i < 100; i++)
    {
        A[i] = i + 1;
    }
    int *p = A;
    int *q = A + 24;
    int *r = A + 49;
    int *s = A + 74;

    printf("P: %d\n", *p);
    printf("Q: %d\n", *q);
    printf("R: %d\n", *r);
    printf("S: %d\n\n", *s);
    printf("Conteudo do vetor:\n");

    for (int i = 0; i < 100; i++)
    {
        if (i <= 24)
        {
            printf("%d ", *p + i);
        }
        else if (i <= 49)
        {
            printf("%d ", *q + (i - 24));
        }
        else if (i <= 74)
        {
            printf("%d ", *r + (i - 49));
        }
        else if (i < 100)
        {
            printf("%d ", *s + (i - 74));
        }
    }

    return 0;
}