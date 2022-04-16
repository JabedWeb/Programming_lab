// This is an array array(0,10,80,67,60,89,91,56,45,30,95,83,99)
// Find the maximum value from this array.
// Must use a foreach loop.

var arr=[3]
var array=[3,10,5,67,60,89,91,56,45,30,95,83,99];

var max=array[0]; //

for(var i=0;i<array.length;i++){
    for(var i=1;i<array.length;i++){
        if(max<array[i]){   //max=10 arra[]
            max=array[i]
        }
    }
    console.log(max);
}