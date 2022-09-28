const express = require('express');
const res = require('express/lib/response');
const app = express();
app.listen(3000, () => {
    console.log('LISTENING ON PORT 3000');
});
app.get('/cats/:kart', (req, res) => {
    console.log("req.params:", req.params);
    console.log("req.query:", req.query);
    res.send("only say meaow from method get /cats");
    console.log("only say meaow from method get /cats");
});
