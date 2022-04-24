var x = [ 8,16,32 ]; 
age_calculation(x);

function age_calculation(params) {
  for (i=0; i<params.length; i++) {
      if(params[i]<10){
          console.log("Your are baby");
      }
      console.log(params[i]);
  }
}

// function agecount (age){
//     if (age<8){
//     console.log("Your are baby");
//     }
//     else{
//     console.log("Your are not baby");

//     }
// 