function collatz_steps(n)
	if n < 1 || typeof(n) != Integer
		throw(DomainError(n, "must be positive integer"))
	end
	steps = 0
	while n > 1
		if n % 2 == 0
			n = n / 2
		else
			n = n * 3 + 1
		end
		steps += 1
	end
	return steps
end
