function bob(stimulus)
	s::String = strip(stimulus)

	# earliest possible return
	isempty(s) && return "Fine. Be that way!"
	question::Bool = endswith(s, '?')
	yelling::Bool = isuppercase(s)

	# Ditch if statements for boolean logic
	yelling && question && return "Calm down, I know what I'm doing!"
	question && return "Sure."
	yelling && return "Whoa, chill out!"
	return "Whatever."
end

function Base.isuppercase(s::String)::Bool
	# flag to check, if at least one uppercase char exists
	is_defined::Bool = false
	for c::Char in s
		if islowercase(c)
			return false
		elseif !is_defined && isuppercase(c) # Recheck for uppercase only until first uppercase
			is_defined = true
		end
	end
	return is_defined
end
