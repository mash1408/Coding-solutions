var arr = [3, 6, 2, 56, 32, 5, 89, 32];
let largest
var skip=[]
const length=arr.length
for(var j=0;j<length ;j++){
    largest=arr[0]
for (var i = 0; i < arr.length; i++) {
    // if(!(largest in arr))
    if (largest < arr[i] ) {
        largest = arr[i];
    } 
// }
}
const index = arr.indexOf(largest);
console.log(largest)
arr.splice(index,1)

}
