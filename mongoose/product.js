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
// const productSchema = new mongoose.Schema({
//     name: {
//         type: String,
//         required: true,
//         minlength: 20

//     },
//     price: {
//         type: Number,
//         default: 60000,
//         required: true,
//         min: [0, 'Number is greter than zero ya dodo']

//     },
//     isgood: {
//         type: Boolean,
//         default: true

//     },
//     categiries: {
//         type: [String],
//     },
//     qty: {
//         onstore: {
//             type: Number,
//             default: 10
//         },
//         instore: {
//             type: Number,
//             default: 10
//         }
//     },
//     size: {
//         type: String,
//         enum: ['S', 'M', 'L']

//     }
// });

//     productSchema.statics.changeEverything = function () {
//         return this.updateMany({}, { name: 'samadhan', price: 000000 });
//     }
//     productSchema.methods.isgoods = function () {
//         this.isgood = !this.isgood;
//         return this.save();
//     }
// productSchema.methods.ADDcategory = function (newcat) {
//     this.categiries.push(newcat);
//     return this.save();
// }
// productSchema.methods.greet = function () {
//     console.log("hello hi howdy");
//     console.log(`--from ${this.name}`);
// // }
// const productsave = mongoose.model('product', productSchema);
// const findproduct = async () => {
//     const foundProduct = await productsave.findOne({ name: "Netraprofetionsalbikesforprofetionals" });
//     // await foundProduct.greet();
//     // console.log(foundProduct);
    // foundProduct.ADDcategory('samadhanbhusnar');
    // console.log(foundProduct);
    // foundProduct.isgoods();
    // console.log(foundProduct);
};
// console.log(productsave.changeEverything());
// const bike = new productsave({ name: "Netraprofetionsalbikesforprofetionals", categiries: ['cycling', 'bike', 'playing', 'fighting', 'creyeting'], size:'S',isgood: false, price: 900000 , invalidetors: true})//  instances not return promise or any type of query that why we can not appliy them dot(.then properties)
// bike.save()
//     .then((data) =>{
//         console.log(data)
//     })
//        .catch(err => {
//         console.log(err)
//         console.log("OH NO ERROR")
//     });
// productsave.findOneAndUpdate({name:'Netraprofetionsalbikesforprofetionals'},{price:-888},{new:true,runValidators:true})
// .then(data => console.log(data))
// .catch(err => {
//     console.log(err)
//     console.log("OH NO ERROR")
// });
// productsave.changeEverything().then(data => console.log(data));
