void quicksort(int *vetor, int left, int right) {
    int i, j, x, y;

    i = left;
    j = right;
    x = vetor[(left + right) / 2];
     
    while(i <= j) {
        while(vetor[i] < x && i < right) {
            i++;
        }
        while(vetor[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quicksort(vetor, left, j);
    }
    if(i < right) {
        quicksort(vetor, i, right);
    }
}