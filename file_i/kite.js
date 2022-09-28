const sam = new XMLHttpRequest();
sam.onload = function () {
    console.log("HEY IT RESOLVED");
    console.log(this);
    console.log(this.responseText);
    let sam2=JSON.parse(this.responseText);
    console.log(sam2);
    console.log(sam2.name,sam2.mass,sam2.hair_color);
};
sam.onerror = function () {
    console.log("ERROR");
    console.log(this);
};

sam.open("GET", "https://swapi.dev/api/people/1/");
sam.send()


console.log('sam');
console.log(sam);