function merge(arr, lowerBound, mid, upperBound) {
  let arr1 = arr.slice(lowerBound, mid + 1);
  let arr2 = arr.slice(mid + 1, upperBound + 1);

  let i = 0,
    j = 0,
    k = lowerBound;

  while (i < arr1.length && j < arr2.length) {
    if (arr1[i] < arr2[j]) {
      arr[k] = arr1[i];
      i++;
    } else {
      arr[k] = arr2[j];
      j++;
    }
    k++;
  }

  while (i < arr1.length) {
    arr[k] = arr1[i];
    i++;
    k++;
  }

  while (j < arr2.length) {
    arr[k] = arr2[j];
    j++;
    k++;
  }
}

function divide(arr, lowerBound, upperBound) {
  if (lowerBound < upperBound) {
    const mid = Math.floor((upperBound + lowerBound) / 2);

    divide(arr, lowerBound, mid);
    divide(arr, mid + 1, upperBound);

    merge(arr, lowerBound, mid, upperBound);
  }
}

let arr = [7, 4, 0, 8, 3];
divide(arr, 0, arr.length - 1);
console.log("Final sorted array:", arr);
