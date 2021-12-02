const fs = require("fs");

let input = fs.readFileSync("./input.txt");

let array = input.toString().split("\n").map((element) => parseInt(element.trim()));
console.log(array);

let counter = 0;
for(let i = 1; i < array.length; i++) {
    if(array[i] > array[i-1]) {
        counter = counter + 1;
    }
}
console.log(counter);