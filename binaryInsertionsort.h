// iterative implementation
int binarySearch(int *vetor, int item, int low, int high)
{
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (item == vetor[mid])
			return mid + 1;
		else if (item > vetor[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return low;
}

// Function to sort an array a[] of size 'n'
void binary(int *vetor, int tam_vetor)
{
	int i, loc, j, k, selected;

	for (i = 1; i < tam_vetor; ++i) {
		j = i - 1;
		selected = vetor[i];

		// find location where selected should be inseretd
		loc = binarySearch(vetor, selected, 0, j);

		// Move all elements after location to create space
		while (j >= loc) {
			vetor[j + 1] = vetor[j];
			j--;
		}
		vetor[j + 1] = selected;
	}

	for (i = 0; i < tam_vetor; i++)
		printf("%d ", vetor[i]);
}


