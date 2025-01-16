function computation(arr, lb, ub) {
  if (lb === ub) {
    return { min: arr[lb], max: arr[lb] };
  }

  if (ub === lb + 1) {
    return arr[lb] < arr[ub]
      ? { min: arr[lb], max: arr[ub] }
      : { min: arr[ub], max: arr[lb] };
  }

  let mid = Math.floor((lb + ub) / 2);

  let leftResult = computation(arr, lb, mid);
  let rightResult = computation(arr, mid + 1, ub);

  return {
    min: Math.min(leftResult.min, rightResult.min),
    max: Math.max(leftResult.max, rightResult.max),
  };
}

function divide(arr, lb, ub) {
  return computation(arr, lb, ub);
}

let result = divide([1, 2, 3, 4, 5, 6], 0, 5);

console.log("Min:", result.min);
console.log("Max:", result.max);
