let asycnfunction = async (sam) => {
    let samadhan=await fetch("https://swapi.dev/api/people/1/")
   // promise are not fullfill now
   
    .then((same) => {
        console.log(same);
        let metured=same.json();
        metured
        .then((samMeture)=>{
            console.log("name:", samMeture);
    } )})
        .catch((e) => {
            console.log("error", e);
        });
    console.log("hello world");
}
asycnfunction();
