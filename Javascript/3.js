// 3. Մուտքագրել չորս փոփոխականներ, տպել նվազագույնի արժեքը, եթե չորս փոփոխականների գումարը հավասար է զրոյի։

let num1 = -2;
let num2 = -1;
let num3 = -1;
let num4 = 4;
let min;

if (num1 + num2 + num3 + num4 == 0) {
        if (num1 < num2 && num1 < num3 && num1 < num4)
        {
                min = num1;
        }
        else if (num2 < num1 && num2 < num3 && num2 <num4)
        {
                min = num2;
        }
        else if (num3 < num1 && num3 < num2 && num3 < num4)
        {
                min = num3;
        }
        else
        {
                min = num4;
        }
        console.log(min);
}
