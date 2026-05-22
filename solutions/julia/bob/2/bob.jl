function bob(stimulus)
	if is_yelling(stimulus) && is_question(stimulus)
		return "Calm down, I know what I'm doing!"
	elseif is_question(stimulus)
		return "Sure."
	elseif is_yelling(stimulus)
		return "Whoa, chill out!"
	elseif is_silence(stimulus)
		return "Fine. Be that way!"
	else
		"Whatever."
	end
end

function is_question(stimulus::String)::Bool
	if length(stimulus) < 1
		return false
	end
	if reverse(strip(stimulus))[1] == '?'
		return true
	else
		return false
	end
end

function is_yelling(stimulus::String)::Bool
	if length(stimulus) < 1
		return false
	end
	i = 0
	for c in stimulus
		if islowercase(c)
			return false
		end
		if isuppercase(c)
			i += 1
		end
	end
	return i > 0
end

function is_silence(stimulus::String)::Bool
	if length(stimulus) < 1
		return true
	end
	for c in stimulus
		if isspace(c)
			continue
		else
			return false
		end
	end
	return true
end