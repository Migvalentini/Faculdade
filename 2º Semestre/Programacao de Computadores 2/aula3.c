int main() {
    float m;
    int c, i;

    printf("Digite a media: ");
    scanf("%f",&m);

    i = m;

    switch (i)
    {
    case 10:
    case 9: c = 4; break;
    case 8: c = 3; break;
    case 7: c = 2; break;
    case 6: c = 1; break;
    default: c = 0; break;
    }

    printf("Conceito: %d",c);
}
