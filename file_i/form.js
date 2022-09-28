// Leave the next line, the form must be assigned to a variable named 'form' in order for the exercise test to pass
const form = document.querySelector('form');
form.addEventListener('submit', function (e) {
    e.preventDefault();

    let newLi = documet.creatElement('li');
    let list = document.querySelector('#list');
    newLi.innerText="asdf";
    const newLocal = 'newLi';
    list.appendChild(newLocal);
    product.value = "";
    qty.value = "";

});