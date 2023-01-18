// 12. Օգտագործելով * (աստղանիշ) սիմվոլները, էկրանին նկարել եռանկյունի


var n = 5;
var py = n;
var px = n;
var i = 1;
var j = 1;

for (i = 1; i <= n; ++i)
{
	for(j = 1; j < n * 2; ++j)
	{
		if (j == px || j == py || i == n)
		{
			process.stdout.write("*");
		}
		else
		{
			process.stdout.write(" ");
		}
	}
	--px;
	++py;
	console.log(" ");
}
