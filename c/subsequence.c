/*
██████  ██    ██     ██      ███████  ██████  ███    ██  █████  ██████  ██████  ██ 
██   ██  ██  ██      ██      ██      ██    ██ ████   ██ ██   ██ ██   ██ ██   ██ ██ 
██████    ████       ██      █████   ██    ██ ██ ██  ██ ███████ ██████  ██   ██ ██ 
██   ██    ██        ██      ██      ██    ██ ██  ██ ██ ██   ██ ██   ██ ██   ██ ██ 
██████     ██        ███████ ███████  ██████  ██   ████ ██   ██ ██   ██ ██████  ██
*/


#include <stdio.h>

// Função
int search(char query, char *str, int from)
{
    int i;
    for (i = from; str[i] != '\0'; ++i) {
        if (str[i] == query)
            return i;
    }
    return -1;
}

// Função padrao
int main()
{
    // Declaração das variaveis
    int i, j, k;
    int N, queries, pos;
    char sequence[100001], sub[101];

    // Obtem os valores via STDIN
    scanf("%d", &N);

    // Varre as sequencias e as querys
    for (i = 0; i < N; ++i) {
        scanf("%s%d", sequence, &queries);

        for (j = 0; j < queries; ++j) {
            pos = 0;
            scanf("%s", sub);

            for (k = 0; sub[k] != '\0'; ++k) {
                pos = search(sub[k], sequence, pos);
                if (pos < 0)
                    break;
                ++pos;
            }

            if (pos < 0)
                puts("No");
            else
                puts("Yes");
        }
    }

    return 0;
}
