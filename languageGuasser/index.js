const express = require('express');// express is module
const app = express();
const path = require('path');// path is module
app.set('view engine', 'ejs');// what is this 
app.set('views', path.join(__dirname, '/views'));// from this directory join the path of /view directory
app.get('/', (req, res) => {
    res.render('home.ejs');
    console.log("hey it worked");
});
app.use(express.static((path.join(__dirname, '/public')))); //from this directory join the path of /public directory
app.get('/r/:subreddit', (req, res) => {
    const { subreddit } = req.params;
    res.render('subreddit.ejs', { subreddit });
});
app.listen(3000, () => {
    console.log('LISTENING ON PORT 3000');
})
app.get('/some', (req, res) => {
    const some = Math.floor(Math.random() * 10) + 1;
    console.log('it worked');
    res.render('random.ejs', { some });
});









































// const express = require('express');
// const res = require('express/lib/response');// it is automatically injected by express may be its wrie
// const app = express();
// // app.use((req,res)=>{
// //     res.send("what are asking");
// // });
// app.listen(1000, () => {
//     console.log("LISTENING ON PORT PORT NO 1000");
// });
// app.get('/', (req, res) => {
//     res.send("this is home page");

// });
// app.get('/r/:subreddit', (req, res) => {
//     res.send("this is an cats for your dreams come true now you can see here");
// });
// app.get('/dogs', (req, res) => {
//     res.send("woof");
// });
// app.get('/dogs/:something', (req, res) => {
//     res.send("woof");
// });
// app.get('/dogs/:something/:whatThing', (req, res) => {
//     res.send("woof");
// });
// app.get('/cats', (req, res) => {
//     res.send("meawo");
// });
// app.get('/netra', (req, res) => {
//     res.send("this is an netra official page hurry");
// });
// app.get('/search', (req, res) => {

//     let { saveq } = req.params
//     res.send(`search for ${saveq}`);
//     //     let {q}=req.query;
//     //     res.send(`This is result for :${q}`);
//      });
//     app.get('*', (req, res) => {
//         res.send("what kind of thing i give you");
//     });