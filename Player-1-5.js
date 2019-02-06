// To convert roman to integer

function romanToInteger() {
	var result = 0;
	alert("Enter <= 20");
	let romanNumber = prompt("Enter the input roman number you want to convert");
	if (romanNumber.length && romanNumber.length < 2) {
		result = this.getValidIntergerValue(romanNumber);
    } else {
		for (let i = 0; i < romanNumber.length; i ++) {
			result += this.getValidIntergerValue(romanNumber[i]);
		}
    }
    if (result > 20) {
        alert("Enter <= 20");
    } else {
        alert(romanNumber+ ' = ' +result);
    }
}
function getValidIntergerValue(romanNum) {
		result = (romanNum == 'I') ? 1 : (romanNum == 'V') ? 5 : (romanNum == 'X') ? 10 : "Invalid Number";
		return result;
}
romanToInteger();
