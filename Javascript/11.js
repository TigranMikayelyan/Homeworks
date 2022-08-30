//  11. Գրել ծրագիր, որն օգտագործելով *, =, _ և ցանկացած այլ սիմվոլ, էկրանին կնկարի տուն։

var n = 5;
var py = n;
var px = n;
var i = 1;
var j = 1;

for (i = 1; i <= n; ++i)
{
	for(j = 1; j < n * 2; ++j)
	{
		if (j == px || j == py)
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
for (i = 1; i <= n; ++i)
{
	for (j = 1; j <= n; ++j)
	{
		if (j == 1 || j == n || i == 1 || i == n)
		{
			process.stdout.write("* ");
		}	
			else
			{
				process.stdout.write("  ");
			}
	}
		console.log(" ");
}


