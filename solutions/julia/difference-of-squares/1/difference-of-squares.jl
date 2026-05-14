"Square the sum of the first `n` positive integers"
function square_of_sum(n)
	iteration = 0
	sum = 0
	while iteration < n
		iteration += 1

		sum += iteration
	end

	square = sum * sum

	return square
end

"Sum the squares of the first `n` positive integers"
function sum_of_squares(n)
	iteration = 0
	sum = 0
	while iteration < n
		iteration = iteration + 1

		sum += iteration * iteration
	end

	return sum
end

"Subtract the sum of squares from square of the sum of the first `n` positive ints"
function difference(n)
	return square_of_sum(n) - sum_of_squares(n)
end
