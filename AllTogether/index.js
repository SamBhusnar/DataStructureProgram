const express = require('express');
const app = express();
const path = require('path');
const mongoose = require('mongoose');
const Product = require('./models/product');
const res = require('express/lib/response');
mongoose.connect('mongodb://localhost:27017/farmStand')
    .then(() => {
        console.log("CONNECTING TO with express MONGODB");
    })
    .catch((ERR) => {
        console.log("OH NO ERROR with express!!!!");
        console.log(ERR);
    });
app.get('/dogs', (req, res) => {
    res.send('i am dog');
});

app.listen(3000, (req, res) => {
    console.log('ON PORT 3000');
});
app.use('/', (req, res) => {
    res.send('we got me');
    console.log('we got me');
});