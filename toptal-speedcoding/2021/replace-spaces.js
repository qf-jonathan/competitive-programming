/*
Given x is a string,
replace all spaces in x with ‘%20’.
*/

replaceSpaces = (x) => {
    return x.replace(/\s/g, '%20');
};

console.assert(replaceSpaces('abc 123') === 'abc%20123');
console.assert(replaceSpaces('1 2 3 4') === '1%202%203%204');
console.assert(replaceSpaces('  acb') === '%20%20acb');
