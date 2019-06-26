
const input = 'asdaqrew';
let vowels = [], consonents = [];
input.split('').forEach(ele => {
    if (ele === 'a' || ele === 'e' || ele === 'i' || ele === 'o' || ele === 'u') {
        vowels.push(ele);
    } else {
        consonents.push(ele);
    }
});
const output = vowels.concat(consonents).join('');
console.log(output);