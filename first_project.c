/* Създайте програма, която подканя човека да въведе проста аритметична операция 
с две числа от екрана - събиране, изваждане, деление, умножение и отпечатва резултата. 
Помислете какви променливи и колко трябва да имате? Колко са вариантите, които можете да имате, 
като операции, има ли изключителни случаи, за които  трябва да помислим (напишете си ги)? 
Какво ще използвате за управление на процеса ? */

// Променливите за числата да са от тип float
// Вероятно трябва да има 3 пъти входни данни
// за 1во, 2ро число и знака за операцията, която ще се извършва
// Трябва да има 4 променливи 3 float (2 за входните данни и 1 в която да пазим резултата) и една char за знака, 
// 4 варианта на операции: +, -, *, /
// Изключение за което се сещам - да се подаде делене и второто число което се подава да е 0

// Защо числата да са float - защото може да се подаде такъв тип данни,
// ако при float подадем 4, ще го приеме като 4.0, НО
// ако при int подадем 4,5 ще гръмне

// Можем да направим задачата с проверки или swich-case,
// като нещото което да проверяваме да е знакът който ни се подава
// и в тялото на конструкцията просто да запишем в променливата за резултата съответната операция
// и накрая да принтираме операцията и резултата

// Трябва да помислим, дали да се въвежда цялата операция на един ред 
// и някак да я сплитнем и да вземем отделните елементи, но това не е учено до сега,
// или по някакъв начин да "подканваме" потребителя да въвежда едно по едно
// първото число, знака на операцията и второто число


// Да помислим за други "edge" кейсове, като делене на 0, които биха създали проблем
// като например задаване на прекалено голямо число
// вероятно ще трябва да дадем ограничен избор тук

// Може да проверим какво е максималното число което може да се пази във float/double
// или ако се наложи да използваме като тип на тези променливи - long double

// Test