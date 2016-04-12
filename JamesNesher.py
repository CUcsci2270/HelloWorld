#Simple	interest	is	calculated	as	the	product	of	the	principal,	number	of	years,	
#and	interest,	all	divided	by	100.	Write	a	program	to	calculate	simple	interest	
#where	the	principal	amount,	duration,	and	interest	rate	are	all	inputs	from	
#the	user.	Your	program	should	output	the	result	in	a	nicely	formatted	print	

#duration	of	5	years	with	the	rate	of	interest	equal	to	12.5%, you	should	get	a	
#value	of	$6250.

#Interest is A=P(1+rt) R = percentage rate, r = R/100 P=inital money, P =10,000

P = int(input("Input principal amount: "))
t = int(input("Input duration (years): "))
R = float(input("Input interest rate: "))
#r = (R/100)
print P
print t
print R
a = (P*((R/100)*t))
print ("The simple interest is ", (a))
