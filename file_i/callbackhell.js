setTimeout(() => {
    let save = document.querySelector('body');
    save.style.backgroundColor = 'red';
    setTimeout(() => {
        save.style.backgroundColor = 'green';
        setTimeout(() => {
            save.style.backgroundColor = 'blue';
            setTimeout(() => {
                save.style.backgroundColor = 'yellow';
                setTimeout(() => {
                    save.style.backgroundColor = 'violet';
                    setTimeout(() => {

                        save.style.backgroundColor = 'indigo';
                        setTimeout(() => {
                            save.style.backgroundColor = 'orange';
                        }, 1000);// settime out seventh function called here

                    }, 1000);// settime out sixth function called here
                }, 1000);// settime out fifth function called here
            }, 1000);// settime out fourth function called here

        }, 1000);// settime out third function called here
    }, 1000);// settime out second function called here
}, 1000);// settime out first function called here

setTimeout(() => {
    let save = document.querySelector('body');

    save.style.backgroundColor = 'white';
    document.querySelector('h1').innerText = 'now color become cyan';
}, 8000);







