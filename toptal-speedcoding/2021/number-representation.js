/*
Given arr is an array of characters (a-z),
sort the array alphabetically and return a number representation for every character that occurred.
*/

numberRepresentation = (arr) => {
    arr.sort();
    arr.push("");
    let p = 0, ans = 0;
    for(let i = 1; i < arr.length; i++) {
        if(arr[i] !== arr[i - 1]) {
            ans = ans * 10 + i - p;
            p = i;
        }
    }
    return ans;
};

console.assert(numberRepresentation(['b','a','a','a','c','b','a']) === 421);
console.assert(numberRepresentation(['b','b','b','b','e','e','a']) === 142);
console.assert(numberRepresentation(['a','b','c','a','b','c','a']) === 322);
