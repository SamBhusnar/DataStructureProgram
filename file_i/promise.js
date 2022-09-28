var fakeReqestcallback = (url, resolve, reject) => {
    const delay = Math.floor(Math.random() * 4500) + 500;
    setTimeout(() => {
        if (delay > 4000) {
            console.log(delay)
            reject('connection Timeour:(')
        } else {
            console.log(delay)
            resolve(`Here your fake data from ${url} `);

        }
    }, delay);

}

fakeReqestcallback('books.com',
    function (data) {
        console.log('Hey it worked');
        console.log(data);
        fakeReqestcallback('books.com/page2', function (response) {
            console.log('Hey it worked');
            console.log(response);
            fakeReqestcallback('books.com/page3', function (response) {
                console.log('Hey it worked');
                console.log(response);
            }, function (err) {
                console.log('erore come in play');
                console.log(err);
            });

        }, function (err) {
            console.log('erore come in play');
            console.log(err);
        });
    }, function (err) {
        console.log('erore come in play');
        console.log(err);
    });
