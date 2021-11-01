/*
Given x is a number between 1 and 12,
return the month name (3 letter representation) it represents.
*/

monthToString = (x) => {
    return ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'][x - 1];
};

console.assert(monthToString(1) === 'Jan');
console.assert(monthToString(2) === 'Feb');
console.assert(monthToString(3) === 'Mar');
console.assert(monthToString(4) === 'Apr');
console.assert(monthToString(5) === 'May');
console.assert(monthToString(6) === 'Jun');
console.assert(monthToString(7) === 'Jul');
console.assert(monthToString(8) === 'Aug');
console.assert(monthToString(9) === 'Sep');
console.assert(monthToString(10) === 'Oct');
console.assert(monthToString(11) === 'Nov');
console.assert(monthToString(12) === 'Dec');
