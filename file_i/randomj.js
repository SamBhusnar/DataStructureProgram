const save = document.querySelector('#random');
const body = document.querySelector('body');
let saveor = () => {
    let r = Math.floor(Math.random() * 255) + 1;
    let g = Math.floor(Math.random() * 255) + 1;
    let b = Math.floor(Math.random() * 255) + 1;
    return `rgb(${r} ${g}  ${b})`;
}
let what=()=>{
    body.style.backgroundColor =saveor();
    console.log("someone click me!");
    let h2=document.querySelector('h2');
h2.innerText=saveor();
}
save.addEventListener('click', what);




