const mongoose = require('mongoose');
mongoose.connect('mongodb://localhost:27017/moviesAPP')
    .then(() => {
        console.log("CONNECTING TO MONGODB");
    })
    .catch((ERR) => {
        console.log("OH NO ERROR!!!!");
        console.log(ERR);
    });
const movieSchema = new mongoose.Schema({
    title: String,
    year: Number,
    score: Number,
    rating: String

});
const Movie = mongoose.model('Movie', movieSchema);
// Movie.insertMany([
//     { title: "Amadeus", year: 1986, score: 9.2, rating: "R" },
//     { title: "krish", year: 2011, score: 9.0, rating: "R" },
//     { title: "salman", year: 3333, score: 9.24, rating: "RP" },
//     { title: "shahruk", year: 19816, score: 9.21, rating: "R" },
//     { title: "avatar", year: 1981456, score: 9.1255, rating: "PR" }
// ])
//     .then((data) => {
//         console.log("IT worked");
//         console.log(data);
//     })
//     .catch((err) => {
//         console.log("OH NO ERROR");
//         console.log(err);
//     });