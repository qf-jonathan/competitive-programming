/*
Given x is a binary number,
return the decimal representation of x.
*/

binaryToNumber = (x) => {
    return parseInt(x, 2);
};


console.assert(binaryToNumber('10011011001101') === 9933);
console.assert(binaryToNumber('1001') === 9);
console.assert(binaryToNumber('11001110011101001101') === 845645);
console.assert(binaryToNumber('0') === 0);
console.assert(binaryToNumber('10') === 2);
console.assert(binaryToNumber('11') === 3);
