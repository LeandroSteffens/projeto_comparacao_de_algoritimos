void shellsort(int tam_vetor, int *vetor)
{
 int i , j , value;
 int gap = 1;
  
 do {
  gap = 3*gap+1;
 } while(gap < tam_vetor);
  
 do {
  gap /= 3;
  for(i = gap; i < tam_vetor; i++) {
   value = vetor[i];
   j = i - gap;
    
   while (j >= 0 && value < vetor[j]) {
    vetor[j + gap] = vetor[j];
    j -= gap;
   }
   vetor[j + gap] = value;
  }
 } while(gap > 1);

 for (i = 0; i < tam_vetor; i++)
		printf("%d ", vetor[i]);
}
