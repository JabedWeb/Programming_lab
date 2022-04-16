var array=[];
array.push(11,12,43,9,8);

var count=0;

for (var i=0;i<array.length;i++){
console.log(array[i]);

}

for (var i=0;i<array.length;i++){

    for(var j=1;j<=array[i];j++){
        if(array[i]%j==0){
            count++;
        }
    }
    if(count==2){
        console.log("This is prime numbers",array[i] );
    }
    else{
        console.log("This is not prime numbers", array[i]);
    }
}