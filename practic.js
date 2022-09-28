
let x = prompt('enter any number');
console.log(`The value of x is ${x}`);
function same(accept) {
    console.log('funtion starting execution');
    accept();
    console.log('funtion ending execution');

}
function sam(x) {
    console.log('hahaha');
    let coral = Math.floor((Math.random() * x) + 1);
    console.log(coral);
    console.log('hahaha');

}9
// sam(x);
// same(sam(x));
let samamad=sam(x);
