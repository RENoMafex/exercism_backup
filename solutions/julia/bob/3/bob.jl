function bob(stimulus)
	s = strip(stimulus)
	silence::Bool = isempty(s)
	question::Bool = endswith(s, '?')
	yelling::Bool = isuppercase(s)

	if yelling && question
		return "Calm down, I know what I'm doing!"
	elseif yelling
		return "Whoa, chill out!"
	elseif question
		return "Sure."
	elseif silence
		return "Fine. Be that way!"
	else
		"Whatever."
	end
end

function Base.Unicode.isuppercase(s::AbstractString)::Bool
	# flag to check, if at least one uppercase char exists
	is_defined::Bool = false
	for c in s
		if islowercase(c)
			return false
		elseif isuppercase(c)
			is_defined = true
		end
	end
	return is_defined
end
