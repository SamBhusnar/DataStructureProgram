function sam(){
    console.log('This funtion returened another function');
   let sky= function(){
        console.log('I AM A RETURENED FUNCTION');
    }
    return sky;
}