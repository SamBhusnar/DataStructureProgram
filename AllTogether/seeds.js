const mongoose = require('mongoose');
const Product = require('./models/product');
// product require here those are
// module.exports from product.js
mongoose.connect('mongodb://localhost:27017/farmStand')
    .then(() => {
        console.log("CONNECTING TO MONGODB");
    })
    .catch((ERR) => {
        console.log("OH NO ERROR!!!!");
        console.log(ERR);
    });
const seedProduct = [
    {
        name: 'Apple',
        price: 20,
        category: 'fruit'

    },
    {
        name: 'Banana',
        price: 30,
        category: 'fruit'
    },
    {
        name: 'Sitaphal',
        price: 10,
        category: 'fruit'
    },
    {
        name: 'Lemon',
        price: 25,
        category: 'fruit'
    },
    {
        name: 'Potato',
        price: 200,
        category: 'vegetable'
    },
    {
        name: 'Ramphal',
        price: 230,
        category: 'fruit'
    },
    {
        name: 'Tomato',
        price: 99,
        category: 'fruit'
    },
    {
        name: 'Mango',
        price: 29,
        category: 'fruit'
    }
];

Product.insertMany(seedProduct)
    .then(res => {
        console.log(res);
    })
    .catch(err => {
        console.log(err);
    });


