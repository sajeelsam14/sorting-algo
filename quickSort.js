function quickSort(arr, lowerBound, upperBound) {
  if (lowerBound < upperBound) {
    let pivot = arr[upperBound];

    let i = lowerBound - 1;
    let j = lowerBound;

    for (j = lowerBound; j < upperBound; j++) {
      if (arr[j] <= pivot) {
        i++;
        let temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }

    let temp = arr[i + 1];
    arr[i + 1] = arr[upperBound];
    arr[upperBound] = temp;

    let pivotPosition = i + 1;

    quickSort(arr, lowerBound, pivotPosition - 1);
    quickSort(arr, pivotPosition + 1, upperBound);
  }
}

const arr = [5, 3, 0, 9, 2];
quickSort(arr, 0, arr.length - 1);
console.log("Sorted array:", arr);
