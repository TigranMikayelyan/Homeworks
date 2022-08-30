// 10. Ստեղծել հաշվիչ ծրագիր, որը մուտքագրում է երկու թվեր և գործողության սիմվոլը։ Օրինակ՝ 4, 5 և ‘+’։ Կատարել համապատասխան թվաբանական գործողությունը թվերի հետ ըստ մուտքագրված գործողության սիմվոլի և տպել արդյունքը էկրանին։ 

let num1 = 2;
let num2 = 5;
let op = '*';
switch(op)
{
        case '+':
                console.log(num1 + num2);
                break;
        case '-':
                console.log(num1 - num2);
                break;
        case '*':
                console.log(num1 * num2);
                break;
        case '/':
                console.log(num1 / num2);
                break;
        default:
                console.log("ERROR");
}
