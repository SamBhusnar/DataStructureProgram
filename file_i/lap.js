const fackpromise = (url) => {
    return new Promise((resolve, reject) => {
        const delay = Math.floor(Math.random() * 4500) + 500;
        setTimeout(() => {
            if (delay > 4000) {
                reject('ERROR');
            }
            else {
                resolve(`HERE DATA FROM YOUR ID ${url}`);
            }
        }, delay);
    });
};
fackpromise('books.com')
    .then((resolve) => {
        console.log('code is run');
        console.log(resolve);
        // return fackpromise('books.com');
    })
    .then((ROSOLVE2) => {
        console.log('code is run seconde time');
        console.log(ROSOLVE2);
    })
    .catch((err) => {
        console.log('connection Timeout:(');
        console.log(err);
    });