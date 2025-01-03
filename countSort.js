function countSort(arr, range) {
  let count = new Array(range + 1).fill(0);
  for (let a of arr) {
    count[a]++;
  }
  return count;
}

const arr = [5, 3, 9, 0, 1];

const res = countSort(arr, 9);

const newArray = [];

for (let i = 0; i < res.length; i++) {
  if (res[i]) {
    newArray.push(i);
  }
}

console.log(newArray);
