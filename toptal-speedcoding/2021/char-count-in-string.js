/*
Given x is a string of one character and y is a string,
find how many instances of string x are contained in y.
*/

charCountInString = (x, y) => {
    return y.split('').reduce((a, b) => a + (b === x), 0);
};

console.assert(charCountInString('$', '$he$llo$$$wo$rld') === 6);
console.assert(charCountInString('l', '$he$llo$$$wo$rld') === 3);
console.assert(charCountInString('c', 'abcde') === 1);
console.assert(charCountInString('d', 'c') === 0);
console.assert(charCountInString('d', 'd') === 1);
