// now we learn about function spread
// thank you 
    function something(cat,dog=43434,...eveyownels){
        //...eveyownels is a rest function is not a spread now 
        //  
       console.log('cat is :',cat);
       console.log('dog is :',dog);
       console.log('eveyownels is :',eveyownels);
    }
const odd=[1,3,5,7,9];
const even=[2,4,6,8]
const real=[...odd,...even]