// This is an array array(0,10,80,67,60,89,91,56,45,30,95,83,99)
// Find the maximum value from this array.
// Must use a foreach loop.

2
var array=[3,10,5,67,60,89,91,56,45,30,95,83,99,89];

for(var i=0;i<array.length;i++){
    if(i%2==0){
        continue;
    }
    else{
        console.log(array[i]);
    }
    
}