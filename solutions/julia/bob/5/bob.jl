function bob(stimulus)
	s = strip(stimulus)

	question::Bool = false
	yelling::Bool = false
	silence::Bool = isempty(s)
	if !silence # if silence, skip unneeded function calls
		question = endswith(s, '?')
		yelling = s_isuppercase(s)
	end

	if yelling && question
		return "Calm down, I know what I'm doing!"
	elseif yelling
		return "Whoa, chill out!"
	elseif question
		return "Sure."
	elseif silence
		return "Fine. Be that way!"
	else
		return "Whatever."
	end
end

# renamed function
function s_isuppercase(s::AbstractString)::Bool
	# flag to check, if at least one uppercase char exists
	is_defined::Bool = false
	for c in s
		if islowercase(c)
			return false
		elseif !is_defined && isuppercase(c) # Recheck for uppercase only until first uppercase
			is_defined = true
		end
	end
	return is_defined
end
