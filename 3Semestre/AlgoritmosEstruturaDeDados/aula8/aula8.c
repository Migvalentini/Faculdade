int PesquisaBinaria (int vet[], int chave, int Tam) {
    int inf = 0;     // limite inferior (o primeiro índice de vetor em C é zero          )
    int sup = Tam-1; // limite superior (termina em um número a menos. 0 a 9 são 10 números)
    int meio;
    while (inf <= sup)
    {
        meio = (inf + sup)/2;
        if (chave == vet[meio])
            return meio;
        if (chave < vet[meio])
            sup = meio-1;
        else
            inf = meio+1;
    }
    return -1;   // não encontrado
}

// x => chave | v[] => vetor ordenado | e => limite inferior (esquerda) | d => limite superior (direita)
int PesquisaBinaria (int x, int v[], int e, int d) {
    int meio = (e + d)/2;
    if (v[meio] == x)
        return meio;
    if (e >= d)
        return -1; // não encontrado
    else
        if (v[meio] < x)
            return PesquisaBinaria(x, v, meio+1, d);
        else
            return PesquisaBinaria(x, v, e, meio-1);
}

//Considere a seguinte sequência de elementos (n): 8-3-5-10-12-18-11-20-2-1-30-40-22-15
//
//a) Sendo H(n) a função resto(n,7), para inserções em uma tabela de hash de 7 posições:
//0
//1
//...
//6
//Insira os elementos em uma estrutura baseada em hashing aberto, com ordenação das listas por ordem de entrada.
//b) Insira os elementos em uma estrutura baseada em hashing fechado com bucket, com 3 buckets, no qual cada bucket tem 5 posições (overflow de 4 posições).
//c) Insira os elementos em uma estrutura baseada em hashing fechado com busca linear de posição, para uma função de reespalhamento RH = resto (H(n) + 1, tamanhoTabela), e para a qual o tamanho da tabela é igual a 17.