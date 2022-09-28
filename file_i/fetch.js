fetch("https://swapi.dev/api/people/1/")
    .then((data) => {
        console.log("HEY IT RESOLVED", data);
        return data.json();
    })
    .then((data) => {
        console.log("data form data.json", data);
        return fetch("https://swapi.dev/api/people/1/")
    })
    .then((res) => {
        console.log("third reqest resolved");
        let sam = res.json();
        console.log(sam);
        sam.then((sama) => {
            console.log("hello world", sama.birth_year);
        }).catch((ddd) => {
            console.log("bye world", ddd);
        });
    })
    .catch((e) => {
        console.log("ERROR", e);
    });
