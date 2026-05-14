"Square the sum of the first `n` positive integers"
function square_of_sum(n)
	sum = 0
	for iteration in 1:n
		sum += iteration
	end

	square = sum * sum

	return square
end

"Sum the squares of the first `n` positive integers"
function sum_of_squares(n)
	sum = 0
	for iteration in 1:n
		sum += iteration * iteration
	end

	return sum
end

"Subtract the sum of squares from square of the sum of the first `n` positive ints"
function difference(n)
	return square_of_sum(n) - sum_of_squares(n)
end
