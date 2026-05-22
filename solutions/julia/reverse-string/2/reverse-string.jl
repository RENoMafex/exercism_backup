function myreverse(str)
	reversed::Vector{Char} = []
	for c in str
		pushfirst!(reversed, c)
	end
	return String(reversed)
end
