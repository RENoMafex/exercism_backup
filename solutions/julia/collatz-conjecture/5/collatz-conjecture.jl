function collatz_steps(n)
	if n < 1 || !isinteger(n)
		throw(DomainError(n, "must be positive integer"))
	end
	steps = 0
	while n > 1
		n = (iseven(n) ? n / 2 : n * 3 + 1)
		steps += 1
	end
	return steps
end
