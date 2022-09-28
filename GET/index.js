const express = require('express');
const path = require('path');
const methodOverride = require('method-override');
const { v4: uuid } = require('uuid');
uuid();
const res = require('express/lib/response');
const exp = require('constants');
const { pathToFileURL } = require('url');
const app = express();
app.use(express.json());
app.use(methodOverride('_method'));
app.use(express.urlencoded({ extended: true }));
app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));
app.listen(3000, () => {
    console.log('ON PORT 3000');
});
app.get('/tacos', (req, res) => {
    res.send('WE GOT YOUR REQUEST FROM GET FROM');
});
app.get('/', (req, res) => {
    res.send('JUST GET /');
});
app.post('/', (req, res) => {
    res.send('JUST POSST/');
    const { meal, weight } = req.body;
    console.log(`Okay you  need ${meal} and { weight}`);
});
app.post('/tacos', (req, res) => {
    res.send('WE GOT YOUR REQUEST FROM POST FROM');
    const { meal1, weight1 } = req.body;
    console.log(req.body);
    console.log(`Okay you  need ${meal1} and ${weight1}`);
});
const comment = [
    {
        id: uuid(),

        name: 'samadhan',
        comment: 'what i am thining now can you guase'
    },
    {
        id: uuid(),
        name: 'alex',
        comment: 'nowaday eachone can make good things that help to humanity'
    },
    {
        id: uuid(),
        name: 'yi',
        comment: 'but some max people are good in our world '
    },
    {
        id: uuid(),
        name: 'rohan',
        comment: 'OK OKay all this are good but what we make exactally'
    },
    {
        id: uuid(),
        name: 'priya',
        comment: 'i have one idea i can tell you'
    },
    {
        id: uuid(),
        name: 'ganesh',
        comment: 'can you listene me i face some technical problem'
    },
    {
        id: uuid(),
        name: 'mahadev',
        comment: 'who funds that goods things that we make'
    }
];
app.get('/comments', (req, res) => {
    res.render('comments/index', { comment });
});
app.post('/comments', (req, res) => {
    const { name, comment } = req.body;
    comment.push({ name, comment, id: uuid() });
    res.redirect('/comments');
});
app.get('/comments/new', (req, res) => {
    res.render('comments/new');
});
app.get('/comments/:id/edit', (req, res) => {
    const { id } = req.params;
    const comment = comment.find(c => c.id === id);
    res.render('comments/edit', { comment });
});
app.get('/comments/:id', (req, res) => {
    const { id } = req.params;
    const comment = comment.find(c => c.id === id);
    res.render('comments/show', { comment });
});
app.patch('/comments/:id', (req, res) => {
    const { id } = req.params;
    const newCommentText = req.body.comment;
    const foundComment = comment.find(c => c.id === id);
    foundComment.comment = newCommentText;
    res.redirect('/comments');
});
