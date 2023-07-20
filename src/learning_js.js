
/*

What's up this is a comment!



*/


var num = 3;

let n =3;

const pi = 3.141579;
// var indicates scope of variable ecompasses whole script, let only local scope

console.log("hello its nice to meet you");
console.log("This indicates \"Quotation Marks\"");

var test_str_0 = "this is a test";
var test_str_1 = "dean";

var fav_place= "Hollywood";

// .length and string/char access is same in js i.e str[0] returns char of str at 0

console.log(test_str_0 += test_str_1);

console.log((test_str_0 + test_str_1).length);

console.log(fav_place[0] + fav_place.substring(1,fav_place.length) 
+ " is my favorite place but " + fav_place.substring(0,5) + 
" is my favorite woman!"
);

var my_s_1 = "boat";
var my_s_2 = "log";
var my_s_3 = "tree";
var my_s_4 = "happy";

function blanks_function(s1, s2, s3, s4)
{
        var final_string;

        final_string += (" " + s1 + " " + s2 + " " + s3 + " " + s4);

        return final_string;

}


console.log(blanks_function(my_s_1,my_s_2,my_s_3,my_s_4))

/*
.push function also applies for arrays
*/

var my_arr = [["Bulls",3],["Jimmy",12]];

console.log(my_arr);

// Prints the memory address

var test_arr = [3,1,4];

test_arr.push([5,4,1,7,2]);

console.log(test_arr);

// Returns removed last element

var last_removed_element = test_arr.pop();

// Returns removed first element

var fist_removed_element = test_arr.shift();

// Inserts the following elements in the first index of array

test_arr.unshift([4,1,3,8]);



// Objects in JavaScript

var animal = 
{       
        "type":"donkey",
        "age":18,
        "stripe_pattern":"gray",
        "urinated_recently":true
};


// Acess/Set instances

var temp_var = animal.type;

animal['stripe_pattern'] = "black";

console.log(JSON.stringify(test_arr));

// for loops

for(var i = 0;i<test_arr.length;i++)
{
        console.log(test_arr[i]);
}


// Anonymous functions, have no name but a have a clearly defined purpose 

(function()
{

        console.log("whire!");
});

const anonym_funciton = (num) => num+=5;

my_new_ar = [2,3,1,4];

var x;
var y;

var  [x,y,] = my_new_ar;

