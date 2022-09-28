// https://icanhazdadjoke.com/
const getdadjokes=async()=>{
const config={ headers:{ accept:'application/json'}};
const sam=await axios.get("https://icanhazdadjoke.com/",config)
const newul=document.querySelector('#newul');
const newli=document.createElement('li');
newli.innerText=sam.data.joke;
newul.append(newli);
}
const button=document.querySelector('#jokes');
button.addEventListener('click',getdadjokes);
