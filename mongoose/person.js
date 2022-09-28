const { type } = require('express/lib/response');
const mongoose = require('mongoose');
const { stringify } = require('uuid');
mongoose.connect('mongodb://localhost:27017/productAPP')
    .then(() => {
        console.log("CONNECTING TO MONGODB");
    })
    .catch((ERR) => {
        console.log("OH NO ERROR!!!!");
        console.log(ERR);
    });
const personSchema = new mongoose.Schema({
    first: String,
    last: String
});

personSchema.virtual('fullName').get(function () {
    return `${this.first} ${this.last}`
});
personSchema.pre('save', async function () {
    this.first = 'samadhan';
    this.last = 'satterkadoda';
    console.log('HEY IT WORKED BERORE SAVE');
})

personSchema.post('save', async () => {
    console.log('HEY IT WORKED AFTER POST');
})
const person = mongoose.model('person', personSchema);