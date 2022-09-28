const fackReqestcallback = (url, success, failiur) => {
    const delay = Math.floor(Math.random() * 4500) + 500;
    setTimeout(() => {
        if (delay > 4000) {
            failiur('Its error connection timeoutt:(');
        } else {
            success(`HERE YOUR FACK DATA FROM THIS SITE ${url}`);
        }
    }, delay);
};
fackReqestcallback('books.com1', function (responce) {
    console.log("HEY IT WORKED");
    console.log(responce);
    fackReqestcallback('books.com2', function (response2) {
        console.log('HEY IT WORKED');
        console.log(response2);
        fackReqestcallback('books.com3', function (response3) {
            console.log("HEY IT WORKED");
            console.log(response3);
        }, function (eri) {
            console.log("ERROR");
            console.log(eri);
        });
    }, function (error) {
        console.log("ERROR");
        console.log(error);
    });
}, function (errrrr) {
    console.log('ERROR');
    console.log(errrrr);
});