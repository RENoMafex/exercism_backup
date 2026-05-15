function eggcount(number)
	count = 0
	for bit in bitstring(number)
		count = bit == '1' ? count + 1 : count
	end
	return count
end
