void troca(int* i, int* j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

//não foi alocada memória para temp 
