// To append full stop at end of user input

function fullStopAtEnd() {
    let userInput = prompt("Enter the input");
    userInput = userInput.concat(".");
    alert("Your output is --> "+ userInput);
}
fullStopAtEnd();