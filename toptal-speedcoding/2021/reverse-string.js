/*
Given x is a string,
reverse the string x letter by letter.
*/

reverseString = (x) => {
    return x.split('').reverse().join('');
};

console.assert(reverseString('Hello from Toptal') === 'latpoT morf olleH');
console.assert(reverseString('Hello') === 'olleH');
console.assert(reverseString('abc abc cba cba') === 'abc abc cba cba');
