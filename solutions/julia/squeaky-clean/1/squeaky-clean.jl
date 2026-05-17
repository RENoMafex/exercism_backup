function transform(c::Char)
	c == '-' && return "_"
	c == ' ' && return ""
	isuppercase(c) && return string("-", lowercase(c))
	isdigit(c) && return ""
	('α' <= c <= 'ω') && return "?"
	
	return string(c)
end

function clean(s::String)
	out_str = ""
	for c in s
		out_str = string(out_str, transform(c))
	end
	return out_str
end
