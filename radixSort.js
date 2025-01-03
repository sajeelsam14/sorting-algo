function redixSort(arr, magnitude){
    const bucket = new Array(0,1,2,3,4,5,6,7,8,9);
    for(let i =0; i<arr.length; i++){

    }
    console.log(bucket);
}



function equalMagnitude(arr) {
    const stringArray = arr.map((element) => element.toString());
    let maxMagnitude = stringArray.reduce((maxLength, element) => {
        return Math.max(maxLength, element.length);
    }, 0);

    for(let i =0; i<stringArray.length; i++){
        while(stringArray[i].length !== maxMagnitude){
            stringArray[i] = "0"+stringArray[i];
        }
    }

    return {array : stringArray, magnitude: maxMagnitude}
}

const arr = [8, 77, 45, 21, 990, 4, 2];
const {array, magnitude} = equalMagnitude(arr);
redixSort(array, magnitude);
console.log(array);

