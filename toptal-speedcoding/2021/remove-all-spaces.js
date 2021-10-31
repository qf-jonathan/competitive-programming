/*
Given x is a string,
return the string after removing all spaces.
*/

removeAllSpaces = (x) => {
    return x.replace(/\s/g, '');
};

console.assert(removeAllSpaces('1 2 3') === '123');
console.assert(removeAllSpaces('hello world!') === 'helloworld!');
console.assert(removeAllSpaces('  Speed   Coding     ') === 'SpeedCoding');
