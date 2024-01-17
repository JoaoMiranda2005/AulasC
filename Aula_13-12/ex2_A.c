void main() {
    int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p: %d.\n", *p);
}

//R: p deve armazenar memória, não um valor direto