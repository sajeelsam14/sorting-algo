function swap(arr, firstIndex, secondIndex) {
  let temp = arr[firstIndex];
  arr[firstIndex] = arr[secondIndex];
  arr[secondIndex] = temp;
}

function selectionSort(arr) {
  for (let i = 0; i < arr.length - 1; i++) {
    let key = i;
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[key] > arr[j]) {
        key = j;
      }
    }
    swap(arr, i, key);
  }
}

let arr = [6, 4, 3, 0, 9];
selectionSort(arr);
console.log("Sorted array:", arr);
